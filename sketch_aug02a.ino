#define D0 16 //Map NodeMCU pin to ESP8266 Module
#define LED D0 // Define LED pin
void setup()
{
pinMode(LED,OUTPUT); // setup output
}
void loop()
{
digitalWrite(LED,HIGH); // Pin D0 is HIGH
delay(500);
digitalWrite(LED,LOW); // Pin D0 is LOW
delay(500);
digitalWrite(LED,HIGH); // Pin D0 is HIGH
delay(500);
digitalWrite(LED,LOW); // Pin D0 is LOW
delay(500);
digitalWrite(LED,HIGH); // Pin D0 is HIGH
delay(500);
digitalWrite(LED,LOW); // Pin D0 is LOW
delay(500);
digitalWrite(LED,HIGH); // Pin D0 is HIGH
delay(250);
digitalWrite(LED,LOW); // Pin D0 is LOW
delay(250);
digitalWrite(LED,HIGH); // Pin D0 is HIGH
delay(250);
digitalWrite(LED,LOW); // Pin D0 is LOW
delay(250);
digitalWrite(LED,HIGH); // Pin D0 is HIGH
delay(250);
digitalWrite(LED,LOW); // Pin D0 is LOW
delay(250);
}
