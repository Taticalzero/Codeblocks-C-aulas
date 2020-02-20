#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>
#include<string.h>

int main()
{
float x;
printf("\n\tDigite um numero: ");
scanf("%f",&x);
printf("\n\tValor reajustado em 10%% e: %2.2f\n",x*110/100);
printf("\n\n");
system("pause");
return 0;
}
