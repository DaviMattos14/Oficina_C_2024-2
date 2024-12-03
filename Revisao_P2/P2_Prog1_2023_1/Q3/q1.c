#include <stdio.h>
void imprimir(char s[], int pos)
{
    if (!pos)
        return;
    imprimir(s, pos - 1);
    printf("%c", s[pos]);
}
int main()
{
    char palavra[] = "vexame";
    imprimir(palavra, sizeof(palavra) - 1);
    return 0;
}