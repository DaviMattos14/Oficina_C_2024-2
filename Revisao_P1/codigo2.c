#include <stdio.h>
 
int main() {
 
    int num, i, f = 1;
    scanf("%d", &num);

    for (i = 1; i <= num; i++){
        f = f * i;
    } 
    printf("%d\n", f);
/*
f = 1
---> linha 6 -> ENTRADA: 4
 Linha 8 -> i= 1; 1 <= 4; i++
Linha 9 -> f = 1 * 1; ""i = 1""
f = 1
i = 1 + 1 = 2 

 Linha 8 -> i= 2; 2 <= 4; i++
Linha 9 -> f = 1 * 2; ""i = 2""
f = 2
i = 2 + 1 = 3 

 Linha 8 -> i= 3; 3 <= 4; i++
Linha 9 -> f = 2 * 3; ""i = 3""
f = 6
i = 3 + 1 = 4 
 
 Linha 8 -> i= 4; 4 <= 4; i++
Linha 9 -> f = 6 * 4; ""i = 4""
f = 24
i = 4 + 1 = 5 

 Linha 8 -> i= 5; 5 <= 4; i++

SAIDA --> 24

O que é o código?
4! = 1 * 2 * 3 * 4 = 24

*/ 
    return 0;
}