#include <stdio.h>

/*Algorítmo que calcula o total gasto em um aluguel de um carro*/
/*dado: o aluguel do carro será de R$ 60.00 por dia e R$ 0.15 por km rodado*/

int main(){
    
   float dias,km,aluguel = 60;

   printf("DESCUBRA O TOTAL GASTO NO ALUGUEL DO CARRO");

    printf("\n Informe o total de km pecorridos:");
    scanf("%f",&km);

    printf("\n Informe o total de dias passado com o automóvel:");
    scanf("%f",&dias);

    printf("\n O valor total do aluguel é: R$ %.2f \n", (aluguel*dias) + (0.15 * km));
}