#include <Keyboard.h>

int pedalPin = 9;
bool pressed = false;

void setup() {
  pinMode(pedalPin, INPUT);
  digitalWrite(pedalPin, HIGH);

  Keyboard.begin();
}

void loop() {
  if (digitalRead(pedalPin) == 0 && !pressed) {
    Keyboard.press('q');
    pressed = true;
  } else if (digitalRead(pedalPin) == HIGH && pressed) {
    Keyboard.release('q');
    pressed = false;
  }
}
