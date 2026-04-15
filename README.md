
# Biblioteca LED (Não Bloqueante)

Biblioteca simples para controle de LED utilizando Arduino e ESP32, com funcionamento não bloqueante através da função `millis()`.

## Brief da Biblioteca

A classe Led permite controlar um LED de forma eficiente, sem o uso de delay(), possibilitando que o microcontrolador execute múltiplas tarefas ao mesmo tempo.

## Funcionalidades

A biblioteca oferece os seguintes métodos:

- Ligar o LED continuamente
- Ligar o LED por tempo determinado
- Desligar o LED
- Alternar o estado do LED
- Piscar continuamente
- Piscar com frequência definida
- Piscar por uma quantidade específica de vezes

## Funcionamento

O controle é feito de forma não bloqueante, utilizando a função millis() para gerenciamento de tempo.

Por isso, é obrigatório chamar o método abaixo continuamente dentro do loop():

led.update();

## Estrutura da Biblioteca

Biblioteca Led/
|
├ examples
├ scr/
     ├ LED.h
     ├ LED.cpp
├ library.json
├ LICENSE
├ README.md
