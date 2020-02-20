#include <stdio.h>
#include <stdlib.h>

int soma (int x)
{
    if (x == 0)
        return 1;
    else
        return(x + soma(x-1) );
}
int main()
{
    int x;
    printf("Digite um valor : \n");
    scanf("%d", &x);
    printf("%d = %d ", x , soma(x) );
}
