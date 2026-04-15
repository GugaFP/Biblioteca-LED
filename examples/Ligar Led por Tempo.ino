/*
Liga o Led por um tempo determinado no paramentro do setup
*/

#include <Arduino.h>
#include <LED.h>

Led led(13);

void setup() {
    led.ligar(3000); // liga por 3 segundos
}

void loop() {
    led.update();
}