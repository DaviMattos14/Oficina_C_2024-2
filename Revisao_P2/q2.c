int busca(int num, int vet[], int tam)
{
    int ini = 0, fim = tam - 1, meio; // Erro 1
    while (ini <= fim) // Erro 2
    {
        meio = (ini + fim) / 2; // Erro 3
        if (num == vet[meio])
            return 1; // Erro 4
        if (vet[meio] < num)
            fim = meio -1; // Erro 5
        else
            ini = meio + 1; // Erro 6
    }
    return 0; // Erro 7
}
"""
v[] = [5,4,3,2,1]
ini[0] = 5
fim[4] = 1

ini : 5 -> 4 -> 3 -> 2 -> fim
fim: 1 -> 2 -> 3 -> 4 -> fim

"""