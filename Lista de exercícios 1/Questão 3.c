#include <stdio.h>

/*Algorítmo que converte de metros para centímetros*/

int main(){
    
   float metro, centimetro = 100;

    printf("\n Converta de metros para centímetros \n");

    printf("\n Digite o valor desejado em metro:");
    scanf("%f",&metro);

    printf("\n O valor digitado convertido em centímetro é: %.1f cm \n",metro * centimetro);

}