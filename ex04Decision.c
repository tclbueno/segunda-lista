/*
#include <stdio.h>
#include <locale.h>

4 – Escreva um programa que receba 4 notas de um aluno: P1, T1, P2 e T2. 

int main(void) {

    setlocale(LC_ALL,"Portuguese");

  float primProva, segProva, primTrab, segTrab, primMedia, segMedia, mediaFinal;

  printf("Digite a nota da primeira prova:\n");
  scanf("%f", &primProva);
  printf("Digite a nota do primeiro trabalho:\n");
  scanf("%f", &primTrab);
  printf("Digite a nota da segunda prova:\n");
  scanf("%f", &segProva);
  printf("Digite a nota do segundo trabalho:\n");
  scanf("%f", &segTrab);

  primMedia = primProva * 0.6 + primTrab * 0.4;
  segMedia = segProva * 0.7 + segTrab * 0.3;
  mediaFinal = (primMedia + segMedia) / 2;

  printf("A média do aluno é: %.2f", mediaFinal);

    //Média Final > = 6,0 🡪 aluno aprovado
    //Média Final < 4,0 🡪 aluno reprovado
    //4,0 >= Média Final < 6,0 🡪 aluno de recuperação

  if (mediaFinal >= 6.0) {
    printf("\nAluno aprovado!");
  } else if (mediaFinal > 4.0 && mediaFinal < 6.0) {
    printf("\nAluno de recuperação!");
  } else {
    printf("\nAluno reprovado!");
  }

  return 0;
}
*/