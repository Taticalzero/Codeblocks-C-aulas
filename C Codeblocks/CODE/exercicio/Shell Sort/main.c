#include <stdio.h>
#include <stdlib.h>

void shellSort(int *vet, int size) {
    int i , j , value;
    int gap = 1; // arrendodamento para +1 ex: 3/2=1.5 no caso ele transfor 3>4 sendo 4/2
    while(gap < size) { // compara-se o tomanho com sua variavel de incremento
        gap = 3*gap+1; // condi��o do arrendodamento gap++
    }
    while (gap > 0) {
        for(i = gap; i < size; i++) { // avan�a posi��es de acordo com o tamanho e realiza a compara��o
            value = vet[i]; // se for maior troca-se com o  menor e assume sua posi��o
            j = i;
            while (j > gap-1 && value <= vet[j - gap]) { //apos troca se faz a compara��o com mais 2 casas a frente
                vet[j] = vet [j - gap]; // realiza-se novamente a troca e o retorna o valor da posi��o
                j = j - gap;
            }
            vet [j] = value; // compara-se a posi��o mais o valor assumido (lembrando sempre numeros inteiros)
        }
        gap = gap/3; // reseta a posi��o do qual finalizou sua compara��o
    }
}
int main(void)
{
    int vet[20] = {15,11,8,20,25,32,14,27,13,1,9,36,16,18,23,5,10,22,21,12};
    int i;
    void shellSort(int vet[],int n); // cria��o da fun��o shell

    shellSort(vet,20); // leitura das vetor e suas posi��es que ser�o ordenardas

    for(i=0 ; i<20 ; i++){
        printf("\n%d", vet[i]); // mostragem do vetor ordenardo
    }
        printf("\n\n");
        system("pause");
    }
