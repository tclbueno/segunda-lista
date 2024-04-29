/*
#include <locale.h>
#include <stdio.h>

2 – Escreva um programa que apresente na tela uma conta simples matemática entre
dois valores e receba o resultado da conta do usuário. O programa deve informar se a
resposta foi correta ou não.

int main(void) {

  setlocale(LC_ALL, "Portuguese");

  int resultado = 142, chute;

  printf("Qual é o resultado da soma 65 + 77 ?\n");
  scanf("%d", &chute);

  if (resultado != chute) {

    printf("[ERRADO!] Tente novamente.");
  } else {
    printf("Parabéns, você acertou!");
  }

  return 0;
}
*/