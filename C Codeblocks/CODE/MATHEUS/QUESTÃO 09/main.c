#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
int main()

{
    int x,tam;
    int la,le,li,lo,lu;
    char nome[100];

    la = le = li = lo = lu = 0;
    printf("Digite uma frase: ");
    gets(nome);
    tam = strlen(nome);
    for (x=1; x <= tam-1; x++)
    {
        if (nome[x] == 'a' || nome[x] == 'A')
            la++;
        else if (nome[x] == 'e' || nome[x] == 'E')
            le++;
        else if (nome[x] == 'i' || nome[x] == 'I')
            li++;
        else if (nome[x] == 'o' || nome[x] == 'O')
            lo++;
        else if (nome[x] == 'u' || nome[x] == 'U')
            lu++;
    }
    printf("\n\nA frase tem:\n");
    printf("\n%d letra a",la);
    printf("\n%d letra e",le);
    printf("\n%d letra i",li);
    printf("\n%d letra o",lo);
    printf("\n%d letra u",lu);
    printf("\n\n");
    system("pause");
}
