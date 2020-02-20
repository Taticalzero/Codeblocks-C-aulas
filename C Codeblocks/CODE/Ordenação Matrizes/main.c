#include <stdio.h>
#include <stdlib.h>

int main()
{
    int col,lin,aux;
    int mat[4][4];


    for (lin=0;lin<=3;lin++){
         for (col=0;col<=3;col++){
       printf("Digite sua linha %d linha , Digite sua coluna %d :",lin+1,col+1);
        scanf("%d",&mat[lin][col]);
         }
    }
    printf("\n\n");

    for (lin=0;lin<=2;lin++){
         for (col=lin;col<=3;col++){
            if(mat[lin][col]>mat[lin][col+1]){
                aux=mat[lin][col];
                mat[lin][col]=mat[lin][col+1];
                mat[lin][col+1]=aux;
            }
         }
    }
    printf("\n\n");
    for (lin=0;lin<=3;lin++){
         for (col=0;col<=3;col++){
            printf("Matriz %d  \n:" ,mat[lin][col]);
         }
         printf("\n\n");
    }

    system("pause");
}
