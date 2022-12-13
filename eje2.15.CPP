#include <stdio.h>
#include <conio.h>
#include <iostream.h>
#include <stdlib.h>
#include <math.h>

void main ()
{

 	int cor,vol,pot;

  	cout<<"Ingrese el valor de corriente en amperios"<<endl;
  	cin>>cor;

 	vol=cor*4;
   pot=cor*vol;

   cout<<"la potencia es: "<<pot<<endl;

	getch();
}