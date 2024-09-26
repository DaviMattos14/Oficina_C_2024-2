#include <stdio.h>

void verifica_numero(int N) {
    // Verifica se N é um número de 3 dígitos
    if (N < 100 || N > 999) {
        printf("Erro: O número deve ter exatamente 3 dígitos.\n");
        return;
    }

    // Obtendo as centenas, dezenas e unidades
    int c = N / 100;         // Centenas
    int d = (N / 10) % 10;   // Dezenas
    int u = N % 10;          // Unidades

    // Calculando a soma dos cubos
    int soma_cubos = (c * c * c) + (d * d * d) + (u * u * u);

    // Verificando a condição
    if (N == soma_cubos) {
        printf("%d satisfaz a relação: %d^3 + %d^3 + %d^3 = %d\n", N, c, d, u, soma_cubos);
    } else {
        printf("%d não satisfaz a relação: %d^3 + %d^3 + %d^3 = %d\n", N, c, d, u, soma_cubos);
    }
}

int main() {
    int numero;

    printf("Digite um número inteiro positivo de 3 dígitos: ");
    if (scanf("%d", &numero) != 1) {
        printf("Erro: Por favor, digite um número inteiro válido.\n");
        return 1;
    }

    verifica_numero(numero);
    return 0;
}
