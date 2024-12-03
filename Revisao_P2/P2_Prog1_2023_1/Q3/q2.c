#include <stdio.h>
#define N 3

int menor(int M[N][N], int n)
{
    int menor = N, atual = 0, indiceMenor = 0;
    for (int j = 0; j < N; j++)
    {
        atual = 0;
        for (int i = 0; i < N; i++) // fixada uma coluna j, somamos seus elementos.
            atual += M[i][j];
        if (atual < menor)
        {
            menor = atual;
            indiceMenor = j;
        }
    }
    return indiceMenor;
}
