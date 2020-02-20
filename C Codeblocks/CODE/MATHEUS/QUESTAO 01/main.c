#include <stdio.h>
#include <stdlib.h>

int main()
{
int cont=1,tam,x;
char nome[30];

printf ("Informe seu nome:");
gets(nome);
tam=strlen(nome);

    printf("\nAs letras na posicao impar sao: ",x);
    while(cont<=tam-1)
{
    printf(" %c ",nome[cont]);
    cont=cont+2;
}
    printf ("\n");
    printf("\n\tNome digitado: %s\t",nome);
    printf ("\n\n");
    system("PAUSE");
    return 0;
}
