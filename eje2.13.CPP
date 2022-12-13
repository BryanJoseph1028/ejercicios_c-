#include <stdio.h> 
#include <conio.h>
#include <iostream.h>
#include <stdlib.h> 
#include <math.h> 
 
void main () 
{

 	int sueldo,ahorro,total;

  	cout<<"Ingrese su sueldo"<<endl;
  	cin>>sueldo;

 	ahorro=(sueldo*0.15)*4;
   total=ahorro*(12*4);

   cout<<"Ahorra al mes un total: "<<ahorro<<endl;

   cout<<"Al año ahorra: "<<total<<endl;

	getch();
}