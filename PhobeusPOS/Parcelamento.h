#include "keyboard.h"
#include "CapturaCartao.h"


void Parcelamento(int valor){

system("cls");

char num[80];

printf("<ROTULO DO PRODUTO>\n");

printf("PARCELAS:\n");

fgets(num, 80, stdin);

                               //////////////////////////// PERMITINDO A ENTRADA DE CARACTERES NÃO NUMERICOS, CONSERTAR DEPOIS
if(num[0] == '\n'){
    Parcelamento(valor);
}
if(atoi(num) <= 1){
    system("cls");
   printf("ERRO - NUMERO INCORRETO DE PARCELAS");
    pause(5.0); // DELAY DE 5 SEGUNDOS
    Parcelamento(valor);
   }
   if(atoi(num)> 1){
    CapturaCartao(2, atoi(num), valor);
}



}
