#include <stdio.h> 
#include <conio.h>
#include <iostream.h>
#include <stdlib.h>
#include <math.h>

void main ()
{

 	int habi,dias,total;
 
  	cout<<"Ingrese el costo de la habitacion"<<endl;
  	cin>>habi;

  	cout<<"Ingrese los dias que estuvo"<<endl;
  	cin>>dias;
 
 	total=dias*habi;
 
   cout<<"Debe un total de: "<<total<<endl;
 
	getch(); 
}