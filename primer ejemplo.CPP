#include<stdio.h>
#include<conio.h>
#include<iostream.h>
#include<stdlib.h>

main()
{//inicio
  int numero1, numero2,operacion;
  cout<<"ingrese el primer numero"<<endl;
  cin>>numero1;
   cout<<"ingrese el segundo numero"<<endl;
  cin>>numero2;
  if(numero1>=numero2)
  {//inicio del if
    operacion=numero1+numero2;
    cout<<"el resultado de la suma es;"<<operacion<<endl;
  }//fin del if
  else
{//inicio del else
  operacion=numero1-numero2;
    cout<<"el resultado de la resta es;"<<operacion<<endl;
}//fin del else
  system("pause");
  //return 0;
  //getch();
}//fin                