/*
#include <stdio.h>
#include <locale.h>

8 – Os participantes de um campeonato são divididos em categorias. As categorias são:
- peso leve, infantil
- peso pesado, infantil
- peso leve, juvenil
- peso pesado, juvenil
- peso leve, adulto
- peso pesado, adulto
As faixa de idade para as categorias infantil, juvenil e adulto são
- infantil: de 13 a 14 anos
- juvenil: de 15 a 17 anos
- adulto: de 18 ou mais
Para cada categoria, as diferenças de peso são:
- infantil leve: até 45 kgs
- infantil pesado: acima de 45 kgs
- juvenil leve: até 60 kgs
- juvenil pesado: acima de 60 kgs
- adulto leve: até 85 kgs
- adulto pesado: acima de 85 kgs
Faça um programa que receba a idade e o peso de um concorrente e indique sua
categoria.



int main(void) {

    setlocale(LC_ALL,"Portuguese");

  int peso;
  int idade;

  printf("Digite a idade do atleta: ");
  scanf("%d", &idade);

  printf("Digite o peso do atleta: ");
  scanf("%d", &peso);

  if (idade >= 13 && idade <= 14 && peso <= 45) {
    printf("\n Infantil Leve");
  } else if (idade >= 13 && idade <= 14 && peso > 45) {
    printf("\n Infantil Pesado");
  }
  if (idade >= 15 && idade <= 17 && peso <= 60) {
    printf("\n Juvenil Leve");
  } else if (idade >= 15 && idade <= 17 && peso > 60) {
    printf("\n Juvenil Pesado");
  }
  if (idade >= 18 && peso <= 85) {
    printf("\n Adulto Leve");
  } else if (idade >= 18 && peso > 85) {
    printf("\n Adulto Pesado");
  }

  if (idade < 13) {
    printf("\n Não pode competir");
  }
  return 0;
}
*/