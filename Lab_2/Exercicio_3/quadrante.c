#include <stdio.h>
int main() {
    float x,y;
    scanf("%f %f", &x,&y);
    if(x == 0){
        printf("Eixo y");
    }
    if (y==0)
    {
        printf("Eixo x");
    }
    if (x > 0 && y > 0)
    {
        printf("Quadrante 1");
    }
    if (x < 0 && y > 0)
    {
        printf("Quadrante 2");
    }
    if (x < 0 && y < 0)
    {
        printf("Quadrante 3");
    }
    if (x > 0 && y < 0)
    {
        printf("Quadrante 4");
    }
    printf("\n");
    return 0;
}
