#include<stdio.h>
#include<conio.h>
#include<iostream.h>
#include<stdlib.h>

main()
{
int Anoactual,Anonacimiento, edadtotal;
cout<<"ingrese el a?o actual"<<endl;
cin>>Anoactual;
cout<<"ingrese el a?o nacimiento de la persona"<<endl;
cin>>Anonacimiento;
edadtotal=Anoactual-Anonacimiento;
cout<<"su edad total es:"<<edadtotal<<endl;
system("pause");
getch();
}