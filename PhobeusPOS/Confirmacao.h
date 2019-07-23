#ifndef __CONFIRMACAO_HEADER__
#define __CONFIRMACAO_HEADER__

void Confirmacao(int cod, int op, int parc, char cart[80], int valor){

char resp;
int i = 0;
system("cls");

if(cod == 1){   // cod = 1 significa venda, cod = 2 significa estorno
printf("<ROTULO DO PRODUTO>\n\n");
printf("Confirmar venda?\n\n");
    while(cart[i] != '\0'){
        printf("%c", cart[i]);
        i++;
    }

printf("\n");
printf("(R$) %d\t", valor);
printf("em %d parcela(s)\n", parc);
printf("1.NAO\t\t\t\t\t\t");
printf("2.SIM\n");

scanf("%c", &resp);

int in = resp - '0';     // conversão para int

if(isdigit(resp)){      // apenas passar valores númericos, caso contrário reiniciar a página

    switch(in){       // if else não funcionando por algum motivo, apenas passando os valores 1, 2 e 3.
        case 1:
        system("cls");
        printf("OPERACAO CANCELADA");
        pause(3.0);
        restart();
        break;
        case 2:
        system("cls");
        printf("VENDA CONFIRMADA\n");
        printf("REALIZANDO IMPRESSAO");
        ImpressaoVenda(cart, valor);
        pause(3.0);
        restart();
        break;
        default:
        Confirmacao(cod, op, parc, cart, valor);
        break;

    }

}else{Confirmacao(cod, op, parc, cart, valor);}

}

if(cod == 2){   // cod = 1 significa venda, cod = 2 significa estorno
printf("<ROTULO DO PRODUTO>\n\n");
printf("Confirmar estorno?\n\n");
    while(cart[i] != '\0'){
        printf("%c", cart[i]);
        i++;
    }

printf("\n");
printf("(R$) %d\t", valor);
printf("em %d parcela(s)\n", parc);
printf("1.NAO\t\t\t\t\t\t");
printf("2.SIM\n");

scanf("%c", &resp);

int in = resp - '0';     // conversão para int

if(isdigit(resp)){      // apenas passar valores númericos, caso contrário reiniciar a página

    switch(in){       // if else não funcionando por algum motivo, apenas passando os valores 1, 2 e 3.
        case 1:
        system("cls");
        printf("OPERACAO CANCELADA");
        pause(3.0);
        restart();
        break;
        case 2:
        system("cls");
        printf("VENDA CONFIRMADA\n");
        printf("REALIZANDO IMPRESSAO");
        ImpressaoVenda(cart, valor);
        pause(3.0);
        restart();
        break;
        default:
        Confirmacao(cod, op, parc, cart, valor);
        break;

    }

}else{Confirmacao(cod, op, parc, cart, valor);}

}


}




#endif // __CONFIRMACAO_HEADER__
