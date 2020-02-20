#include <stdio.h>
#include <stdlib.h>

int main()
{
    int cpf[60], CPF, senha[60], SENHA;
    FILE *arq;
    arq = fopen("arquivo.txt", "r");
    if(arq ==NULL){
        printf("ERRO NA ABERTURA\n");
        system("pause");
        exit(1);
    }

    printf("Imforme o CPF: ");
    scanf("%d", &CPF);
    printf("Informe SENHA: ");
    scanf("%d", &SENHA);

    for(int i=0; i<60; i += 2){
        fscanf(arq, "%d %d\n", &cpf[i], &senha[i]);
        if(cpf[i] == CPF && senha[i] == SENHA){
            printf("ACESSO PERMITIDO!\n");
            printf("%d %d\n", cpf[i], senha[i]);
            fclose(arq);
            return 0;
        }
    }

    printf("ACESSO NEGADO!\n");
    fclose(arq);
    return 0;
}
