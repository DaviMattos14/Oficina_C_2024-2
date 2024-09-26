#include <stdio.h>
int main()
{
    char simbolo;
    printf("Digite um caractere.\n");
    scanf("%c", &simbolo);
    switch (simbolo)
    {
    case '!':
        printf("Exclamacao.\n");
        break;
    case '?':
        printf("Interrogacao.\n");
        break;
    case '@':
        printf("O proximo simbolo eh %c.\n", simbolo + 1); // Na tabela ascii o proximo caractere depois de '@' é 'A'
        break;                                             // Sem o 'break', 'default' ocorre!
    default:
        printf("Simbolo qualquer.\n");
    }
    return 0;
}