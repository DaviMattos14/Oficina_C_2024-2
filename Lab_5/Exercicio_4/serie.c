#include <stdio.h>

int main() {
    int n, num;
    double Hn = 0.0;  /* Variavel para armazenar o valor da serie harmonica */
    int count_negativos = 0;  /* Contador para numero de negativos lidos */

    /* Entrada do numero inteiro n */
    printf("Digite o numero de termos da serie harmonica: ");
    scanf("%d", &n);

    /* Loop para ler n inteiros */
    for (int i = 1; i <= n; i++) {
        printf("Digite um numero inteiro positivo: ");
        scanf("%d", &num);

        /* Verifica se o numero e negativo */
        if (num < 0) {
            count_negativos++;  /* Incrementa o contador de numeros negativos */
            printf("Numero negativo lido! Aviso: esse numero nao sera considerado.\n");

            /* Se o numero de negativos atingir 3, interrompe o laço */
            if (count_negativos == 3) {
                printf("Tres numeros negativos foram lidos! O loop sera interrompido.\n");
                break;
            }
            i--;
            continue;  /* Pula para a próxima iteraçao */
        }

        /* Soma 1/i ao valor de Hn */
        Hn += 1.0 / i;
    }

    /* Exibe o valor final da serie harmonica */
    printf("O valor da serie harmonica ate agora e: %.5lf\n", Hn);

    return 0;
}
