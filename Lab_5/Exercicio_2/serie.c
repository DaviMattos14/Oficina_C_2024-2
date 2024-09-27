#include <stdio.h>

int main() {
    int n;
    double hn = 0.0;  /* Variável para armazenar o valor do número harmônico */

    /* Entrada do número inteiro n */
    printf("Digite um numero inteiro n: ");
    scanf("%d", &n);

    /* Loop para calcular o número harmônico Hn */
    for (int i = 1; i <= n; i++) {
        hn += 1.0 / i;  /* Soma 1/i ao valor de Hn */
    }

    /* Exibe o número harmônico Hn */
    printf("O numero harmonico H%d eh: %.5lf\n", n, hn);

    return 0;
}
