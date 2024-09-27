#include <stdio.h>

int main() {
    int n, num;
    int soma_pares = 0, soma_impares = 0;
    int cont_pares = 0, cont_impares = 0;

    /* Entrada do numero inteiro n */
    printf("Digite o numero de inteiros a serem lidos: ");
    scanf("%d", &n);

    /* Loop para ler n inteiros */
    for (int i = 1; i <= n; i++) {
        printf("Digite um numero inteiro positivo: ");
        scanf("%d", &num);

        /* Verifica se o numero e negativo */
        if (num < 0) {
            printf("Numero negativo lido! O loop será interrompido.\n");
            break;  /* Interrompe o laço se um numero negativo for lido */
        }

        /* Verifica se o numero e par ou impar e acumula as somas e contagens */
        if (num % 2 == 0) {
            soma_pares += num;
            cont_pares++;
        } else {
            soma_impares += num;
            cont_impares++;
        }
    }

    /* Calcula e imprime as medias */
    if (cont_pares > 0) {
        printf("Media dos pares = %.2f\n", (double)soma_pares / cont_pares);
    } else {
        printf("Nenhum numero par foi lido.\n");
    }

    if (cont_impares > 0) {
        printf("Media dos impares = %.2f\n", (double)soma_impares / cont_impares);
    } else {
        printf("Nenhum numero impar foi lido.\n");
    }

    return 0;
}
