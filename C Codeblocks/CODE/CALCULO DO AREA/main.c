#include <stdio.h>
#include <stdlib.h>

float esfera(float pi , float r , float a){

    return((4*pi)*(r*r));
}

int main()
{
   float a,pi=3.14,r=2;
   a=esfera(pi,r,a);
   printf("Sua area e %2.f", a);

   return 0;
}
