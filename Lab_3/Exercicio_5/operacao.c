#include <stdio.h>

int main() {
    float a, b;
    char operador;

    /* Entrada dos números e do operador*/
    printf("Digite uma operacao aritmetica entre dois numeros a e b, no formato \"a <operacao> b\":\n");
    scanf("%f %c %f", &a, &operador, &b);

    /* Usando switch-case para selecionar a operação*/
    switch (operador) {
        case '+':  /* Soma*/
            printf("%.2f\n", a + b);
            break;
        case '-':  /* Subtração*/
            printf("%.2f\n", a - b);
            break;
        case '/':  /* Divisão*/
            /* Verificação de divisão por zero*/
            if (b != 0) {
                printf("%.2f\n", a / b);
            } else {
                printf("Erro: Divisao por zero nao permitida.\n");
            }
            break;
        case '*':  /* Multiplicação*/
            printf("%.2f\n", a * b);
            break;
        default:  /* Caso o operador seja inválido */
            printf("Operador nao definido.\n");
    }

    return 0;
}
