#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
        int  cont,vetor1[5],vetor2[5];
        float soma;

        for(cont=0;cont<5;cont++)
        {
        printf("\nDigite um Valor para o Vetor1: ");
        scanf("%i",&vetor1[cont]);

        }

        printf("\n\n");
        for(cont=0;cont<5;cont++)
        {
        printf("\nDigite um Valor para o Vetor2: ");
        scanf("%i",&vetor2[cont]);
        }
        printf("\tVETOR [1] :\n");
        for(cont=0;cont<5;cont++)
        {
            printf("Vetor 1 [%d] \n",vetor1[cont]);

        }
        printf("\tVETOR [2] :\n");
        for(cont=0;cont<5;cont++)
        {
           printf("Vetor 2 [%d]\n",vetor2[cont]);
        }
        for(cont=0;cont<5;cont++)
        {
        soma=vetor1[cont]+vetor2[cont];
            printf("Soma dos Vetores Posicao %d = %.2f\n",cont,soma);
        }

        getch();
    }
