#include <stdio.h>
#include <stdlib.h>

int main(void){
    int i , j , aux;
    int vet[20] = {15,11,8,20,25,32,14,27,13,1,9,36,16,18,23,5,10,22,21,12};

    //Leitura do vetor  e suas posi��es
    for (i=0 ; i<20 ; i++){
    aux=vet[i]; // ARMAZENANDO VALORES NA AUXILIAR
    j=i-1; // INICIO DA CONDI��O ISERTION SORT

  while ((j>=0)&& (aux < vet[j])){
    vet[j+1]= vet[j];
    j--;
  }
    vet[j+1]= aux;
 }
  // Imprimindo a ordena��o feita

    for (i=0 ; i<20 ; i++){
        printf("%d", vet[i]);
        printf("\n\n");
    }
    printf("\n\n");
    system("pause");
}
