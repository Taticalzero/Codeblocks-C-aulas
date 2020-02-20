#include <stdio.h>
#include <stdlib.h>

int fatorial(int x)
{
    if(x == 1)
        return 1;
    else
        return ( x * fatorial(x-1) );
    }
int main()
{
    int x;
    printf("Digite um numero: \n");
    scanf("%d", &x);
    printf("%d = %d\n", x , fatorial(x));
}
