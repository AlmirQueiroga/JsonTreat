#include "keyboard.h"
#include "Parcelamento.h"
#include "CapturaCartao.h"
#define vMin 20        //////// CONFIGURAR JSON
#define vMax 80
// definir pelo valor máximo do produto /4

void ValueCap(int op){

char valor[80];

system("cls");


printf("<ROTULO DO PRODUTO>\n"); //IMPLEMENTAR JSON
printf("VALOR (R$):\t");

fgets(valor, 80, stdin);

                               //////////////////////////// PERMITINDO A ENTRADA DE CARACTERES NÃO NUMERICOS, CONSERTAR DEPOIS
if(valor[0] == '\n'){
    ValueCap(op);
}
else if(atoi(valor) > vMax){
    system("cls");
    printf("ERRO - VALOR MAIOR QUE O VALOR MAXIMO DE %d", vMax);
    pause(5.0); // DELAY DE 5 SEGUNDOS
    ValueCap(op);
}
else if(atoi(valor) < vMin){
    system("cls");
    printf("ERRO - VALOR MENOR QUE O VALOR MINIMO DE %d", vMin);
    pause(5.0);
    ValueCap(op);
}
else if((atoi(valor) > vMin) && (atoi(valor) < vMax)){   // valor entre os limites permitidos
    //printf("ate aqui tudo ok");

    switch(op){
    case 1:
    CapturaCartao(op, 1, atoi(valor));
    break;
    case 2:
    Parcelamento(atoi(valor));
    break;
    case 3:
    CapturaCartao(op, 1, atoi(valor));
    break;
    default:
    ValueCap(op);
    }
}


}
