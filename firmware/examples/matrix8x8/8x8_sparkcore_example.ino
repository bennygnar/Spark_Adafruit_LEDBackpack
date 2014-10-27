// This #include statement was automatically added by the Spark IDE.
#include "Adafruit_LEDBackpack/Adafruit_LEDBackpack.h"

// This #include statement was automatically added by the Spark IDE.
#include "OneWire/OneWire.h"

#define MATRICES 3

Adafruit_8x8matrix matrix1 = Adafruit_8x8matrix ();
Adafruit_8x8matrix matrix2 = Adafruit_8x8matrix ();
Adafruit_8x8matrix matrix3 = Adafruit_8x8matrix ();



void setup() {
  Serial.begin(9600);
    // Init/start matrices
  matrix1.begin(0x70);
  matrix1.setTextWrap(false); // Allow text to run off edges
  matrix2.begin(0x71);
  matrix2.setTextWrap(false); // Allow text to run off edges
  matrix3.begin(0x72);
  matrix3.setTextWrap(false); // Allow text to run off edges

}

void loop() {

// uint8_t count = 1;

    for(uint8_t x=0; x<10; x++)
    {

    char num = 'a';
    num = x;

    matrix1.setTextSize(1);
    matrix1.setTextColor(LED_ON);
    matrix1.clear();
    matrix1.setCursor(0,0);
    matrix1.print(x);
    matrix1.writeDisplay();  // write the changes we just made to the display
      
    matrix2.setTextSize(1);
    matrix2.setTextColor(LED_ON);
    matrix2.clear();
    matrix2.setCursor(0,0);
    matrix2.print(x);
    matrix2.writeDisplay();  // write the changes we just made to the display
      
    matrix3.setTextSize(1);
    matrix3.setTextColor(LED_ON);
    matrix3.clear();
    matrix3.setCursor(0,0);
    matrix3.print(x);
    matrix3.writeDisplay();  // write the changes we just made to the display
    delay(250);
    }

    for(int x=15; x>=0; x--)
    {
    matrix1.setBrightness(x);
    matrix2.setBrightness(x);
    matrix3.setBrightness(x);
    delay(250);
    }

    for(int i=0; i<=15; i++)
    {
    matrix1.setBrightness(i);
    matrix2.setBrightness(i);
    matrix3.setBrightness(i);
    delay(250);
    }

}
