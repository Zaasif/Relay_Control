/*
  Relay Control
  
  Turns on a Relay on or off depending on what you write to the Serial port.
  If you write "On"(ON and on work too), it will turn the Relay on. If "Off"
  ("OFF" and "off" work too) is written, the Relay is turned off
  
  Takes in the pin number(the one the Relay is connected to) as an argument

  modified 26 Feb 2015
  by Zain Ali Asif
 */

String sIn;

void setup() {
  pinMode(7, OUTPUT);
  Serial.begin (9600);
}


void loop() {
    while(Serial.available() > 0 ) {  
      sIn = Serial.readStringUntil('\n');
      if (sIn == "on" || sIn == "On" || sIn == "ON")
      {
          digitalWrite(7, HIGH);
      }
      else if (sIn == "Off" || sIn == "off" || sIn == "OFF")
      {
        digitalWrite(7, LOW);    
      }
      Serial.println(sIn);
    }
}
