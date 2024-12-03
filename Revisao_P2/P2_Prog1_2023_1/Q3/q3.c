#include <stdio.h>

void intercala(int vetA[], int tamA, int vetB[], int tamB) {
    int a=0, b=0; //indices dos vetores
    for(int i=0; i<(tamA+tamB); i++)
    {
        if(i%2 == 0 || b == tamB){ 
            printf("%d ", vetA[a]); 
            a++;
            } //prox elemento vem de vetA
        else{ 
            printf("%d ", vetB[b]); 
            b++;
        } //prox elemento vem de vetB
    }
}

int main(){
     int vetA[] = {1, 2, 3, 4, 5, 6, 7, 8, 9}, vetB[] = {0, 0, 0, 0, 0};
     intercala(vetA,9,vetB,5);
}