#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int vet[20] = {15,11,8,20,25,32,14,27,13,1,9,36,16,18,23,5,10,22,21,12};
    int i;
    void crescente(int vet[],int n);

    crescente(vet,20);

    for(i=0 ; i<20 ; i++){
        printf("\n%d", vet[i]);
    }
        printf("\n\n");
        system("pause");
        return 0;
    }
    void crescente(int vet[], int n){
        int i , j , aux ;
        for(i=0;i<n;i++){
            for(j=i+1;j<n;j++){
                if(vet[i]>vet[j]){
                    aux=vet[i];
                    vet[i]=vet[j];
                    vet[j]=aux;
                }
            }
        }
    }
