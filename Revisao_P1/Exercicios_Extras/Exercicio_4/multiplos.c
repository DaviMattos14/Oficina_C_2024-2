#include <stdio.h>

int ehMultiplo(int r, int s);
void multiplos(int q, int x, int y);

int main()
{
    int n, a, b;
    printf("Digite <n a b>: ");
    scanf("%d %d %d", &n, &a, &b);
    multiplos(n, a, b);

    return 0;
}

int ehMultiplo(int r, int s){
    if (s == 0) {
        return 0; // Evita divisão por zero
    }
    return (r % s == 0) ? 1 : 0;
}

void multiplos(int q, int x, int y){
    int aux = 0, num = 0;

    while (aux < q)
    {
        if (ehMultiplo(num, x) || ehMultiplo(num, y))
        {
            printf("%d ", num);
            aux++;
        }
        num++;
    }
    printf("\n");
}