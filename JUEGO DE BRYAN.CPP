#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <windows.h>

#define NUMERO_ANIMALES 30
 //JUEGO FRL AHORCADO//
 //BRYAN jOSEPH CHACAJ CORADO (CARNET 1290-19-5032)//
main(){
	/*Declaramos los animales a acertar*/
	char *animales[NUMERO_ANIMALES] =
	{"perro","gato","raton","tortuga","lechuza","mono","leon","tigre","loro","murcielago",
	"mariquita","halcon","rata","rana","jirafa","delfin","ballena","foca","serpiente","ciervo",
	"escarabajo","mariposa","gusano","toro","cebra","aguila","avestruz","vaca","oveja","cabra",};

	char *ahorcado0[7]={
"    +----+    ",
"    |    |    ",
"    *    |    ",
"   /|/   |    ",
"   / /   |    ",
"         |    ",
"  ============",};

char *ahorcado1[7]={
"    +----+    ",
"    |    |    ",
"    *    |    ",
"   /|/   |    ",
"   /     |    ",
"         |    ",
"  ============",};

char *ahorcado2[7]={
"    +----+    ",
"    |    |    ",
"    *    |    ",
"   /|/   |    ",
"         |    ",
"         |    ",
"  ============",};

char *ahorcado3[7]={
"    +----+    ",
"    |    |    ",
"    *    |    ",
"   /|    |    ",
"         |    ",
"         |    ",
"  ============",};

char *ahorcado4[7]={
"    +----+    ",
"    |    |    ",
"    *    |    ",
"    |    |    ",
"         |    ",
"         |    ",
"  ============",};

char *ahorcado5[7]={
"    +----+    ",
"    |    |    ",
"    *    |    ",
"         |    ",
"         |    ",
"         |    ",
"  ============",};

char *ahorcado6[7]={
"    +----+    ",
"    |    |    ",
"         |    ",
"         |    ",
"         |    ",
"         |    ",
"  ============",};



	char caracter_adecuado[50]="abcdefghijklmnopqrstuvwxyz";
	char palabra_dinamica[50];
	char palabra_oculta[50];
	char caracter_introducido[50];
	char respuesta[3];

	bool continuar=true;
	bool primera_partida=true;
	bool caracter_correcto=false;
	bool size_adecuado=false;
	bool fin_for_comprobar_caracteres=false;
	bool acierto=false;
	bool respuesta_juego=false;
	bool fin=true;

	int numero;
	int numero_caracteres;
	int i;
	int fallos;

	printf("Vamos a jugar al ahorcado con animales y siempre introduciendo letras en minusculas!\n");
	printf("La palabra que debe adivinar es...\n");

	while(continuar==true){
		fallos=0;
		respuesta_juego=false;
		numero = (rand() % NUMERO_ANIMALES); 
		strcpy(palabra_oculta,animales[numero]);
		numero_caracteres=strlen(palabra_oculta);


		if(primera_partida==false){
			printf("¡Juguemos de nuevo! -> La palabra que debe adivinar es...  \n");
		}

		for(i=0;i<numero_caracteres;i++){
			palabra_dinamica[i]='-';
		}
		palabra_dinamica[i]='\0';
		printf("%s\n",palabra_dinamica);

		while(caracter_correcto==false){
			fin=true;
			switch(fallos){
						case 0:
							for(i=0;i<7;i++){
								printf("%s\n",ahorcado6[i]);
							}
							break;
						case 1:
							for(i=0;i<7;i++){
								printf("%s\n",ahorcado5[i]);
							}
							break;
						case 2:
							for(i=0;i<7;i++){
								printf("%s\n",ahorcado4[i]);
							}
							break;
						case 3:
							for(i=0;i<7;i++){
								printf("%s\n",ahorcado3[i]);
							}
							break;
						case 4:
							for(i=0;i<7;i++){
								printf("%s\n",ahorcado2[i]);
							}
							break;
						case 5:
							for(i=0;i<7;i++){
								printf("%s\n",ahorcado1[i]);
							}
							break;
						}
			printf("Introduzca una unica letra en minusculas: \n");
			gets(caracter_introducido);
			if(strlen(caracter_introducido)==1){
				for(i=0;i<strlen(caracter_adecuado) && fin_for_comprobar_caracteres==false;i++){
					if(caracter_introducido[0]==caracter_adecuado[i]){
						caracter_correcto=true;
						fin_for_comprobar_caracteres=true;
						printf("El caracter introducido tiene sentido...\n");
					}
				}
			}
			else{
				printf("El texto introducido no tiene sentido porque hay mas de un caracter!\n");
				caracter_correcto=false;
			}
 
			if(caracter_correcto==true){
				caracter_correcto=false;
				fin_for_comprobar_caracteres=false;
				for(i=0;i<numero_caracteres;i++){
					if(caracter_introducido[0]==palabra_oculta[i]){
						acierto=true;
						palabra_dinamica[i]=palabra_oculta[i];
					}
				}
				if(acierto==true){
					printf("Ha acertado!\n");
					printf("La palabra que debe adivinar es:%s  \n",palabra_dinamica);
					acierto=false;
				}
				else{
					printf("No has acertado...\n");
					fallos++;
 
					if (fallos<6){
						printf("Sigue jugando pero el numero de fallos es ahora: %d\n",fallos);
						printf("La palabra que debe adivinar es:%s  \n",palabra_dinamica);
					}
					if(fallos==6){
						for(i=0;i<7;i++){
								printf("%s\n",ahorcado0[i]);
							}
						printf("Ya no hay mas intentos, lo sentimos...\n");
 
					}
				}
			}
 
			else if(caracter_correcto==false && strlen(caracter_introducido)==1){
				printf("El texto introducido no tiene sentido porque no es una letra minuscula!\n");
			}
 
 
			if(fallos<6){
				for(i=0;i<numero_caracteres;i++){
					if(palabra_dinamica[i]=='-'){
						fin=false;
					}
				}
			}
 
 
			if(fin==true){
				caracter_correcto=true;
			}
		}
 
		if(fallos<3) printf("Has ganado campeon!\n");
 
		while(respuesta_juego==false){
			printf("Te gustaria jugar de nuevo? Responde: SI o NO - > ");
			gets(respuesta);
			if(!strcmp(respuesta,"NO")){
				printf("FIN DEL JUEGO, ESPERAMOS VOLVER A VERTE");
				continuar=false;
				respuesta_juego=true;
			}
			else if(!strcmp(respuesta,"SI")){
				printf("La nueva palabra que debe adivinar es...\n");
				respuesta_juego=true;
				strcpy(palabra_dinamica,"\0");
				strcpy(palabra_oculta,"\0");
				printf("Palabra dinamica es: %s\n",palabra_dinamica);
				fin=true;
				caracter_correcto=false;
			}
			else{
				printf("Te pasaste de gracioso con tu respuesta...\n");
			}
		}
	}
}