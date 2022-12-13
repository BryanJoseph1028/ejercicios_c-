#include<stdio.h>
#include<conio.h>
#include<iostream.h>
#include<windows.h>
#include<math.h>
main()
{
 int num1, num2, num3, suma, resta, hipotenusa, perimetro, operador;
 cout<<"Ingrese el tipo de operador"<<endl;
 cin>>operador;
 switch(operador)
 {
  case 1:
  {
  cout<<"suma de 2 numeros"<<endl;
  suma=num1+num2;
  cout<<"su suma es"<<suma<<endl;
 }
 break;

 case 2:
 {
  cout<<"Resta de 2 numeros"<<endl;
  resta=num1-num2;
  cout<<"su resta es"<<resta<<endl;
 }
 break;

 case 3:
 {
  cout<<"Hipotenusa"<<endl;
  hipotenusa=num1*num1+num2*num2;
   cout<<"su hipotenusa es"<<hipotenusa<<endl;
 }
 break;

 case 4:
 {
  cout<<"perimetro"<<endl;
  perimetro=num1+num2+num3;
  cout<<"su perimetro es"<<perimetro<<endl;
 }
 break;

 default:
 {
 cout<<"no existe";
 }
 break;
 }

 getch();
 }
