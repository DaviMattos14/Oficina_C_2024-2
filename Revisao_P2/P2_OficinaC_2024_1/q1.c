#include <stdio.h>
void sequencia(int x)
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