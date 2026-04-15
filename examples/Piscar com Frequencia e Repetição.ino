/*Fazer o LED piscar com frequências e repetições
Esse exemplo explica como fazer o led piscar com frequência e repetições definidas. 
Primeiro, é preciso declarar o núnero do pino e incluir as bibliotecas; depois, no void setup (), é necessario acionar a função piscar ()e colocar os parametros (repetição e frequência).E por fim, atualizar o LED no void loop ().
*/

#include <Arduino.h>
#include "LED.h"

Led led1 (35);


void setup()
{
    led1.piscar(2.0f, 30); // 2 piscadas por segundo, 30 vezes
}

void loop()
{
    led1.update();
}