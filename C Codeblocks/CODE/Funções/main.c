#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

float calcula (float x, float y, float z)
  {
      return (pow(x,2)+(y+z));
  }
int main(){
    printf("Resultado: %3.2f\n", calcula(2,3,4));
    printf("\n\n");

    system("pause");
    return(0);
}
