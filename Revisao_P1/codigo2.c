#include <stdio.h>
 
int main() {
 
    int num, i, f = 1;

    scanf("%d", &num);

    for (i = 1; i <= num; i++) f *= i;
    
    printf("%d\n", f);
 
    return 0;
}