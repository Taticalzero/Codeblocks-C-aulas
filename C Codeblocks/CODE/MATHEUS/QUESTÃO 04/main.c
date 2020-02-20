#include <stdio.h>
#include <stdlib.h>

int main()

{
  char nome[30], endereco[30], telefone[15];
  printf("Digite seu nome: \n");

  gets(nome);
  system("cls");

  printf("Digite seu endereco: \n");

  gets(endereco);
  system("cls");

  printf("Digite seu telefone: \n");
  gets(telefone);
  system("cls");

  printf("Nome: %s\n", nome);
  printf("Telefone: %s\n", telefone);
  printf("Endereco: %s\n", endereco);
  system("pause");

}

