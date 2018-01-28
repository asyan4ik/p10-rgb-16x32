// testshapes demo for Adafruit RGBmatrixPanel library.
// Demonstrates the drawing abilities of the RGBmatrixPanel library.
// For 16x32 RGB LED matrix:
// http://www.adafruit.com/products/420

// Written by Limor Fried/Ladyada & Phil Burgess/PaintYourDragon
// for Adafruit Industries.
// BSD license, all text above must be included in any redistribution.

#include <Adafruit_GFX.h>   // Core graphics library
#include <RGBmatrixPanel.h> // Hardware-specific library

#define CLK 8  // MUST be on PORTB! (Use pin 11 on Mega)
#define LAT A3
#define OE  9
#define A   A0
#define B   A1
#define C   A2
RGBmatrixPanel matrix(A, B, C, CLK, LAT, OE, false);

void setup() {

  matrix.begin();
  matrix.cp437(true);
  // fill the screen with 'black'
  matrix.fillScreen(matrix.Color333(0, 0, 0));
  
  // draw some text!
  matrix.setCursor(1, 0);   // start at top left, with one pixel of spacing
  matrix.setTextSize(1);    // size 1 == 8 pixels high
  

  
  matrix.setTextColor(matrix.Color333(0,7,7));
 // matrix.println(utf8rus("З"));
  matrix.print(utf8rus("АБВ"));
 // matrix.setCursor(1, 9);   // next line
}

void loop() {
  // do nothing
}
