#include <stdio.h>

/* Definindo pseudo-constantes para cada opção do menu */
#define PAR_IMPAR 1
#define POSITIVO_NEGATIVO 2
#define MAIOR_TRES 3
#define MEDIA_DOIS_MAIORES 4
#define CLASSIFICAR_CARACTERE 5
#define SAIR 6

/*Funções das operações*/
int par_ou_impar(int num) {
    return (num % 2 == 0) ? -1 : 1;
}

int positivo_ou_nao(float num) {
    return (num > 0) ? 1 : 0;
}

float maior_de_tres(float a, float b, float c) {
    return (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);
}

float media_dos_dois_maiores(float a, float b, float c) {
    float menor = (a < b) ? ((a < c) ? a : c) : ((b < c) ? b : c);
    return (a + b + c - menor) / 2;
}

char classificar_caractere(char c) {
    return (c >= 'a' && c <= 'z') ? 'm' :
           (c >= 'A' && c <= 'Z') ? 'M' : '?';
}

int main() {
    int opcao;

    do {
        /* Exibindo o menu*/
        printf("\nMenu de Opcoes:\n");
        printf("%d - Verificar se um numero eh par ou impar\n", PAR_IMPAR);
        printf("%d - Verificar se um numero eh positivo ou negativo\n", POSITIVO_NEGATIVO);
        printf("%d - Encontrar o maior de tres numeros\n", MAIOR_TRES);
        printf("%d - Calcular a media dos dois maiores de tres numeros\n", MEDIA_DOIS_MAIORES);
        printf("%d - Classificar um caractere\n", CLASSIFICAR_CARACTERE);
        printf("%d - Sair\n", SAIR);

        /* Lendo a opção do usuário*/
        printf("Escolha uma opcaoo: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case PAR_IMPAR: {
                int num;
                printf("Digite um numero inteiro: ");
                scanf("%d", &num);
                printf("%d eh %s\n", num, (par_ou_impar(num) == 1)? "impar":"par");
                break;
            }
            case POSITIVO_NEGATIVO: {
                float num;
                printf("Digite um numero racional (float): ");
                scanf("%f", &num);
                printf("%f eh %s\n", num, (positivo_ou_nao(num) == 1)? "positivo":"negativo");
                break;
            }
            case MAIOR_TRES: {
                float a, b, c;
                printf("Digite tres numeros racionais (float): ");
                scanf("%f %f %f", &a, &b, &c);
                printf("O maior numero eh: %.2f\n", maior_de_tres(a, b, c));
                break;
            }
            case MEDIA_DOIS_MAIORES: {
                float a, b, c;
                printf("Digite tres numeros racionais (float): ");
                scanf("%f %f %f", &a, &b, &c);
                printf("A media dos dois maiores eh: %.2f\n", media_dos_dois_maiores(a, b, c));
                break;
            }
            case CLASSIFICAR_CARACTERE: {
                char c;
                printf("Digite um caractere: ");
                scanf(" %c", &c); /* O espaço antes de %c é para ignorar espaços em branco*/
                printf("Classificacao: %c\n", classificar_caractere(c));
                break;
            }
            case SAIR:
                printf("Saindo...\n");
                break;
            default:
                printf("Opcaoo invalida! Encerrando o programa.\n");
                return 0;  /* Encerrar o programa em caso de opção inválida*/
        }
    } while (opcao != SAIR);

    return 0;
}
