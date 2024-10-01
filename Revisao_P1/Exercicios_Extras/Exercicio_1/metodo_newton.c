/*
    ENTRADA: Um numero racional
    SAIDA: 3 número -> Número Racional; sqrt(Numero_Racional); metodo_newton(Numero_racional)
    DEFESA: |X2 - X1| < 10^{-6} 
*/
#include <stdio.h>
#include <math.h>

double metodo_newton(double numero);
int main(){

    double n;
    printf("Digite um numero: ");
    scanf("%lf", &n);

    printf("N= %.2lf\nRaiz=%.2lf\nNewton=%.2lf\n", n, sqrt(n), metodo_newton(n));

    return 0;
}

double metodo_newton(double numero){
    double xi = numero/2, aux;
    
    while (1)
    {
        aux = xi;
        xi = xi - (((xi*xi) - numero) / (2*xi));
        if (fabs(xi-aux) < pow(10,-6))
        {
            return xi;
        }   
    }
}