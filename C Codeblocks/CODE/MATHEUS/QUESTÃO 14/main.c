#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char nome[3][20];
    int x;

    for(x=0;x<=3;x++){
        printf("Digite os [3] nomes:  \n\t");
        scanf("%s", &nome[x]);

    }
    for(x=0;x<=3;x++){
        printf("%s\n ", &nome[x]);
    }
    printf("\n\n");
    return(0);
}
