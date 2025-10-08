//include libraries
#include <Servo.h>

Servo servo[8][3];

// placeholder pins
int PIN[8][3] = { // get someone to figure out the pin numbers for the I^2c extention
  // leg0: front-left
  {0, 1, 2}, 
  // leg1: front-right
  {3, 4, 5},
  // leg2: middle-front-left
  {6, 7, 8},
  // leg3: middle-front-right
  {9, 10, 11},
  // leg4: middle-bottom-left
  {12, 13, 14},
  // leg5: middle-bottom-right
  {15, 16, 17},
  // leg6: bottom-left
  {18, 19, 20},
  // leg7: bottom-right
  {21, 22, 23}
};

void setup(){
  for (int leg = 0; leg < 8; leg++){
    for (int limb = 0; limb < 3; limb++){
      servo[leg][limb].attach(PIN[leg][limb]);
    }
  }
}

void loop(){
}
