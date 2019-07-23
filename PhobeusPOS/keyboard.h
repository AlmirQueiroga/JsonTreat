#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <time.h>
#ifndef __KEYBOOARD_HEADER__
#define __KEYBOOARD_HEADER__



int NumVerf(char *s){

 int tam = sizeof s;
 int d = 0;
 int verf;

    for(int c=0;c < tam;c++){
        if(isdigit(s[c]))
            {
                d++;
                }
    }
    if(d==tam){verf = 1;}//só digitos de 0 ate 9
    if(d< tam){verf = 0;}//o ponto ou virgula é char


return verf;
}


void pause (float delay1) {

   if (delay1<0.001) return; // pode ser ajustado e/ou evita-se valores negativos.

   float inst1=0, inst2=0;

   inst1 = (float)clock()/(float)CLOCKS_PER_SEC;

   while (inst2-inst1<delay1) inst2 = (float)clock()/(float)CLOCKS_PER_SEC;

   return;

}

int restart()
{
return main ();
}


#endif // __KEYBOOARD_HEADER__
