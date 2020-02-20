#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char nome[30];
    int x,t;

    printf("\nDIGITE UM NOME: ");
    gets(nome);

    t=strlen(nome);

    for(x=t;x>=0;x--)
    printf("%c",nome[x]);

    printf("\n\n");
    system("pause");
    return(0);
}
