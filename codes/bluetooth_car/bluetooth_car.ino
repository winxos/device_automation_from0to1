void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (Serial.available())
  {
    char c = Serial.read();
    Serial.println(c);
    switch (c)
    {
      case 'f':
        Serial.println("forward");
        break;
      case 's':
        Serial.println("stop");
        break;
      case 'b':
        Serial.println("back");
        break;
    }
  }
}
