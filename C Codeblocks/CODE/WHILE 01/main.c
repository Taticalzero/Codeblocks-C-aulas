#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int idade,contador21=0,contador50=0;

    printf("Digite sua idade: \n");
    scanf("%d",&idade);

    while(idade!=-99){
        if(idade<21)
            contador21++;

        if(idade>50)
            contador50++;

    printf("\n Para encerrar digite -99 : ");
    scanf("%d",&idade);
    }

    printf("\nIdade acima de 50, %d", contador50);
    printf("\nIdade menor que 21, %d", contador21);
    printf("\n\n");

    system("pause");
    return 0 ;
}
