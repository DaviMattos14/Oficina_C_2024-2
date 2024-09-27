#include <stdio.h>

int main() {
    int x, y;
    int resultado = 1; /* Inicializa o resultado com 1, pois qualquer número elevado a 0 é 1 */
    int contador = 0;  /* Contador para o loop */

    /* Leitura dos números x e y, com verificação de restrições */
    do {
        printf("Digite dois inteiros, onde x != 0 e y >= 0:\n<x y>: ");
        scanf("%d %d", &x, &y);
    } while (x == 0 || y < 0);  /* Repete enquanto x == 0 ou y < 0 */

    /* Loop para calcular a potência x^y */
    do {
        resultado *= x;  /* Multiplica o resultado por x a cada iteração */
        contador++;      /* Incrementa o contador */
    } while (contador < y);  /* Repete até que o contador seja igual a y */

    /* Se y for 0, o resultado já será 1, pois qualquer número elevado a 0 é 1 */

    /* Exibindo o resultado */
    printf("%d elevado a %d eh %d\n", x, y, resultado);

    return 0;
}
