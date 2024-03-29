#include <WiFi.h>
#include <WebServer.h>
#include <DHT.h>
#include <Adafruit_SSD1306.h>


#define DHT_PIN 4
#define SMOKE_SENSOR_PIN 34
#define LPG_SENSOR_PIN 35
#define OLED_SDA 21
#define OLED_SCL 22

#define OLED_WIDTH 128
#define OLED_HEIGHT 32

const char *ssid = "Fire Saftey";  // SSID of the ESP32 soft AP
const char *password = "password"; // Password for the ESP32 soft AP

DHT dht(DHT_PIN, DHT11);
Adafruit_SSD1306 display(OLED_WIDTH, OLED_HEIGHT, &Wire, -1);
WebServer server(80);

float temperature = 0;
float humidity = 0;
int smokeLevel = 0;
bool lpgLevel = 0;


void setup() {
  Serial.begin(115200);
  Wire.begin(OLED_SDA, OLED_SCL); // Initialize I2C communication for the OLED display
  if (!display.begin(SSD1306_SWITCHCAPVCC, 0x3C)) {
    Serial.println(F("SSD1306 allocation failed"));
    while (1);
  }
  pinMode(LPG_SENSOR_PIN, INPUT);
  dht.begin();
  WiFi.softAP(ssid, password);
  IPAddress IP = WiFi.softAPIP();
  Serial.print("AP IP address: ");
  Serial.println(IP);
  server.on("/", handleRoot);
  server.begin();
}

void loop() {
  temperature = dht.readTemperature();
  humidity = dht.readHumidity();
  smokeLevel = analogRead(SMOKE_SENSOR_PIN);
  lpgLevel = analogRead(LPG_SENSOR_PIN);
  
  updateDisplay();
  server.handleClient();
}

void handleRoot() {
  float temperature = dht.readTemperature();
  float humidity = dht.readHumidity();
  int smokeLevel = analogRead(SMOKE_SENSOR_PIN);
  int lpgLevel = analogRead(LPG_SENSOR_PIN);

  // Check if smoke level exceeds threshold
  bool smokeDetected = (smokeLevel > 350);
  bool lpgDetected = (lpgLevel > 100);
  // Generate the HTML response
String webpage = "<!DOCTYPE html><html><head><title>ESP32 Sensor Readings</title>";
webpage += "<style>";
webpage += "body {";
webpage += "  font-family: Arial, sans-serif;";
webpage += "  background-color: #f0f0f0;";
webpage += "  margin: 0;";
webpage += "  padding: 0;";
webpage += "}";
webpage += "#container {";
webpage += "  width: 80%;";
webpage += "  margin: 20px auto;";
webpage += "  background-color: #fff;";
webpage += "  border-radius: 10px;";
webpage += "  padding: 20px;";
webpage += "  box-shadow: 0 0 10px rgba(0, 0, 0, 0.1);";
webpage += "}";
webpage += "h1 {";
webpage += "  color: #333;";
webpage += "}";
webpage += "p {";
webpage += "  color: #666;";
webpage += "}";
webpage += "#smoke-status {";
webpage += "  color: red;";
webpage += "  font-weight: bold;";
webpage += "}";
webpage += "</style>";
webpage += "</head><body>";
webpage += "<meta http-equiv='refresh' content='2'>";
webpage += "<div id='container'>";
webpage += "<h1>ESP32 Sensor Readings</h1>";
webpage += "<p>Temperature: " + String(temperature) + " °C</p>";
webpage += "<p>Humidity: " + String(humidity) + " %</p>";
webpage += "<p>Smoke Level: " + String(smokeLevel) + "</p>";
webpage += "<p>Lpg Level: " + String(lpgLevel) + "</p>";


if (lpgDetected) {
  webpage += "<p id='smoke-status'>Gas Leakage Detected</p>";
} else {
  webpage += "<p id='smoke-status'>No Gas Leakage Detected</p>";
}

// Add smoke detection status
if (smokeDetected) {
  webpage += "<p id='smoke-status'>Smoke Detected</p>";
} else {
  webpage += "<p id='smoke-status'>No Smoke Detected</p>";
}


webpage += "</div>";
webpage += "</body></html>";

  // Send the HTML response
  server.send(200, "text/html", webpage);
}


void updateDisplay() {
  bool smokeDetected = (smokeLevel > 350);
  bool lpgDetected = (lpgLevel > 100);
  display.clearDisplay();
  display.setTextSize(1);
  display.setTextColor(SSD1306_WHITE);
  display.setCursor(0, 0);
  display.println("Temperature: " + String(temperature) + " C");
  display.println("Humidity: " + String(humidity) + " %");
  if (smokeDetected) {
    display.println("Smoke Detected");
  } else {
  display.println("Smoke Level: " + String(smokeLevel));
  }
 if (lpgDetected) {
    display.println("LPG Detected");
  } else {
  display.println("LPG Level: " + String(lpgLevel));
  }
  display.display();
}
