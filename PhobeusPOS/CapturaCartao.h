#include "keyboard.h"
#include "Confirmacao.h"
#ifndef __CAPTURACARTAO_HEADER__
#define __CAPTURACARTAO_HEADER__



void CapturaCartao(int op, int parc, int valor){

system("cls");

char cartao[80];
 int counter = 0;

printf("<ROTULO DO PRODUTO>\n"); //

printf("CARTAO\n");

fgets(cartao, 80, stdin);

	for(int i=0;i< sizeof cartao;i++){
		if(cartao[i] != '\0')   // Necessário fazer counter -1 pois ele conta \0 como caractere tb
			counter++;
		else
			break;
	}
   //printf("%d", counter - 1);

   counter = counter -1;

                               //////////////////////////// PERMITINDO A ENTRADA DE CARACTERES NÃO NUMERICOS, CONSERTAR DEPOIS
if(cartao[0] == '\n'){
    CapturaCartao(op, parc, valor);
}
if((counter >= 11) && (counter <= 19)){

    printf("CONFIRMAR VENDA");

    Confirmacao(1, op, parc, cartao, valor); // cod = 1 significa venda, cod = 2 significa estorno
}else{
    system("cls");
   printf("ERRO - CARTAO INVALIDO");
    pause(5.0); // DELAY DE 5 SEGUNDOS
    CapturaCartao(op, parc, valor);
   }



}


#endif // __CAPTURACARTAO_HEADER__
