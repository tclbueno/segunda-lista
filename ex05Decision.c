/*
#include <locale.h>
#include <stdio.h>

5 – Escreva um programa que receba um número e diga se ele é par ou ímpar.

int main(void) {

  setlocale(LC_ALL, "Portuguese");

  int par, impar, num;

  printf("Digite um numero:\n");
  scanf("%d", &num);

  if (num % 2 == 0) {
    printf("Este número é par");
  } else {
    printf("Este número é impar");
  }

  return 0;
}
*/