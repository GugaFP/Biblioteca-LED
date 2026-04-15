/*
Ligar LED
Função que faz o Led ligar e permanecer por tempo indeterminado.
No setup é colocado a função ligar para que ele permaneça assim.
*/

#include <Arduino.h>
#include "LED.h"

Led led(35);

void setup()
{
    led.ligar(); 
}

void loop()
{
    led.update();
}