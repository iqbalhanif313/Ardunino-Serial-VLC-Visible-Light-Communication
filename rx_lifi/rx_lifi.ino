#include <SoftwareSerial.h>
#define rx 0
#define tx 1


SoftwareSerial XSERIAL = SoftwareSerial(rx, tx);

void setup()
{
  XSERIAL.begin(9600);

  Serial.begin(9600);

  Serial.print("Message...");
}

void loop()
{
  if (XSERIAL.available())
  {
    Serial.print((char)XSERIAL.read());
  }
}
