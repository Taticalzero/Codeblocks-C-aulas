#include <stdio.h>
#include <stdlib.h>

int dividir(int vetor[],int esq, int dir) // fun��o responsavel pela efetua��o de trocas
{
    int aux; //troca de posicoes
    int cont = esq; // posi��o parte desmenbrada do seu vetor

    for(int i=esq+1 ; i<=dir ; i++){

        if( vetor[i] < vetor[esq] ){
            cont++; // contagem para posi��o seguinte
            aux=vetor[i];
            vetor[i]=vetor[cont];  // compara��es de menor para o maior
            vetor[cont]=aux;
        }
    }

    aux=vetor[esq]; // compara novamente afim de ordenar apos as trocas
    vetor[esq]=vetor[cont];
    vetor[cont]=aux;

    return cont; // retorno das posi�oes ordenadas da fun��o
}

void quick(int vetor[],int esq, int dir){ //fun��o quick (compara��es s�o feitas da esquerda para direita)
    int pos; // ultimo elemento
    if(esq < dir){ //comparativo da esquerda para direita
        pos = dividir(vetor,esq,dir); // chamada da fun�ao que fara a divis�o do vetor em partes
        quick(vetor,esq,pos-1); // inicio das trocas
        quick(vetor,pos+1,dir); // reordena��o apos as trocas feitas
    }
}

int main(void){

    int vetor[]={15,11,8,20,25,32,14,27,13,1,9,36,16,18,23,5,10,22,21,12}; // chamada do vetor
    int n=19; // total de posi��es

    quick(vetor,0,n); // chamada da fun��o quick  // O 'ZERO' SIGNIFICA A 1 POSI��O E N ULTIMO ELEMENTO

    printf("\n\n");

    for(int i=0;i<n;i++) // mostragem do vetor ordenado
    printf("\n\n%d",vetor[i]);

    printf("\n\n");

    system("pause");
}
