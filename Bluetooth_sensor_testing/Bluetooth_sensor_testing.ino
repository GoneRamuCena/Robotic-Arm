
void setup()
{
  Serial.begin(9600);
  Serial1.begin(9600);

  Serial.println("Bluetooth test started");
}

void loop()
{
  if (Serial1.available())
  {
    int data = Serial1.read();

    Serial.print("Received byte: ");
    Serial.println(data);
  }
}
