#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
int main()
{
 float precoatual;

 printf("Informe o preco atual do produto: ");
 scanf("%f",&precoatual);
 printf("\n\nNovo preco com desconto de 9%% e: %3.2f\n\n",precoatual * 0.91);

 system("PAUSE");
 return 0;
}
