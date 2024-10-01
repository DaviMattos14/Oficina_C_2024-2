#include <stdio.h>

void arvore(int linhas, int invertida);
int main()
{
    int linhas, invertida;

    // Solicita ao usuário o número de linhas (máximo 10)
    do
    {
        printf("Digite o numero de linhas (maximo 10) e (0) para imprimir como piramide: ");
        scanf("%d %d", &linhas, &invertida);
    } while (linhas > 10 || linhas < 1); // Garante que o número esteja entre 1 e 10

    arvore(linhas, invertida);

    return 0;
}

void arvore(int linhas, int invertida)
{
    // Imprime a pirâmide
    if (invertida == 0)
    {
        for (int i = 1; i <= linhas; i++)
        {
            // Imprime os espaços antes dos asteriscos
            for (int espacos = 1; espacos <= (linhas - i); espacos++)
            {
                printf(" ");
            }
            // Imprime os asteriscos
            for (int j = 1; j <= (2 * i - 1); j++)
            {
                printf("*");
            }
            printf("\n"); // Nova linha após cada nível da pirâmide
        }
    }
    else
    {
        for (int i = linhas; i > 0; i--)
        {
            // Imprime os espaços antes dos asteriscos
            for (int espacos = 1; espacos <= (linhas - i); espacos++)
            {
                printf(" ");
            }
            // Imprime os asteriscos
            for (int j = 1; j <= (2 * i - 1); j++)
            {
                printf("*");
            }
            printf("\n"); // Nova linha após cada nível da pirâmide
        }
    }
}