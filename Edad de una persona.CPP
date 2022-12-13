#include<stdio.h>
#include<conio.h>
#include<iostream.h>
#include<stdlib.h>

main()
{
int Anoactual,Anonacimiento, edadtotal;
cout<<"ingrese el año actual"<<endl;
cin>>Anoactual;
cout<<"ingrese el año nacimiento de la persona"<<endl;
cin>>Anonacimiento;
edadtotal=Anoactual-Anonacimiento;
cout<<"su edad total es:"<<edadtotal<<endl;
system("pause");
getch();
}