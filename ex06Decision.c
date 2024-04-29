/*
#include <stdio.h>
#include <locale.h>

6 – Faça um programa que receba um ano e diz se é um ano bissexto ou não.

int main(void) {

    setlocale(LC_ALL,"Portuguese");

  int ano;

  printf("Digite um ano: \n");
  scanf("%d", &ano);

  if ((ano % 4 == 0) && (ano % 100 != 0) ||
      (ano % 400 == 0) && (ano % 100 == 0) && (ano % 4 == 0)) {
    printf("O ano é bissexto");
  } else {
    printf("O ano não é bissexto");
  }
  return 0;
}
*/