#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;

    printf("Digite um numero: \n");
    scanf("%i",&x);

    while(x<1||x<4){
        printf("ENTRADA INVALIDA,DIGITE OUTRO NUMERO: ");
        scanf("%d",&x);
    }
    printf("\nNUMERO CORRETO, %d", x);
    printf("\n\n");

    system("pause");
    return 0;
}
