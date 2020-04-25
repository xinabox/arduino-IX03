#include <xIX03.h>
#include <Wire.h>

xIX03 IX03;

//#define Serial IX03
#define Serial SerialUSB

void setup()
{
    Serial.begin(9600);
    Serial1.begin(9600);
    Wire.begin();
    while (!SerialUSB);
    IX03.begin(9600);
}

void loop()
{
    char c[20] = {NULL};
    int k = 0;
    String h = "This is test number 1\nThis is test number 2\nThis is test number 3";
    Serial1.print(h);
    while (Serial1.available() > 0)
    {
        c[k] = Serial1.read();
        k++;
    }
    Serial.println(strtod(c, NULL), 6);
    delay(1000);
}