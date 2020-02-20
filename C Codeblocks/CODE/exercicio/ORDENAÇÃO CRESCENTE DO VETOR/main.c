#include <stdlib.h>
#include <stdio.h>
int main()
{
int x[20];
int i, j, z;

/*
Numeros da questão :  (15,11,8,20,25,32,14,27,13,1,9,36,16,18,23,5,10,22,21,12)
*/


/* Leitura do Vetor */
   for (i = 0; i<20; i++)

{
   printf("Digite um numero:");
   scanf("%d",&x[i]);
   }
//ordenando o vetor

    for (i=0;i<20; i++)
      for(j=i+1;j<20;j++)
  {
    if (x[i]>x[j])
 {
 z=x[i];
   x[i]=x[j];
    x[j]=z;
  }
 }


/* Impressão do Vetor Ordenado */
   printf("Vetor em ordem crescente: \n");
   for(i=0;i<20;i++)
   printf(" %d",x[i]);
   printf("\n\n");

  system("pause");
  return 0;
}
