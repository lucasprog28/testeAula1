#include <stdio.h>

/*Algoritmo que calcula o total recebido no mês para o usuário*/

int main(){

  float horas,dinheiro;

    printf("\n Digite o total de horas trabalhadas no mês:");
    scanf("%f",&horas);

    printf("\n Digite a quantidade de dinheiro recebido por hora:");
    scanf("%f",&dinheiro);

    printf("\n O total recebido no mês é: R$ %.2f \n",dinheiro * horas);
}