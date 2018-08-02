// set pin numbers:
#define D0 16 // Map NodeMCU Pin to ESP8266 Pin
#define D2 4
#define buttonPin D2 // pushbutton pin
#define ledPin D0 // LED pin

void setup()
{
Serial.begin(9600); // initialize serial:
pinMode(ledPin, OUTPUT);
pinMode(buttonPin, INPUT_PULLUP);
attachInterrupt(buttonPin, EXTI2_ISR, CHANGE);
}
void loop()
{
delay(250);
}
void EXTI2_ISR()
{
digitalWrite(ledPin,!digitalRead(ledPin));
Serial.println("Interrupt from pin D2");
}
