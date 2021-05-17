#include <stdio.h>
#include <stdlib.h>

char produto[4][15],loja[5][15];
float mtz[5][4];
int i,j;

addProduto(){
    printf("\n\n");
    printf("----ADICIONANDO PRODUTOS-----\n");
    for(i=0;i<4;i++){
        printf("Produto %d: ",i+1);
        scanf("%s",&produto[i]);
    }
}

addLoja(){
    printf("\n\n");
    printf("----ADICIONANDO LOJAS-----\n");
    for(i=0;i<5;i++){
        printf("Nome da LOJA: ");
        scanf("%s",&loja[i]);
    }
}

addValor(){
    printf("\n\n");
    printf("----VALORES DOS PRODUTOS-----\n");
    for(i=0;i<4;i++){
        printf("\n");
        for(j=0;j<5;j++){
            printf("LOJA => %s: ",loja[j]);
            scanf("%f",&mtz[j][i]);
        }
    }
}

exibirTBL(){
    int n,m,l=0;
    printf("\n\n");

    if(mtz[n][m]>700){

    }
    else{

        for(i=0;i<4;i++){
        printf("\t\t%s",produto[i]);
        }
        printf("\n");

        for(i=0;i<5;i++){
                printf("\n");
            for(j=0;j<4;j++){
                if(j==0){
                    printf("%-10s",loja[l]);
                    l++;
                }
                printf("\t%-5.2f\t",mtz[i][j]);
            }
        }
    }
    printf("\n\n");
    system("pause");
}


main(){
int op;
do
    {
        system("cls");
        printf("\n----------------MENU------------------");
        printf("\n [1] - Adicionar Produto...");
        printf("\n [2] - Adicionar Lojas...");
        printf("\n [3] - Adicionar precos das Lojas...");
        printf("\n [4] - Exibir tabela de precos...");
        printf("\n [5] - Saindo do Sistema...");

        printf("\n Escolha a Opcao: ");
        scanf("%d",&op);

        switch(op)
        {
        case 1:
            addProduto();
            break;
        case 2:
            addLoja();
            break;
        case 3:
            addValor();
            break;
        case 4:
            exibirTBL();
            break;

        default :
            printf("\n Opcao Invalida... tente novamente\n");
            system("pause");
        }
    }
    while(op != 5);
}
