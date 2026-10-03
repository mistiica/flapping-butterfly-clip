#include <Arduino.h>

#define DISABLE_COMPLEX_FUNCTIONS
#define MAX_EASING_SERVOS 1
#define ENABLE_EASE_SINE

#include "ServoEasing.hpp"


const int SERVO_PIN = 3;

const int START_POSITION = 0;
const int END_POSITION = 70;

const int FLAP_DURATION = 1500;


bool wingsClosing = true;

ServoEasing wings;

void setup() {
  wings.attach(SERVO_PIN, START_POSITION);
  wings.setEasingType(EASE_SINE_IN_OUT);
}

void loop() {

  if (!wings.isMoving()) {

    if (wingsClosing) {
      wings.startEaseToD(END_POSITION, FLAP_DURATION);
    }
    else {
      wings.startEaseToD(START_POSITION, FLAP_DURATION);
    }

    wingsClosing = !wingsClosing;
  }
}
