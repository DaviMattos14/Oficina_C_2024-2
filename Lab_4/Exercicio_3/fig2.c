#include <stdio.h>

int main() {
    int linhas, i = 0, j;

    /* Solicita ao usuário o número de linhas */
    printf("Digite o numero de linhas (maximo 10): ");
    scanf("%d", &linhas);

    /* Verifica se o número de linhas não ultrapassa 10 */
    if (linhas > 10) {
        printf("Erro: o número de linhas nao pode ultrapassar 10.\n");
        return 1;  /* Termina o programa se o número for maior que 10 */
    }

    /* Enquanto i for menor que nº de linhas, imprime as estrelas */
    while (i < linhas) {
        j = i + 1;  /* Define o número de estrelas a serem impressas */
        while (j > 0) {
            printf("*");
            j--;
        }
        printf("\n");  /* Pula para a próxima linha */
        i++;
    }

    return 0;
}
