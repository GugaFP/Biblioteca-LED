/*
Piscar Led Continuamente
Esse exemplo consiste em fazer o led piscar continuamente numa quantidade de vezes por segundos. Pode se colocar a função piscar que é a principal no setupo, e a função de update para atualizar o estado do led. 
*/


#include <Arduino.h>
#include "LED.h"

Led led = 35;

void setup()
{
    led.piscar(2.0f); // 2 piscadas por segundo
}

void loop()
{
    led.update();
}
