// Arduino Relay Control Code
 
#define relay 3
#define interval 1000
void setup() {
  pinMode(relay, OUTPUT);
}
void loop()
{
   digitalWrite(relay, HIGH);
   delay(interval);
   digitalWrite(relay, LOW);
   delay(interval);
}