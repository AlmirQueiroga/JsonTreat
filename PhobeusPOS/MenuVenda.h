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

int in = op - '0';     // convers�o para int

if(isdigit(op)){      // apenas passar valores n�mericos, caso contr�rio reiniciar a p�gina

    switch(in){       // if else n�o funcionando por algum motivo, apenas passando os valores 1, 2 e 3.
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
