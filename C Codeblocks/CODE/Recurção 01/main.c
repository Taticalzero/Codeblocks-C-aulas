#include <stdio.h>
#include <stdlib.h>

int main()
{
  int fatorial (int x);
  int result,num;

  printf("Digite um numero inteiro: \n");
  scanf("%i",&num);

  result = fatorial(num);

  printf("Fatorial de seu numero e %i", result);
}
    int fatorial(int x)
    {
        int resultado;
        if(x == 0){
          return 1;
        }
        return x * fatorial (x-1);

    }
