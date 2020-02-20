#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main ()
{
      int z,tam;
      char nome[30];
      for (z=1; z <= 4; z++)
      {
          printf("Digite um nome: ");
          gets(nome);
          tam = strlen(nome);
          printf("\nEsse nome tem %d\ letras.\n\n",tam);
      }
      printf("\n\n");
      system("pause");
}
