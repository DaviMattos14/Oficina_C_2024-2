/*
ENTRADA: Recebe 3 Notas (float)
SAÍDA: Média das notas (float)
DEFESA: 0<= Nota <=10
*/
#include <stdio.h>

int main()
{

    float n1, n2, n3, media;
    printf("Digite 3 notas <Nota1 Nota2 Nota3>:\n");
    scanf("%f %f %f", &n1, &n2, &n3);
    /*5.5 6.8 2.5*/
    if (n1 < 0 || 10 < n1 || n2 < 0 || 10 < n2 || n3 < 0 || 10 < n3)
    {
        printf("OPA! Nota invalida!");
        return -1;
    }
    else
    {
        media = (n1 + n2 + n3) / 3;
    }

    printf("A media eh: %.2f\n", media);

    return 0;
}

/*
    5.5 6.8 -2.5
for (int i = 0; i < 3; i++)
{
    printf("Digite a nota :\n");
    scanf("%f ", &n1);
    if(...){
        printf("Nota inválida!");
        i--;
        continue;
    }
*/
