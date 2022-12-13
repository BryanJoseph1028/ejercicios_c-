#include <stdio.h> 
#include <conio.h> 
#include <iostream.h> 
#include <stdlib.h> 
#include <math.h>

void main ()
{

 	int ed,sem,mes,a,di;

  	cout<<"Ingrese su edad"<<endl;
  	cin>>ed;

 	a=ed;
   mes=ed*12;
   sem=mes*4;
   di=sem*7;

   cout<<"años: "<<a<<endl;
   cout<<"meses: "<<mes<<endl;
   cout<<"semanas: "<<sem<<endl;
   cout<<"dias: "<<di<<endl;

	getch();
}
