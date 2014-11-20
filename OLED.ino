#include <core.h>
#include "Wire.h"
#include "linker_oled.h"


void setup()
{
  Wire.begin();
  linkeroled.init();  

  linkeroled.clearDisplay();          //clear the screen and set start position to top left corner
  //linkeroled.setNormalDisplay();      //Set display to normal mode (i.e non-inverse mode)
  linkeroled.setInverseDisplay();     //Set display to inverse mode 
  linkeroled.setPageMode();           //Set addressing mode to Page Mode
  linkeroled.setTextXY(3,3);          //Set the cursor to Xth Page, Yth Column  
  linkeroled.putString("Hello world"); //Print the String
  
  linkeroled.setTextXY(6,5);          //Set the cursor to Xth Page, Yth Column  
  linkeroled.putString("pcDuino"); //Print the String
}

void loop()
{
  
}
