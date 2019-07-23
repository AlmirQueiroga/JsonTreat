#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <dirent.h>
#include <conio.h>

void ImpressaoVenda(char cart[80], int valor){

/*int cartao = atoi(cart);
for(int i = 0; i < 12; i++){
    printf("\t %c", cart[i]);
}*/

time_t t = time(NULL);
struct tm tm = *localtime(&t);
FILE *fp;

fp = fopen ( "ImpressaoDeVenda.txt", "w" );


fprintf(fp, " DATA: %d-%d-%d \n%s VALOR APROVADO R$ %c ", tm.tm_year + 1900, tm.tm_mon + 1, tm.tm_mday, cart, valor);

fclose(fp);

historico(cart, valor);

}

void historico(char cart[80], int valor){

/*int cartao = atoi(cart);
for(int i = 0; i < 12; i++){
    printf("\t %c", cart[i]);
}*/

time_t t = time(NULL);
struct tm tm = *localtime(&t);
FILE *fp;

fp = fopen ( "historico.txt", "a" );


fprintf(fp, " DATA: %d-%d-%d \n%s VALOR APROVADO R$ %c ", tm.tm_year + 1900, tm.tm_mon + 1, tm.tm_mday, cart, valor);

fclose(fp);

}


