#include <stdio.h>
#include <stdlib.h>

int main ()

{
int val[5],aux,i;

printf("\n\tEntre com 100 numeros:\n");

for(i=0; i <= 4; i++){

 printf("\n\t%d§ valor:", i+1);
 scanf("%d", &val);

}
    printf("\nEstes sao os valores lidos em ordem decrescente:\n");

    for(i=0; i<=4; i++){
        if(val < val[i+1]){
            aux = val;

            val = val[i+1];

            val[i+1] = aux ;

    }
  printf("\nval[%d]: %d\n", i+1, val);

}
  system("pause");
  return 0;
}
