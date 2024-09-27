#include <stdio.h>

int par_ou_impar(int num) {
    return (num % 2 == 0) ? -1 : 1;
}

int positivo_ou_nao(float num) {
    return (num > 0) ? 1 : 0;
}

float maior(float a, float b, float c) {
    return (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);
}

float media(float a, float b, float c) {
    float menor = (a < b) ? ((a < c) ? a : c) : ((b < c) ? b : c);
    return (a + b + c - menor) / 2;
}

char max_ou_min(char c) {
    return (c >= 'a' && c <= 'z') ? 'm' :
           (c >= 'A' && c <= 'Z') ? 'M' : '?';
}

int main()
{
    int x, y, z;
    char caractere;
    printf("\nDigite um caractere\n");
    caractere = getchar();
    printf("Digite tres inteiros:\n");    
    scanf("%d %d %d", &x, &y, &z);
    
    /*a)*/
    printf("\na)\n%d eh %s\t%d eh %s\t%d eh %s\n",
         x, (par_ou_impar(x) == 1)? "impar":"par",
         y, (par_ou_impar(y) == 1)? "impar":"par",
         z, (par_ou_impar(z) == 1)? "impar":"par");
    
    /*b)*/ 
    printf("\nb)\n%d eh %s\t%d eh %s\t%d eh %s\n",
         x, (positivo_ou_nao(x) == 1)? "positivo":"negativo",
         y, (positivo_ou_nao(y) == 1)? "positivo":"negativo",
         z, (positivo_ou_nao(z) == 1)? "positivo":"negativo\n");
    
    /*c)*/ 
    printf("\nc)\no maior eh: %.0f\n", maior(x,y,z));

    /*d)*/ 
    printf("\nd)\nmedia: %.2f\n", media(x,y,z));

    /*e)*/
    printf("e)\n%c\n",max_ou_min(caractere));

    return 0;
}