#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vet[8],cont,num,rest;

    for (cont=0 ; cont<=8 ; cont++){
        printf("Digite um numero para seu vetor:  \n");
        scanf("%i",&vet[cont]);
    }
     printf("Digite outro numero para verificar a posicao do vetor:  \n");
     scanf("%i",&num);

     for(cont=0;cont<=8;cont++)
     if (vet[cont]== num){
        printf("A posicao do numero em seu vetor é %i\n:" , cont);
        rest=0;
     }
     if (rest!=0){
        printf("Não existe posicao no vetor. \n\n");
     }
        system("pause");
        return(0);
}
