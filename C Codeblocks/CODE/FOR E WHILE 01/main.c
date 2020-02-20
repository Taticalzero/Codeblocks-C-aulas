#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int NUM,maior=NUM;

    printf("\n DIGITE UM NUMERO INTEIRO: ");
    scanf("%d",&NUM);

    while(NUM!=0)
 {
    if(NUM>maior)

    maior=NUM;

    printf("\n DIGITE OUTRO NUMERO(PARA ENCERRAR DIGITE 0) : ");
    scanf("%d",&NUM);
 }
   printf("\n O MAIOR NUMERO E: %d",maior);
   printf("\n\n");

 system("pause");
 return(0);
 }
