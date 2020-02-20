#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int vet[10],x,y=0;

    for (x=0;x<=9;x++){
        vet[x]=y+2;
        y=y+2;
    }

       for (x=0;x<=9;x++){
         printf("%i", vet[x]);
         printf("\n\n");
       }
    return(0);


}
