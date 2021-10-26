#include <stdio.h>

/*Algorítimo que calcula o salário líquido*/
/*O algorítimo recebe o salário bruto e desconta 8% de imposto e 5% do sindicato*/

int main (){

   float salario,imposto,sindicato;

    printf("\n digite o seu salário:");
    scanf("%f",&salario);

   imposto = 0.08 * salario;
   sindicato = 0.05 * salario;

    printf("\n O seu salário bruto é: R$ %.1f \n",salario);
    printf("\n Você pagou R$ %.1f de imposto \n",imposto);
    printf("\n Você pagou R$ %.1f de sindicato \n", sindicato);
    printf("\n Seu salário líquido é: %.1f \n",salario - (imposto + sindicato));
} 