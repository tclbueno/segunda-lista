/*
#include <locale.h>
#include <stdio.h>

3 – Escreva um programa que receba três números inteiros e apresente-os na ordem
crescente.

int main(void) {

  setlocale(LC_ALL, "Portuguese");

  int num1, num2, num3;
  int aux;

  printf("Digite três números:\n");
  scanf("%d %d %d", &num1, &num2, &num3);

  if (num1 > num3) {
    aux = num1;
    num1 = num3;
    num3 = aux;
  }
  if (num1 > num2) {
    aux = num1;
    num1 = num2;
    num2 = aux;
  }
  if (num2 > num3) {
    aux = num2;
    num2 = num3;
    num3 = aux;
  }

  printf("A ordem crescente é: %d %d %d", num1, num2, num3);

  return 0;
}
*/