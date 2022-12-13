include <stdio.h>
#include <string.h>
#include <conio.h>
#include <iostream.h>
typedef struct peero{
char nombre_ani[20];
int edad;
}peero;
typedef struct humano{
char propietario[13];
char direccion[23];
}wuik;

main()
{
peero j;
wuik k;
cout<<"ingrese su nombre"<<endl;
cin>>k.propietario;
cout<<"ingrese su direccion"<<endl;
cin>>k.direccion;
cout<<"ingrese nombre de su perro"<<endl;
cin>>j.nombre_ani;
cout<<"ingrese su edad del perro"<<endl;
cin>>j.edad;
cout<<"su nombre del animal es" <<k.propietario <<"y vive en" <<k.direccion;
 cout<<"su perro se llama"<<j.nombre_ani<<"y tiene "<<j.edad<<endl;
 getch();
 return 0;
}