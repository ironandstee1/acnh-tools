#include "LUFAConfig.h"
#include <LUFA.h>
#include "Joystick.h"
#include "General.h"
#include "SimpleScripting.h"
#include "ACNH.h"

ACNH acnh; // Creates an instance of ACNH
General general;

void setup() {
  SetupHardware(); // Needed for LUFA
  GlobalInterruptEnable(); // Needed for LUFA


  general.controllerSetup();
  general.Nothing(3000);

}

void loop() {
  acnh.starFarm();   

  //simpleScript();
}

// For writing simple scripts, use this function and call to it in the main. 
void simpleScript() {
  using namespace simple;
  
  Left(1000);
  Nothing(1000);
  Right(1000);
  Nothing(1000);
  Up(1000);
  Nothing(1000);
  X(1000);
  Nothing(1000);
  Y(1000);
  Nothing(1000);
  A(1000);
  Nothing(1000);
  B(1000);
  Nothing(1000);
}
