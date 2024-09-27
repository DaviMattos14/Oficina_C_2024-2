#include <stdio.h>

int main() {
    /*Declaração da constante com o modificador 'const'*/
    const float LIMIAR_APROVACAO = 5.0;
    
    /* Variáveis para armazenar as notas*/
    float nota1, nota2, media;

    /*
        Leitura das notas
    */
    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);
    
    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);
    
    /*
        Calculando a média
    */ 
    media = (nota1 + nota2) / 2;
    
    /*
        Comparando a média com o limiar de aprovação
    */
    if (media >= LIMIAR_APROVACAO) {
        printf("Aprovado\n");
    } else {
        printf("Reprovado\n");
    }
    
    return 0;
}
