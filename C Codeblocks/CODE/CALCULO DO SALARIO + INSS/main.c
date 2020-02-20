#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
int main()
{

 float vha,nad,inss, salario, desconto;

 printf("Informe o valor da hora aula: ");
 scanf("%f",&vha);
 printf("Informe o numero de aulas dadas: ");
 scanf("%f",&nad);
 printf("Informe o valor do percentual de desconto do INSS: ");
 scanf("%f",&inss);

 salario = vha * nad;
 desconto = salario * inss /100;

 printf("\n\nSalario liquido e: %3.2f\n\n",salario - desconto);

 system("PAUSE");
 return 0;
}
