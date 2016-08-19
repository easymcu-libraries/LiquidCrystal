#include "headers.h"


// initialize the library with the numbers of the interface pins
LiquidCrystal lcd(P40, P39, P38, P37, P36, P35);

int main()
{
  vusb_enable();
  // set up the LCD's number of columns and rows: 
  lcd.begin(16, 2);
  // Print a message to the LCD.
  lcd.print("hello, world!");

  while(1)
  {
    // Turn off the blinking cursor:
    lcd.noBlink();
    delay(3000);
     // Turn on the blinking cursor:
    lcd.blink();
    delay(3000);
  }
}
