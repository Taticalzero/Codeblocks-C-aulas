#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int vet[20] = {15,11,8,20,25,32,14,27,13,1,9,36,16,18,23,5,10,22,21,12};
    int i; // variavel de posi��o do vetor

    void crescente(int vet[],int n); // declara��o de fun��o

    crescente(vet,20);// chamada da fun��o

    for(i=0 ; i<20 ; i++){ // leitura das posi��es dos vetores
        printf("\n%d", vet[i]); // mostragem das posi��es
    }
        printf("\n\n");
        system("pause");
    }
    void crescente(int vet[], int n){ //inicio da fun��o
        int i , j , aux ;  // variavel i = percorrimento do vetor // j = sua posi��o // aux = armazena
        for(i=0;i<n;i++){  // inicio do vetor
            for(j=i+1;j<n;j++){ // inicio da amostragem de posi��es
                if(vet[i]>vet[j]){ // regras de compara��o
                    aux=vet[i];
                    vet[i]=vet[j];
                    vet[j]=aux;
                }
            }
        }
    }
