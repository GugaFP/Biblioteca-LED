/*
Autor: Guilherme Fellipe (GugaFP)
Projeto: Biblioteca LED
Descrição: Biblioteca que controla um LED
Data: 14/04
Versão 1.0
*/ 

#ifndef LED_h
#define LED_h

#include <Arduino.h>


/**
 * @class Led
 * @brief Classe para controle não bloqueante de um LED.
 * Permite ligar, desligar, ligar por tempo determinado,
 * piscar continuamente e piscar por quantidade definida.
 * 
 * @note O método update deve ser chamado continuamente dentro do loop().
 */
class Led
{
    private:
        uint8_t pino;
        bool estado;    //atributo
        bool desligarPorTempo = false;
        uint32_t desligarNoMomento;
        
        uint32_t tempoAnteriorPiscar;
        uint32_t tempoEspera;
        bool estadoPiscar;
        uint16_t repeticoes;

        /**
         * @brief Precessa a lógica de piscada do LED
         */
        void funcaoPiscar();

        /**
         * @brief Processa o desligamento temporizado.
         */
        void funcaoDesligamento();

    public:
        /**
        * @brief Constrói um objeto LED.
        * @param pin Número do pino digital onde o LED está conectado.
         */
        Led(uint8_t pin);

        /**
         * @brief Liga o LED continuamente
         */
        void ligar();

        /**
         * @brief Liga o LED por um tempo determinado
         * @param tempoLigado_ms Tempo, em milisegundos que o LED ficara ligado.
         */
        void ligar(uint32_t tempoLigado_ms);

        /**
         * @brief  Desliga o LED, e cancela os módulos automáticos.
        */
        void desligar();

        /**
         * @brief Inicia a piscada contínua de 1 Hz.
         */
        void piscar();

        /**
         * @brief pisca um LED à uma certa frequência
         * @param frequencia Frequência de piscada em hertz.
         */
        void piscar(float frequencia);

        /**
         * @brief Pisca um LED uma quantidade definida de vezes.
         * @param frequencia Frequência da piscada em hertz.
         * @param repeticoes Quantidade de piscados completas.
         */
        void piscar(uint8_t frequencia, uint16_t repeticoes);

        /**
         * @brief Le o estado do LED.
         * @param estado True para ligado e False para desligado
         */
        bool getEstado();

        /**
         * @brief Retorna o valor do pino configurado para o LED.
         */
        uint8_t getPino();

        /**
         * @brief Define manualmente o estado do LED.
         * @param estado True para ligado.
         * @param estado False para desligado.
         */
        void setEstado(bool estado);

        /**
         * 
         */
        void alternar();

        /**
         * @brief Usado para alternar o estado do LED
         */
        void update();

};

#endif
