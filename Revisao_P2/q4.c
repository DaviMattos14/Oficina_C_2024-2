#include <stdio.h>

typedef struct tponto{
    float x, y;
} tponto;

tponto ponto(float a, float b){
    tponto p = {a, b};
    return p;
}

tponto centroide(tponto v[], int tamanho){
    tponto centro = {0,0};
    for (int i = 0; i < tamanho; i++){
        centro.x += v[i].x;
        centro.y += v[i].y;
    }
    centro.x = centro.x / tamanho;
    centro.y /= tamanho;
    return centro;
}

void imprimirEmOrdem(tponto v[], int tamanho){
    int fim = tamanho - 1;

    const int ordenado = 1, desordenado = 0;
    int bubble_sort = desordenado;

    while (!bubble_sort) // Enquanto o vetor não estiver ordenado
    {
        bubble_sort = ordenado; // CASO BASE
        // V[] = {2,1,3} -> v[]={1,2,3}
        for (int i = 0; i < fim; i++)
        {
            if (v[i].x > v[i+1].x)
            {
                bubble_sort = desordenado;
                tponto aux = v[i]; // v[]={2,1,3}
                v[i] = v[i+1]; // v[]={1,1,3}
                v[i+1] = aux; // v[]= {1,2,3}
            }
        }
    }
    
    for (int i = 0; i < fim; i++)
    {
        printf("(%.lf,%lf)\n", v[i].x, v[i].y);
    }
}