#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int vet[20] = {15,11,8,20,25,32,14,27,13,1,9,36,16,18,23,5,10,22,21,12};
    int i; // variavel de posição do vetor

    void crescente(int vet[],int n); // declaração de função

    crescente(vet,20);// chamada da função

    for(i=0 ; i<20 ; i++){ // leitura das posições dos vetores
        printf("\n%d", vet[i]); // mostragem das posições
    }
        printf("\n\n");
        system("pause");
    }
    void crescente(int vet[], int n){ //inicio da função
        int i , j , aux ;  // variavel i = percorrimento do vetor // j = sua posição // aux = armazena
        for(i=0;i<n;i++){  // inicio do vetor
            for(j=i+1;j<n;j++){ // inicio da amostragem de posições
                if(vet[i]>vet[j]){ // regras de comparação
                    aux=vet[i];
                    vet[i]=vet[j];
                    vet[j]=aux;
                }
            }
        }
    }
