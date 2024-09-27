#include "leds.h"

/** Função que retorna o número de LEDs necessários para cada algarismo **/
int ledsAlgarismo(int a)
{
    /** Cada número de 0 a 9 usa uma quantidade específica de LEDs **/
    switch (a)
    {
    case 0:
        return 6;
    case 1:
        return 2;
    case 2:
        return 5;
    case 3:
        return 5;
    case 4:
        return 4;
    case 5:
        return 5;
    case 6:
        return 6;
    case 7:
        return 3;
    case 8:
        return 7;
    case 9:
        return 6;
    default:
        return 0; /** Valor inválido **/
    }
}

/** Função que calcula o total de LEDs necessários para um número inteiro **/
int totalLEDS(int n)
{
    int total = 0;

    /** Processa cada dígito do número **/
    while (n > 0)
    {
        /** Pega o último dígito do número **/
        int digito = n % 10;

        /** Soma o número de LEDs necessários para o dígito **/
        total += ledsAlgarismo(digito);

        /** Remove o último dígito do número **/
        n /= 10;
    }

    return total;
}
