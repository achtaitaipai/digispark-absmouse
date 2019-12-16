#define ABSOLUTE_MOUSE_MODE
float angle = 0;
float bx = 5, by = 43;
float xspeed = 0.005;
float yspeed = 0.003;
int r = 60;

#include <DigiMouse.h>

void setup() {
  DigiMouse.begin();
}

void loop() {
  bx += xspeed;
  by += yspeed;
  if (bx >= 127|| bx <= 0)xspeed *= -1;
  if (by >= 127|| by < 0)yspeed *= -1;
  DigiMouse.move(bx, by, 0);
  DigiMouse.update();
}