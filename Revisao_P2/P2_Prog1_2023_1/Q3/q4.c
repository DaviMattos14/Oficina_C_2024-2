#include <stdio.h>
#include <math.h>
double logx(double x, int n){
    if (n == 1) return x;
    if ((n % 2) == 0)
        return logx(x,n-1) - (pow(x,n)/n);
    else
        return logx(x,n-1) + (pow(x,n)/n);
    // return (n == 1) ? x : -pow(-x, n) / n + log1maisX(x, n - 1); versão correta
}

int main(){
    print("%d",logx(1,8));
    return 0;
}