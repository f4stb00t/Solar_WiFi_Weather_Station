# Zambretti Forecaster on Solar WiFi Weather Station
Based on the work of Open Green Energy.
https://www.instructables.com/id/Solar-Powered-WiFi-Weather-Station-V20/
Authors of the base code: Keith Hungerford and Debasish Dutta - Excellent work, gentlemen!

Major changes:
- simplified, restructured code (used Adafruit libraries for BME280 instead, sorry for this Keith)
- added relative pressure, dewpoint, dewpoint spread and heatindex calculations
- allow Blynk, ThingSpeak and MQTT data transmission
- redesigned box (simplified printing, less plastic usage, full snap-in)

Changes in V2.3
- included famous Zambretti forecaster (see Blynk example)
- added translation table for Zambretti forecast
- added English language
- added German language

Changes in V2.31
- added Dewpoint Spread
- fixed some minor things

Changes in V2.31 (MQTT version)
- allows to publish data to MQTT broker (alternative .ino file)

3KUdelte V2.31 MQTT - Forked by Frank Ulbrich and added some more sensors:
18.07.2019
- WeMOS D1 mini PRO 160MHz / 16MB
- BMP 280 (Temperatur/Barometer/Feuchte)auf IIC 0x76
- BME 280 (Temperatur/Barometer) auf IIC 0x76
- DHT22   (Temperatur/Feuchte) auf D7
- CCS811  (CO Gas) auf IIC 0x5A - bridge  WAK-GND - I2C port
- VELM6070 UV Light Sensor IIC - risk level http://www.vishay.com/docs/84310/designingveml6070.pdf

- Data exported to INFLUX DB
- Added User/Password to export ti MQTT
- housing https://github.com/FrankUlbrich/Solar_WiFi_Weather_Station/blob/master/housing.JPG
