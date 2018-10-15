int x;

void setup()
{
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(8, INPUT);
}

void loop()
{

//red = red >> 8;
  for (int y = 0; y < 255; y++) {
    analogWrite(9, y >> 8);
    analogWrite(10, y >> 8);
    analogWrite(11, y >> 8);
    delay(40);
  }
  x = analogRead(8);

}
