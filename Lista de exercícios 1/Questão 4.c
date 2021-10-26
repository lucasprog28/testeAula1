#include <stdio.h>

/*Algorítmo que recebe o raio do círculo e calcula a área do mesmo para o usuário*/

int main(){

   float raio,pi = 3.14;
    
    printf("CALCULANDO A ÁREA DO CÍRCULO");

    printf("\n Digite o raio do círculo:");
    scanf("%f",&raio);

    printf("\n A área do círculo é: %.2f \n",pi*(raio * raio));
}