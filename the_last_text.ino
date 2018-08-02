#define D0 16
#define buzzer D0

#define sms A0

int red = 5;
int green = 4;
int blue = 2;

void setup() {
  Serial.begin(115200);
  pinMode(buzzer, OUTPUT);
  pinMode(blue, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(red, OUTPUT);
}
void loop() {
  int A = analogRead(sms);
  int value = map(A, 0, 1023, 100, 0);
  Serial.print("Value : ");
  Serial.print(value);
  Serial.println("%");

  if(value < 63)  {
    Light_alert();
  }
  if(value < 63 and value > 70)  {
    Medium_alert();
  }
  if(value > 70)  {
    Heavy_warning();
  }

}

void Light_alert()  {
  digitalWrite(green, 1);
  digitalWrite(red, 0);
  digitalWrite(blue, 0);
  digitalWrite(buzzer, 1);
  delay(1000);
  digitalWrite(buzzer, 0);
  delay(1000);
}

void Medium_alert() {
  digitalWrite(blue, 1);
  digitalWrite(green, 0);
  digitalWrite(red, 0);
  digitalWrite(buzzer, 1);
  delay(500);
  digitalWrite(buzzer, 0);
  delay(500);
}

void Heavy_warning()  {
  digitalWrite(red, 1);
  digitalWrite(blue, 0);
  digitalWrite(green, 0);
  digitalWrite(buzzer, 1);
  delay(100);
  digitalWrite(buzzer, 0);
  delay(100);
}
