#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<conio.h>
#include<string.h>


int main()
{
char nome[30];
int x,t, za=0;
printf("\n\t INFORME UMA PALAVRA : ");
gets(nome);
t=strlen(nome);

    for (x=1; x <= t-1; x++)
{
    if (nome[x] == 'a' || nome[x] == 'A')
    za++;
}

    printf("\n O nome %s ",(nome));
    printf("tem %d letra a.",za);
    printf("\n\n");
    system("pause");
}
