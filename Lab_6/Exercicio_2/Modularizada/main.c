#include <stdio.h>
#include "leds.h"

int main()
{
    int numero, total;

    /** Entrada de um numero inteiro **/
    printf("Digite um numero: ");
    scanf("%d", &numero);

    /** Calcula o total de LEDs para o numero digitado **/
    total = totalLEDS(numero);

    /** Exibe o resultado **/
    printf("Total de LEDs necessarios: %d\n", total);

    return 0;
}
