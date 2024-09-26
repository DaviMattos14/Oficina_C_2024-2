#include <stdio.h>
int main()
{
    float r1, r2, pi = 3.14;
    printf("Digite os raios r1 e r2\n");
    scanf("%f %f", &r1, &r2);

    printf("\nArea = %.2f\n", (pi * ((r1 * r1) - (r2 * r2))));

    return 0;
}