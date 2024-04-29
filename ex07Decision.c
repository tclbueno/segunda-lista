/*
#include <stdio.h>
#include <locale.h>

7-Escreva um programa que receba 4 valores: num1, num2, num3 e num4. Os valores
devem seguir as seguintes regras:
num1 > num2
num3 > num4
(num3 + num4) < (num1 + num2)
O seu programa deve testar e informar se os critérios foram atendidos ou não.

int main(void){

    setlocale(LC_ALL,"Portuguese");

  int num1, num2, num3, num4;

  printf("Digite 4 valores: ");
  scanf("%d %d %d %d", &num1, &num2, &num3, &num4);

  if(num1 > num2 && num3 > num4 && (num3 + num4) < (num1 +num2)){
    printf("Os critérios foram atendidos");
  }else{
    printf("Os critérios não foram atendidos");
  }
  return  0;
}
*/