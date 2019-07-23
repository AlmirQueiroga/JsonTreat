#include "keyboard.h"
#include "40x40Printer.h"
#include "MenuVenda.h"
#include <conio.h>
#include "MenuEstorno.h"

void TelaPrincipal(){

    time_t t = time(NULL);
    struct tm tm = *localtime(&t);
    char op[20];


printf("INDETIFICACAO LOGICA NO TERMINAL\t\t"); // IMPLEMENTAR VARIAVEL UNIVERSAL COM JSON
printf("Data: %d-%d-%d %d:%d:%d\n", tm.tm_year + 1900, tm.tm_mon + 1, tm.tm_mday, tm.tm_hour, tm.tm_min, tm.tm_sec);// pega data computador
printf("<RAZAO SOCIAL>\n"); //IMPLEMENTAR JSON
printf("Tecle ENTER para vender\n");
printf("1 - ESTORNO\t\t\t\t\t");
printf("2 - RELAT");
printf("\n");

fgets(op, sizeof op, stdin); // utilizando fgets para leitura de string vazia


if(op[0] == '\n'){
    MenuVenda(); // redirecionar para menu de venda
}
else if(op[0] == '1'){
   Estorno();
}
else if(op[0] == '2'){
    system ("historico.txt");
}
else if(op[0] != '1' || '2' || '\n'){
    TelaPrincipal(); // retorno default para valores não válidos
}




}
