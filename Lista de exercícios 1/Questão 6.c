#include <stdio.h>

/*Algorítmo que mostra o percentual de votos brancos, nulos e válidos  de uma eleição*/

int main(){
 
   int branco,nulos,validos;

    printf("\n Informe o total de votos em branco:");
    scanf("%d",&branco);

    printf("\n Informe o total de votos nulos:");
    scanf("%d",&nulos);

    printf("\n Informe o total de votos válidos:");
    scanf("%d",&validos);

    float total = a + b + c;

    printf("\n O TOTAL DE ELEITORES FORAM: %.1f \n",total);

    printf("\n O percentual de votos branco é: %.1f%% \n",(100 * branco)/total);

    printf("\n O percentual de votos nulos é: %.1f%% \n",(100 * nulos)/total);

    printf("\n O percentual de votos válidos é: %.1f%% \n",(100 * validos)/total);
}