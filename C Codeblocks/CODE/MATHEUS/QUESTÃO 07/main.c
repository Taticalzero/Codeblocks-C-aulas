#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#include <string.h>

int main()
{
    int x,tam;
    char nome[100];

    printf("Digite o seu nome:  \n");
    gets(nome);
    tam=strlen(nome);

    for(x=1; x<=tam ;x++)
        printf("\n%s", nome);
        printf("\n\n");

    system("pause");
}
