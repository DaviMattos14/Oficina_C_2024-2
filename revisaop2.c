0->Falso
[1, 9]->Verdadeiro

#include <stdio.h>
    void
    sequencia(int x)
{
    if (x % 10)
    {
        sequencia(x / 10);
        printf("%d", x % 10);
    }
}
int main()
{
    sequencia(40274);
    return 0;
}

"""
1: sequencia(40274)
    40274%10 -> 4
    40274 / 10 -> 4027,4
    sequencia(40274/10) = sequencia(4027)
2: sequencia(4027)
    4027%10 -> 7
    4027 / 10 = 402,7
    sequencia(4027/10) = sequencia(402)
3: sequencia(402)
    402 % 10 -> 2
    402 / 10 = 40,2
    sequencia(402/10) = sequencia(40)
4: sequencia(40)
    40 % 10 -> 0
    40 / 10 = 4
    fim
3: print(2)
2: print(7)
1: print(4)

saida: 274
"""