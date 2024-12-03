#define N 100
int ehMagico(int m[N][N], int tam)
{
    int ref = 0, prox;
    for (int i = 0; i < tam; i++)
        ref += m[0][i]; // ref = 15;

    // Diagonal Principal:
    prox = 0;
    for (int i = 0; i < tam; i++)
        prox += m[i][i];
    if (prox != ref)
        return 0; // Não é mágico :(
    
    // Diagonal Secundária:
    prox = 0;
    for (int i = 0; i < tam; i++)
        prox += m[tam - i - 1][i];
    if (prox != ref)
        return 0; // Não é mágico :(
    
    // Linhas e colunas:
    for (int i = 0; i < tam; i++)
    {
        prox = 0;
        for (int j = 0; j < tam; j++)
        {
            prox += m[i][j];   
        }
        if (prox != ref)
        {
            return 0;
        }
    }
    
    for (int i = 0; i < tam; i++)
    {
        prox = 0;
        for (int j = 0; j < tam; j++)
        {
            prox += m[j][i];   
        }
        if (prox != ref)
        {
            return 0;
        }
    }


    for (int i = 0; i < tam; i++)
    {
        int linha = 0, coluna = 0; // prox = 0;
        for (int j = 0; j < tam; j++)
        {
            linha += m[i][j]; // 2 -> 7 -> 6 -> fim
            coluna += m[j][i]; // 2 -> 9 -> 4 -> fim
        }
        if (linha != ref || coluna != ref)
        {
            return 0;
        }
    }
    

    return 1; // Passou nos testes! É mágico! :)
}
