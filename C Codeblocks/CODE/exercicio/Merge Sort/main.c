#include <stdio.h>
#include <stdlib.h>

void mergeSort(int *vetor, int posicaoInicio, int posicaoFim) {
    int i, j, k, metadeTamanho, *vetorTemp;
    if(posicaoInicio == posicaoFim) return;
    metadeTamanho = (posicaoInicio + posicaoFim ) / 2; // divisão do vetor em 2 partes "meio do vetor "

    mergeSort(vetor, posicaoInicio, metadeTamanho);
    mergeSort(vetor, metadeTamanho + 1, posicaoFim);

    i = posicaoInicio; // inicio
    j = metadeTamanho + 1; // meio do vetor
    k = 0; // posições a serem ocupadas durante o incremento apos as divisões serem realizadas
    vetorTemp = (int *) malloc(sizeof(int) * (posicaoFim - posicaoInicio + 1)); // armazenamento de espaço no vetor

    while(i < metadeTamanho + 1 || j  < posicaoFim + 1) {  // inicio das condições divisionais
        if (i == metadeTamanho + 1 ) {
            vetorTemp[k] = vetor[j];
            j++;
            k++;
        }
        else {
            if (j == posicaoFim + 1) {
                vetorTemp[k] = vetor[i]; //Sucetiveis comparações de suas divisões realizadas no aux
                i++;
                k++;
            }
            else {
                if (vetor[i] < vetor[j]) {
                    vetorTemp[k] = vetor[i]; //Sucetiveis comparações de suas divisões realizadas no aux
                    i++;
                    k++;
                }
                else {
                    vetorTemp[k] = vetor[j]; //Sucetiveis comparações de suas divisões realizadas no aux
                    j++;
                    k++;
                }
            }
        }

    }
    for(i = posicaoInicio; i <= posicaoFim; i++) {
        vetor[i] = vetorTemp[i - posicaoInicio]; //Ordena no aux e depois mostra no vetor principal
    }
    free(vetorTemp); // limpeza do espaço do vetor aux e exclusão
}
int main(void){

    int vetor[]={15,11,8,20,25,32,14,27,13,1,9,36,16,18,23,5,10,22,21,12}; // chamada do vetor
    int n=19; // total de posições

    mergeSort(vetor,0,n); // chamada da função merge  // O 'ZERO' SIGNIFICA A 1 POSIÇÃO E N ULTIMO ELEMENTO

    printf("\n\n");

    for(int i=0;i<n;i++) // mostragem do vetor ordenado
    printf("\n\n%d",vetor[i]);

    printf("\n\n");

    system("pause");
}
