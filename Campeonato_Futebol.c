/*Exercicio

Em um campeonato de futebol existem cinco times e cada time possui 11 jogadores. Faça um programa que receba a idade,
o peso e altura de cada um dos jogadores calcule e mostre :

a) A quantidade de jogadores com idade inferior a 18 anos;

b) A média das idades dos jogadores de cada time;

c) A média das alturas de todos os jogadores do campeonato;

d) A percentagem de jogadores com mais de 80 quilos entre todos os jogadores do campeonato;
*/


#include <stdio.h>
#include <stdlib.h>

main(){

int i,j,age,menor18=0,maior80=0,idades,mediaIda;
float peso,alt,alturas=0,mediaAlt,porc80;

for(i=0;i<5;i++){
        idades=0;
    for(j=0;j<11;j++){
        printf("\n Idade do jogador %d: ",j+1);
        scanf("%d",&age);

        printf(" Peso do jogador %d: ",j+1);
        scanf("%f",&peso);

        printf(" Altura do jogador %d: ",j+1);
        scanf("%f",&alt);

        if(age<18){
            menor18+=1;
        }
        if(peso>80){
            maior80+=1;
        }

        idades+=age;
        alturas+=alt;

    }
    mediaIda=idades/11;
    printf("\n A media de idade do time %d ==> %d \n",i+1,mediaIda);
}
mediaAlt=alturas/55;
porc80=(maior80*100)/55;

printf("\n Quantidade de jogadores com idade inferior a 18 anos ==> %d",menor18);
printf("\n A media de altura dos jogadores ==> %.2f",mediaAlt);
printf("\n Porcentagem dos jogadores com mais de 80KG no campeonato ==> %.2f \n",porc80);

}
