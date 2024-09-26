#include <stdio.h>
int main()
{
    int a, b;
    printf("Digite os coeficientes A e B de ax+b\n");
    scanf("%d %d", &a, &b);
    (a == 0) ? exit(1) : 0;

    printf("\n%dx+(%d) = 0 \nx = %d\n", a, b, (-b / a));

    return 0;
}