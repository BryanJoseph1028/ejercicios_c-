#include<stdio.h>
#include<conio.h>
#include<iostream.h>
#include<windows.h>
main()
{
  int Aactual, Anacimiento;
  cout<<"ingrese el año acual"<<endl;
  cin>>Aactual;
  cout<<"Ingrese el año nacimiento de la persona"<<endl;
  cin>>Anacimiento;
  if(Anacimiento>2000);
  {
   cout<<"usted es generacion milenia"<<endl<<Anacimiento;
  }
  else
  {
   cout<<"usted no tiene generacion"<<endl;
  }
  system("pause");
}
getch();
