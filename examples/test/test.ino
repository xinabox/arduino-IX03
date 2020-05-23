#include <xIX03.h>
#include <Wire.h>

xIX03 IX03;

//#define Serial IX03
//#define Serial SerialUSB

void setup()
{
    Serial.begin(57600);
    //Serial1.begin(54000);
    Wire.begin();
    IX03.begin(57600);
}

void loop()
{
    char c[20] = {NULL};
    int k = 0;
    String h = "This is test number 1\nThis is test number 2\nThis is test number 3";
    Serial.print(h);
    while (Serial.available() > 0)
    {
        c[k] = Serial.read();
        k++;
    }
    Serial.println(h);
    delay(1000);
}