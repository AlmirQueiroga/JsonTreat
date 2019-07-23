#include "keyboard.h"
#include "ValueCap.h"
#include <ctype.h>

void MenuVenda(){

char op;

system("cls");

printf("ESCOLHA A VENDA\n");

printf("1 - CREDITO A VISTA\n");
printf("2 - CREDITO PARCELADO\n");
printf("3 - DEBITO\n");

scanf("%c", &op);

int in = op - '0';     // conversão para int

if(isdigit(op)){      // apenas passar valores númericos, caso contrário reiniciar a página

    switch(in){       // if else não funcionando por algum motivo, apenas passando os valores 1, 2 e 3.
        case 1:
        ValueCap(in);
        break;
        case 2:
        ValueCap(in);
        break;
        case 3:
        ValueCap(in);
        break;
        default:
        MenuVenda();
        break;

    }

}else{MenuVenda();}


}
