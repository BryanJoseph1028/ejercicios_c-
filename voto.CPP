#include<stdio.h>
#include<conio.h>
#include<iostream.h>
main()
{//inicio
 int edad;
 cout<<"Ingrese su edad:"<<endl;
 cin>>edad;
 if(edad>18)
 {//inicio del if
  cout<<"tienes derecho a votar"<<edad<<endl;
 }//fin del if
 else
 {//inicio del else
  cout<<"no tienes derecho a votar"<<edad<<endl;
 }//fin del else

 //return 0;
 //getch();
}//fin
