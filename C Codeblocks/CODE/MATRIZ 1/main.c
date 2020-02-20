#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y,tam;
   float vet[10], quad[10];

   for (x=0; x<=9; x++){
    printf("Digite o numero %d: ",x+1);
    scanf("%f", &vet[x]);
    quad[x] = pow(vet[x],2);
   }

   printf("\n\nVetor  VET: ");
    for (x=0; x<=9;x++)
    printf("%4.0f",vet[x]);
    printf("\n\n");
    printf("Vetor QUAD: ");


    for (x=0; x<=9;x++)
    printf("%4.0f",quad[x]);
    printf("\n\n");
    system("pause");
    return 0;

 }
