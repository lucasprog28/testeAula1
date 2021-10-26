#include <stdio.h>

/*Algorítmo que recebe dois números do usuário e faz a multiplição deles*/

int main(){

  float num1, num2;

    printf("\nMULTIPLICAÇÃO\n");

    printf("\nDigite um número:");
    scanf("%f",&num1);

    printf("\nDigite novamente outro número:");
    scanf("%f",&num2);

    printf("\nA multiplicação entre %.01f e %.01f é: %.01f\n",num1,num2, num1 * num2);


}
