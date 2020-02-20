#include <stdio.h>
#include <stdlib.h>

int main()
{
   int vet[3],x,y=0;
   float sm=0,sm2=0;

   for(x=0;x<=3;x++){
    printf("Digite os numeros que compoem o vetor:  \n");
    scanf("%d", &vet[x]);
   }
    printf("Seu vetor [1] e esse:  \n");
    for(x=0;x<=3;x++){
        sm2+=vet[x];
        printf("%d=[%d]\n" ,x,vet[x]);

        if(vet[x]>30){
            sm+=vet[x];
            y++;
        }

    }

    printf("\n\tA soma dos vetores maiores que 30 = %.0f\n\tA soma total de todos os vetores = %.0f\n\t", sm,sm2);
    system("pause");
    return(0);

}
