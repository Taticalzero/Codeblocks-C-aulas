#include <stdio.h>
#include <math.h>

int main()
{
    int x,z,y;

    z = 0;
    for(y=0;y<5;y++){
        scanf("%d", &x);
        if(x%2==0)z++;
    }
    printf("%d valores pares\n",z);
    return 0;
}
