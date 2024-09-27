#include <stdio.h>

/* Função que imprime a tabuada de um numero */
void tabuada(int num) {
    printf("Tabuada de %d:\n", num);
    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", num, i, num * i);
    }
}

int main() {
    int numero;

    /* Leitura de um numero entre 1 e 10 */
    do {
        printf("Digite um numero entre 1 e 10: ");
        scanf("%d", &numero);

        if (numero < 1 || numero > 10) {
            printf("Numero invalido! Tente novamente.\n");
        }
    } while (numero < 1 || numero > 10);

    /* Chama a função tabuada */
    tabuada(numero);

    return 0;
}
