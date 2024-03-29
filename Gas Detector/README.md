<h1 align="center">Hi 👋, I'm Mohammed Nowful Khan</h1>
<h3 align="center">Hardware hacker</h3>

# ESP32 Fire Safety Sensor Monitoring

## Author
- **Hacker Nowful**
  - Instagram: [@mr_white_hat._](https://www.instagram.com/mr_white_hat._/)
  - YouTube: [Hacker Nowful](https://www.youtube.com/channel/UCu1kFHR9foStyJXqjo6JKDg)
  - Website: [Hypesec Infotech](https://www.hypesecinfotech.com/)

## Overview

This project utilizes an ESP32 microcontroller along with various sensors to monitor environmental conditions for fire safety purposes. It provides real-time readings of temperature, humidity, smoke level, and LPG (Liquefied Petroleum Gas) level. Additionally, it includes a web interface for remote monitoring.

## Features

- **Temperature and Humidity Monitoring**: Uses a DHT11 sensor to measure temperature and humidity levels.
- **Smoke Detection**: Measures smoke level using an analog smoke sensor.
- **LPG Detection**: Measures LPG level using an analog LPG sensor.
- **Web Interface**: Displays sensor readings in real-time through a web interface.

## Component List

| Component                  | Description                                        |
|----------------------------|----------------------------------------------------|
| ESP32 Development Board    | Microcontroller board based on ESP32 chip          |
| DHT11 Temperature/Humidity Sensor | Digital sensor for measuring temperature and humidity |
| Analog Smoke Sensor        | Sensor for detecting smoke levels                  |
| Analog LPG Sensor          | Sensor for detecting LPG gas levels                |
| OLED Display (128x32)      | Display module for visualizing sensor readings     |

## Circuit Connections

| Component             | ESP32 Pin | Description                               |
|-----------------------|-----------|-------------------------------------------|
| DHT11 Sensor          | Pin 4     | Digital sensor for temperature and humidity measurement |
| Analog Smoke Sensor   | Pin 34    | Analog sensor for detecting smoke levels  |
| Analog LPG Sensor     | Pin 35    | Analog sensor for detecting LPG gas levels |
| OLED Display (128x32) | SDA: 21<br/>SCL: 22 | I2C communication for displaying sensor readings |

## Setup

1. **Hardware Setup**:
   - Connect the components according to the circuit connections table.
   - Make sure all connections are secure and correct.

2. **Software Setup**:
   - Install the required libraries: WiFi, WebServer, DHT, Adafruit_SSD1306.
   - Upload the code to your ESP32 board.

3. **Accessing the Web Interface**:
   - Once the ESP32 is connected to power, it will create an access point (AP) named "Fire Safety" with the password "password".
   - Connect your device to this AP.
   - Open a web browser and navigate to the IP address `http://192.168.4.1` to view the sensor readings.

## Usage

- The web interface will automatically refresh every 2 seconds to display the latest sensor readings.
- Sensor readings include temperature, humidity, smoke level, and LPG level.
- The web interface will indicate if smoke or gas leakage is detected.

## Dependencies

- [WiFi](https://github.com/espressif/arduino-esp32/tree/master/libraries/WiFi)
- [WebServer](https://github.com/espressif/arduino-esp32/tree/master/libraries/WebServer)
- [DHT](https://github.com/adafruit/DHT-sensor-library)
- [Adafruit_SSD1306](https://github.com/adafruit/Adafruit_SSD1306)

## License

This project is licensed under the [MIT License](LICENSE).

## Acknowledgments
Thanks to the open-source community for providing libraries and tools used in this project.

**Happy hacking!**

<p align="left"> <img src="https://komarev.com/ghpvc/?username=hackernowful&label=Profile%20views&color=0e75b6&style=flat" alt="hackernowful" /> </p>

<p align="left"> <a href="https://github.com/ryo-ma/github-profile-trophy"><img src="https://github-profile-trophy.vercel.app/?username=hackernowful" alt="hackernowful" /></a> </p>

<p align="left"> <a href="https://twitter.com/hypesecinfotech" target="blank"><img src="https://img.shields.io/twitter/follow/hypesecinfotech?logo=twitter&style=for-the-badge" alt="hypesecinfotech" /></a> </p>

- 🔭 I’m currently owning a **Hypesec Infotech**

- 👨‍💻 All of my projects are available at [https://linktr.ee/Hackernowful](https://linktr.ee/Hackernowful)

- 📝 I regularly write articles on [https://hypesecinfotech.com/blog.html](https://hypesecinfotech.com/blog.html)

- 💬 Ask me about **Cyber Security**

- 📫 How to reach me **nowful@hypesecinfotech.com**

<h3 align="left">Connect with me:</h3>
<p align="left">
<a href="https://twitter.com/hypesecinfotech" target="blank"><img align="center" src="https://raw.githubusercontent.com/rahuldkjain/github-profile-readme-generator/master/src/images/icons/Social/twitter.svg" alt="hypesecinfotech" height="30" width="40" /></a>
<a href="https://linkedin.com/in/hypesec infotech" target="blank"><img align="center" src="https://raw.githubusercontent.com/rahuldkjain/github-profile-readme-generator/master/src/images/icons/Social/linked-in-alt.svg" alt="hypesec infotech" height="30" width="40" /></a>
<a href="https://instagram.com/mr_white_hat._" target="blank"><img align="center" src="https://raw.githubusercontent.com/rahuldkjain/github-profile-readme-generator/master/src/images/icons/Social/instagram.svg" alt="mr_white_hat._" height="30" width="40" /></a>
<a href="https://www.youtube.com/@hackernowful" target="blank"><img align="center" src="https://raw.githubusercontent.com/rahuldkjain/github-profile-readme-generator/master/src/images/icons/Social/youtube.svg" alt="hypesec infotech" height="30" width="40" /></a>
</p>
<h3 align="left">Languages and Tools:</h3>
<p align="left"> <a href="https://www.arduino.cc/" target="_blank" rel="noreferrer"> <img src="https://cdn.worldvectorlogo.com/logos/arduino-1.svg" alt="arduino" width="40" height="40"/> </a>
  <a href="https://www.gnu.org/software/bash/" target="_blank" rel="noreferrer"> <img src="https://www.vectorlogo.zone/logos/gnu_bash/gnu_bash-icon.svg" alt="bash" width="40" height="40"/> </a> <a href="https://www.blender.org/" target="_blank" rel="noreferrer"> <img src="https://download.blender.org/branding/community/blender_community_badge_white.svg" alt="blender" width="40" height="40"/> </a> <a href="https://firebase.google.com/" target="_blank" rel="noreferrer"> <img src="https://www.vectorlogo.zone/logos/firebase/firebase-icon.svg" alt="firebase" width="40" height="40"/> </a> <a href="https://git-scm.com/" target="_blank" rel="noreferrer"> <img src="https://www.vectorlogo.zone/logos/git-scm/git-scm-icon.svg" alt="git" width="40" height="40"/> </a> <a href="https://ifttt.com/" target="_blank" rel="noreferrer"> <img src="https://www.vectorlogo.zone/logos/ifttt/ifttt-ar21.svg" alt="ifttt" width="40" height="40"/> </a> <a href="https://developer.mozilla.org/en-US/docs/Web/JavaScript" target="_blank" rel="noreferrer"> <img src="https://raw.githubusercontent.com/devicons/devicon/master/icons/javascript/javascript-original.svg" alt="javascript" width="40" height="40"/> </a> <a href="https://www.linux.org/" target="_blank" rel="noreferrer"> <img src="https://raw.githubusercontent.com/devicons/devicon/master/icons/linux/linux-original.svg" alt="linux" width="40" height="40"/> </a> <a href="https://www.php.net" target="_blank" rel="noreferrer"> <img src="https://raw.githubusercontent.com/devicons/devicon/master/icons/php/php-original.svg" alt="php" width="40" height="40"/> </a> <a href="https://www.python.org" target="_blank" rel="noreferrer"> <img src="https://raw.githubusercontent.com/devicons/devicon/master/icons/python/python-original.svg" alt="python" width="40" height="40"/> </a> <a href="https://www.ruby-lang.org/en/" target="_blank" rel="noreferrer"> <img src="https://raw.githubusercontent.com/devicons/devicon/master/icons/ruby/ruby-original.svg" alt="ruby" width="40" height="40"/> </a> </p>
