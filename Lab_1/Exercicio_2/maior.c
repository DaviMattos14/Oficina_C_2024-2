#include <stdio.h>
int main()
{
    // dicionário de dados
    int a, b, c;
    int maior; // (ponto e virgula) é um delimitador de linha e código
    // obtém os três números
    printf("Digite os tres numeros separados por espaco: \n");
    scanf("%d %d %d", &a, &b, &c);
    // encontra o maior número
    if (a > b && a > c)
    {
        maior = a;
    }
    else if (b > c)
    {
        maior = b;
    }
    else
    {
        maior = c;
    }
    // exibe o resultado
    printf("O maior numero eh: %d \n", maior);
    return 0;
}