/*Exercicio
Faça um programa que receba o valor de uma dívida e conforme a tabela abaixo calcule os seguintes dados :
Valor da Dívida, Valor dos Juros, Quantidade de Parcelas e Valor da Parcela*/



#include <stdio.h>
#include <stdlib.h>

main(){

int parcela;
float divida,valorParcela,juros;

printf("\n Valor da divida: ");
scanf("%f",&divida);

printf("\n Quantas parcelas: ");
scanf("%d",&parcela);

if(parcela==1){
    juros=0;
}
else if(parcela==3){
    juros=divida*0.1;
}
else if(parcela==6){
    juros=divida*0.15;
}
else if(parcela==9){
    juros=divida*0.2;
}
else if(parcela==12){
    juros=divida*0.25;
}

valorParcela=(juros+divida)/parcela;

printf("\n Numero de parcelas a pagar ==> %d",parcela);
printf("\n Valor de cada Parcela == > %.2f",valorParcela);
printf("\n Valor do juros ==> %.2f \n",juros);

}
