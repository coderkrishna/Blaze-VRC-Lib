// To complete the VEXcode V5 Text project upgrade process, please follow the
// steps below.
// 
// 1. You can use the Robot Configuration window to recreate your V5 devices
//   - including any motors, sensors, 3-wire devices, and controllers.
// 
// 2. All previous code located in main.cpp has now been commented out. You
//   will need to migrate this code to the new "int main" structure created
//   below and keep in mind any new device names you may have set from the
//   Robot Configuration window. 
// 
// If you would like to go back to your original project, a complete backup
// of your original (pre-upgraded) project was created in a backup folder
// inside of this project's folder.

// ---- START VEXCODE CONFIGURED DEVICES ----
// ---- END VEXCODE CONFIGURED DEVICES ----

#include "vex.h"

using namespace vex;

int main() {
  // Initializing Robot Configuration. DO NOT REMOVE!
  vexcodeInit();
  
}

// // ---- START VEXCODE CONFIGURED DEVICES ----
// // Robot Configuration:
// // [Name]               [Type]        [Port(s)]
// // ---- END VEXCODE CONFIGURED DEVICES ----
// /*----------------------------------------------------------------------------*/
// /*                                                                            */
// /*    Module:       main.cpp                                                  */
// /*    Author:       Pranav Krishnamurthy                                      */
// /*    Created:      Fri Sep 27 2019                                           */
// /*    Description:  V5 project                                                */
// /*                                                                            */
// /*----------------------------------------------------------------------------*/
// #include "vex.h"
// 
// using namespace vex;
// 
// // A global instance of vex::brain used for printing to the V5 brain screen
// vex::brain       Brain;
// 
// // define your global instances of motors and other devices here
// 
// 
// int main() {
//     int count = 0;
//    
//     while(1) {
//         Brain.Screen.print("Hello World!");
//         Brain.Screen.printAt( 10, 50, "Hello V5 %d", count++ );
// 
//         // Allow other tasks to run
//         this_thread::sleep_for(10);
//     }
// }
// 