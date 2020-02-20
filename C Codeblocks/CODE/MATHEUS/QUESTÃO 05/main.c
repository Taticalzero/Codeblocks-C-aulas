#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main()
{
    char nome[30],sexo;
    int idade;

    printf("Insira o seu nome: ");
    scanf("%s", nome);
    printf("Insira sua idade: ");
    scanf("%d", &idade);
    printf("Insira o seu sexo: M - masculino F - feminino: ");
    scanf("%c", &sexo);
    if (sexo == 'F' && idade < 25)
        printf("%s: \n\nACEITA", nome);
    else
        printf("%s: \n\nNAO ACEITA", nome);

    printf("\n\n");
    system("pause");
}
