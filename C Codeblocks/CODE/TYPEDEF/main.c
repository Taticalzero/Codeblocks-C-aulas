#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    typedef float nota;

    nota prova1 = 0, prova2 =0 , media =0 ;

    printf("Informe a primeira nota: \n");
    scanf("%f", &prova1);
    printf("Informe a segunda nota: \n");
    scanf("%f", &prova2);

    media = (prova1+prova2)/2;

    printf("Media do aluno %2.f\n", media);

    getch();
    return 0;
}
