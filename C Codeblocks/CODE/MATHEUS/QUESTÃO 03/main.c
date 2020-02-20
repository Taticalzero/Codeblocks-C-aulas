#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    char nome[30];

    printf("\nDigite um nome:  ");
    gets (nome);
    for(i=0; i<10; i++)
    {
        printf("%i= %s\n", i+1, nome);
    }
    system("pause");
}
