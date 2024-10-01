#include <stdio.h>

int main() {
    int linhas;

    // Solicita ao usuário o número de linhas (máximo 10)
    do {
        printf("Digite o numero de linhas (maximo 10): ");
        scanf("%d", &linhas);
    } while (linhas > 10 || linhas < 1);  // Garante que o número esteja entre 1 e 10

    // Imprime a pirâmide
    for (int i = 1; i <= linhas; i++) {
        // Imprime os espaços antes dos asteriscos
        for (int espacos = 1; espacos <= (linhas - i); espacos++) {
            printf(" ");
        }
        // Imprime os asteriscos
        for (int j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }
        printf("\n");  // Nova linha após cada nível da pirâmide
    }

    return 0;
}