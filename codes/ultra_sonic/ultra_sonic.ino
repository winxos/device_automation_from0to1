int trig = 3;
int echo = 4;
void setup() {
  Serial.begin(9600);
  pinMode(trig,OUTPUT);
}
int get_dist()
{
  digitalWrite(trig, LOW);
  digitalWrite(trig, HIGH);
  delayMicroseconds(2);
  digitalWrite(trig, LOW);
  return pulseIn(echo, HIGH, 30000) / 58;
}
void loop() {
  // put your main code here, to run repeatedly:
  Serial.println(get_dist());
  delay(100);
}
