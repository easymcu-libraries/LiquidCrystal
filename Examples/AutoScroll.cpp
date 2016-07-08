#include "headers.h"


// initialize the library with the numbers of the interface pins
LiquidCrystal lcd(P40, P39, P38, P37, P36, P35);

int main()
{
	// set up the LCD's number of columns and rows: 
	lcd.begin(16,2);
	
	while(1)
	{
		// set the cursor to (0,0):
		lcd.setCursor(0, 0);
		// print from 0 to 9:
		for (int thisChar = 0; thisChar < 10; thisChar++)
		{
			lcd.print(thisChar);
			delay(500);
		}
		
		// set the cursor to (16,1):
		lcd.setCursor(16,1);
		// set the display to automatically scroll:
		lcd.autoscroll();
		// print from 0 to 9:
		for (int thisChar = 0; thisChar < 10; thisChar++)
		{
			lcd.print(thisChar);
			delay(500);
		}
		// turn off automatic scrolling
		lcd.noAutoscroll();
		
		// clear screen for the next loop:
		lcd.clear();
	}
} /* main */



