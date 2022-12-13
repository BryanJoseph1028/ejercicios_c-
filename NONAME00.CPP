#include<stdio.h>
#include<conio.h>
#include<iostream.h>
#include<windows.h>
main()
{
 int dia;
 cout<<"ingrese el dia de la semana"<<endl;
 cin>>dia;
 switch(dia)
 {//inicio del switch
 case 1:
 {
 cout<<"dia domingo"<<endl;
 }
 break;

  case 2:
 {
 cout<<"dia lunes"<<endl;
 }
 break;

  case 3:
 {
 cout<<"dia martes"<<endl;
 }
 break;

  case 4:
 {
 cout<<"dia miercoles"<<endl;
 }
 break;

  case 5:
 {
 cout<<"dia jueves"<<endl;
 }
 break;

  case 6:
 {
 cout<<"dia viernes"<<endl;
 }
 break;

  case 7:
 {
 cout<<"dia sabado"<<endl;
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
