/*----------------------------------------------------------------------------------------------------
  Project Name : Solar Powered WiFi Weather Station V2.31
  Features: temperature, dewpoint, dewpoint spread, heat index, humidity, absolute pressure, relative pressure, battery status and
  the famous Zambretti Forecaster (multi lingual)
  Authors: Keith Hungerford, Debasish Dutta and Marc Stähli
  Website : www.opengreenenergy.com

******* configuration control constant for use of Blynk and/or Thingspeak ***/

const String App1 = "BLYNK";             // empty string if not applicable -> "" else "BLYNK" 
const String App2 = "THINGSPEAK_off";    // empty string if not applicable -> "" else "THINGSPEAK"
const String App3 = "MQTT_off";          // empty string if not applicable -> "" else "MQTT"
const String App4 = "INFLUX_off";        // empty string if not applicable -> "" else "INFLUX"


/****** Blink or ThingSpeak Settings ****************************************/

const char* server = "api.thingspeak.com";        // Thingspeak Write API
const char* api_key = "your Thingspeak API key";         // API write key 


/* Blynk Internet ********************************************************************/
//char auth[] = "your Blynk Auth Token";               // Blynk Auth Token

/* Blynk FUlb ********************************************************************/
#define BLYNK_PRINT Serial          // Comment this out to disable prints and save space
//#include <BlynkSimpleEsp8266.h>

char auth[] = "336676f9dxxxxxxxxxxxxx";    // Wetterstation 2.31 WeMos-4
char ssid[] = "ZugriffspunktIoT";          // WiFi Router ssid
char pass[] = "appassword";           // WiFi Router password
char bserver[] =  "192.168.4.23";          // IP des lokalen Blynk Servers
/*********************************************************************************/

/****** MQTT Settings ************************************************************/
const char* mqtt_server = "192.168.4.21";     // MQTT Server (broker) address
const char* mqtt_user = "iobroker";           // MQTT Server (broker) userid
const char* mqtt_pass = "iopassword";           // MQTT Server (broker) password
/*********************************************************************************/

/****** INFLUX Settings **********************************************************/
#define INFLUXDB_HOST "192.168.4.23"          // INFLUX Server (DB) address
#define INFLUXDB_PORT 8086                    // INFLUX Server (DB) port
#define INFLUXDB_DATABASE "testdaten"         // INFLUX Server (DB) database
#define INFLUXDB_USER "admin"                 // INFLUX Server (DB) influx
#define INFLUXDB_PASS "adminpassword"          // INFLUX Server (DB) password
/*********************************************************************************/

/****** Additional Settings ******************************************************/
#define LANGUAGE 'DE'               //either 'DE' for German or 'EN' for English

#define BME_TEMP_CORR (-1)          //Manual correction of temp sensor (mine reads 1 degree too high)
#define ELEVATION (33)              //Enter your elevation in m ASL to calculate rel pressure (ASL/QNH) at your place
#define BME_HUM_CORR (+10)          //Humidity for BME Sensor
#define sleepTimeMin (10)           //setting of deepsleep time in minutes (default: 10)

// NTP
#define NTP_SERVER      "ch.pool.ntp.org"
//#define TZ              1         // (utc+) TZ in hours
#define TZ              0           // (utc+) TZ in hours
//#define DST_MN          60        // use 60mn for summer time in some countries
#define DST_MN          0           // use 60mn for summer time in some countries

#define TZ_SEC          ((TZ)*3600)  // don't change this
#define DST_SEC         ((DST_MN)*60)// don't change this

/**********Blynk & ThingSpeak assginments ---------------------------------

Blynk:

virtual pin 0 Temperature (Celcius)
virtual pin 1 Humidity (%)
virtual pin 2 Absolute Pressure (hPa)
virtual pin 3 Relative Pressure (hPa)
virtual pin 4 Battery Volts (V)
virtual pin 5 Dewpoint (Celcius)
virtual pin 6 HeatIndex (Celcius)
virtual pin 7 Zambrettis Words
virtual pin 8 Accuracy in percent (%)
virtual pin 9 Tend in Words
virtual pin 10 Dewpoint Spread
temperature_DHT);          // virtual pin 11
humidity_DHT);             // virtual pin 12
value_CO2);                // virtual pin 13
value_TVOC);               // virtual pin 14
value_UVindex);            // virtual pin 15

ThingSpeak:

Field 1: Relative Pressure (hPa)
Field 2: Temperature (Celcius)
Field 3: Humidity (%)
Field 4: Battery (V)
Field 5: Absolute Pressure (hPa)
Field 6: Dewpoint (Celcius)
Field 7: HeatIndex (Celcius) 

***************************************************************************/
