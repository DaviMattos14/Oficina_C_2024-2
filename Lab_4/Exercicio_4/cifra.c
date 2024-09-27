#include <stdio.h>

int main() {
    char letra;
    int total_letras = 0;  /* Contador de letras cifradas */

    /* Loop para continuar enquanto o caractere for uma letra e o total for menor ou igual a 3 */
    while (total_letras < 3) {
        printf("Digite uma letra: ");
        letra = getchar();
        getchar();  /* Consumir o newline (Enter) */

        /* Defesa: Verifica se o caractere é uma letra */
        if (!((letra >= 'A' && letra <= 'Z') || (letra >= 'a' && letra <= 'z'))) {
            printf("Caractere invalido\n");
            return 0;
        }

        /* Cifrar a letra, exibindo o 12º caractere seguinte de forma circular */
        if (letra >= 'A' && letra <= 'Z') {
            /* Letras maiúsculas */
            letra = ((letra - 'A' + 12) % 26) + 'A';
        } else if (letra >= 'a' && letra <= 'z') {
            /* Letras minúsculas */
            letra = ((letra - 'a' + 12) % 26) + 'a';
        }

        /* Exibe a letra cifrada */
        printf("A cifra da letra eh: %c\n", letra);

        /* Incrementa o total de letras cifradas */
        total_letras++;
    }

    printf("Total de letras cifradas atingiu o limite de 3.\n");

    return 0;
}
