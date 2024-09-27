#include <stdio.h>

/** Função que retorna o numero de LEDs necessarios para cada algarismo **/
int ledsAlgarismo(int a) {
    /** Cada numero de 0 a 9 usa uma quantidade específica de LEDs **/
    switch(a) {
        case 0: return 6;
        case 1: return 2;
        case 2: return 5;
        case 3: return 5;
        case 4: return 4;
        case 5: return 5;
        case 6: return 6;
        case 7: return 3;
        case 8: return 7;
        case 9: return 6;
        default: return 0; /** Valor invalido **/
    }
}

/** Função que calcula o total de LEDs necessarios para um numero inteiro **/
int totalLEDS(int n) {
    int total = 0;
    
    /** Processa cada dígito do numero **/
    while(n > 0) {
        /** Pega o ultimo dígito do numero **/
        int digito = n % 10;
        
        /** Soma o numero de LEDs necessarios para o dígito **/
        total += ledsAlgarismo(digito);
        
        /** Remove o ultimo dígito do numero **/
        n /= 10;
    }
    
    return total;
}

/** Função principal **/
int main() {
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
