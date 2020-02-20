#include <stdio.h>
#include <stdlib.h>

void bubble_sort (int vetor[], int n) {
    int k, j, aux;

    for (k = 1; k < n; k++) {
        printf("\n%d ", k);

        for (j = 0; j < n - 1; j++) {
            printf("%d, ", j);

            if (vetor[j] > vetor[j + 1]) {
                aux          = vetor[j];
                vetor[j]     = vetor[j + 1];
                vetor[j + 1] = aux;
            }
        }
    }
}
int main(void)
{
    int vet[20] = {15,11,8,20,25,32,14,27,13,1,9,36,16,18,23,5,10,22,21,12};
    int i; // variavel de posição do vetor

    void bubble_sort (int vetor[], int n); // declaração de função

   bubble_sort(vet,20);// chamada da função

    for(i=0 ; i<20 ; i++){ // leitura das posições dos vetores
        printf("\n%d", vet[i]); // mostragem das posições
    }
        printf("\n\n");
        system("pause");
        printf("%d, ", vet[i]);
    }
