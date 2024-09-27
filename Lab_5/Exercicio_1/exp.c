#include <stdio.h>

int main() {
    int x, y;
    int resultado = 1;  /* Inicializamos o resultado como 1, pois qualquer número elevado a 0 é 1. */

    /* Entrada dos números x e y */
    printf("Digite dois inteiros, onde x != 0 e y >= 0:\n<x y>: ");
    scanf("%d %d", &x, &y);

    /* Verifica se as condições x != 0 e y >= 0 são válidas */
    if (x != 0 && y >= 0) {
        /* Loop for para calcular x^y */
        for (int i = 0; i < y; i++) {
            resultado *= x;  /* Multiplica o resultado por x y vezes */
        }

        /* Exibe o resultado */
        printf("%d elevado a %d eh: %d\n", x, y, resultado);
    } else {
        printf("Entrada invalida! Certifique-se de que x != 0 e y >= 0.\n");
    }

    return 0;
}
