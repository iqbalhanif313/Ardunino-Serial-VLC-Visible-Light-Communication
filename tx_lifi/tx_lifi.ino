#include <SoftwareSerial.h>
#define rx 2
#define tx 3

SoftwareSerial XSERIAL = SoftwareSerial(rx, tx);

void setup()
{
  XSERIAL.begin(9600);
  Serial.begin(9600);

}

void loop()
{
  Serial.write("Data Transmitted \n");
  XSERIAL.write("Test 1 \n");
  delay(100);
  XSERIAL.println("5mm Green LED ");
  delay(200);
  XSERIAL.println("Success :) \n ");
  delay(200);
}
