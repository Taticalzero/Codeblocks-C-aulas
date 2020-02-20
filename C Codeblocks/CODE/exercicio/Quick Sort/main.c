#include <stdio.h>
#include <stdlib.h>

int dividir(int vetor[],int esq, int dir) // função responsavel pela efetuação de trocas
{
    int aux; //troca de posicoes
    int cont = esq; // posição parte desmenbrada do seu vetor

    for(int i=esq+1 ; i<=dir ; i++){

        if( vetor[i] < vetor[esq] ){
            cont++; // contagem para posição seguinte
            aux=vetor[i];
            vetor[i]=vetor[cont];  // comparações de menor para o maior
            vetor[cont]=aux;
        }
    }

    aux=vetor[esq]; // compara novamente afim de ordenar apos as trocas
    vetor[esq]=vetor[cont];
    vetor[cont]=aux;

    return cont; // retorno das posiçoes ordenadas da função
}

void quick(int vetor[],int esq, int dir){ //função quick (comparações são feitas da esquerda para direita)
    int pos; // ultimo elemento
    if(esq < dir){ //comparativo da esquerda para direita
        pos = dividir(vetor,esq,dir); // chamada da funçao que fara a divisão do vetor em partes
        quick(vetor,esq,pos-1); // inicio das trocas
        quick(vetor,pos+1,dir); // reordenação apos as trocas feitas
    }
}

int main(void){

    int vetor[]={15,11,8,20,25,32,14,27,13,1,9,36,16,18,23,5,10,22,21,12}; // chamada do vetor
    int n=19; // total de posições

    quick(vetor,0,n); // chamada da função quick  // O 'ZERO' SIGNIFICA A 1 POSIÇÃO E N ULTIMO ELEMENTO

    printf("\n\n");

    for(int i=0;i<n;i++) // mostragem do vetor ordenado
    printf("\n\n%d",vetor[i]);

    printf("\n\n");

    system("pause");
}
