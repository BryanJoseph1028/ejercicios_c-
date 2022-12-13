#include <stdio.h>
#include <conio.h>
#include <iostream.h>
#include <math.h>

void main ()
{
 
 	int kw,kwc,total;
 
  	cout<<"Ingrese el precio que se cobra por kilowatt consumido"<<endl;
  	cin>>kw;
 
  	cout<<"Ingrese la cantidad de kilowatts consmidos"<<endl;
  	cin>>kwc;
 
 	total=kw*kwc;
 
   cout<<"Debe un total de: "<<total<<endl;
 
	getch();
}