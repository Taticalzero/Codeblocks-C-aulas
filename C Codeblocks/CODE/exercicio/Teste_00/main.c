#include <stdio.h>
#include <stdlib.h>

int main(){
    int cpf, senha, op=1;
    FILE *arq;
    arq = fopen("arquivo.txt", "w");
    if(arq == NULL){
        printf("ERRO NA ABERTURA!\n");
        system("pause");
        exit(1);
    }
    while(op != 0){
        printf("INFORME O COF: ");
        scanf("%d", &cpf);
        fprintf(arq," %d", cpf);

        printf("INFORME A SENHA: ");
        scanf("%d", &senha);
        fprintf(arq, " %d", senha);

        printf("PARA SAIR APERTE ZERO {0}: ");
        scanf("%d", &op);
    }

    fclose(arq);

    return 0;
}
