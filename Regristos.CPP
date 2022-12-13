#include <stdio.h>
#include <iostream.h>
#include <conio.h>
#include <windows.h>
#include <string.h>
#include <stdlib.h>
struct cliente
{
int id_cliente;
char nit [14];
char nombre [50];
char direccion [50];
};
cliente rcliente;
main()
{//
do{
int ind;
cout<<"ingrese la cantidad de regristos"<<endl;
cin>>ind;
for(int i=0; i<ind; i++)
{
cout<<"Ingrese el ID del cliente"<<endl;
cin>>rcliente.id_cliente;
cout<<"Ingrese Nit"<<endl;
gets(rcliente.nit);
cout<<"Ingrese el nombre"<<endl;
gets(rcliente.nombre);
cout<<"Ingrese Direccion"<<endl;
gets(rcliente.direccion);
clrscr();}
cout<<"desea grabar otro regristro"<<rcliente<<endl;
cin>>rcliente;
}
while(ind==0);
FILE * ejemplo;
ejemplo=fopen("cliente.txt", "w+");
fwrite(&rcliente, sizeof(rcliente), 1, ejemplo);;
fclose(ejemplo);
getch();
return 0;
}
