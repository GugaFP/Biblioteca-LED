/*
Uso do Método Update
Este exemplo mostra sobre o método update().
Sem ele, o LED não executa corretamente as funções automáticas como piscar.
Ele é responsável por atualizar o estado do LED.
*/

#include <Arduino.h>
#include "LED.h"

Led led(35);

void setup()
{
    led.piscar(1.0);
}

void loop()
{
    led.update(); 
}