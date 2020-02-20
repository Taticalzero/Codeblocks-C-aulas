#include <stdio.h>
#include <stdlib.h>

int main()
{
   float  vet[5], ax, x;
   int i, meio;
   int inicio = 0;
   int fim = 5;
   for(i = 0; i < 5; i++)
   {
       printf("\nInforme um valor para a posicao %d:",i);
       scanf("%f",&vet[i]);
   }
   printf("\nDigite o valor que deseja buscar:");
   scanf("%f", &x);
   while (inicio <= fim)
   {
       meio = (inicio + fim)/2;
       if(x == vet[meio]) //modificacao
       {
           printf("\nO valor esta na posicao: %d\n", meio);
       }
       for(i = 0; i < 5; i++)
        {
           if(x == vet[i])
           {
               inicio = (fim + 1);
               //essa condicao é para sair do while
               printf("\nO valor esta na posicao: %d\n", i);
           }
           else if(x < vet[i])
           {
               fim = meio-1;
           }
           else
           {
               inicio = meio + 1; // Modificacao
           }
       }
       if (fim == inicio)
           printf ("O Valor nao foi encontrado\n");
   }
   system ("pause");
   return 0;
}
