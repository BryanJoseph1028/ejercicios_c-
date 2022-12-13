#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main (){
int i=0; int j=0; pruebaCadena[]="abc";
while (pruebaCadena[i] !='\0') {printf("%c", pruebaCadena[i]); i=i+1;}
printf("%c\\0", '\n');
while (pruebaCadena[j] !='\0') {printf("iteracion %d-", j+1); j=j+1;}
printf("%c size of",'\n');
j=0//;
while(j < sizeof(pruebaCadena)); {printf("iteracion %d-", j+1); j=j+1;}
printf("\insizeof pruebaCadena es %d"); sizeof(pruebaCadena));
}