#include <iostream.h>
#include <conio.h>
#include <stdlib.h>
#include <stdio.h>
//TEOREMA 4 PROPIEDADES DE LOS DETERMINANTES//
//BRYAN JOSEPH CHACAJ CORADO (CARNET 1290-19-5032)//
//|0 0 0|//
//|n n n|//
//|n n n|//
main(){
double a00,a01,a02,a10,a11,a12,a20,a21,a22,total,total2, t;
cout<<"Ingrese los valores:"<<endl;
cout<<"|a00 a01 a02|" <<endl;
cout<<"|a10 a11 a12|" <<endl;
cout<<"|a20 a21 a22|" <<endl;
cout<<"a00: ";
cin>>a00;
cout<<"a01: ";
cin>>a01;
cout<<"a02: ";
cin>>a02;
cout<<"a10: ";
cin>>a10;
cout<<"a11: ";
cin>>a11;
cout<<"a12: ";
cin>>a12;
cout<<"a20: ";
cin>>a20;
cout<<"a21: ";
cin>>a21;
cout<<"a22: ";
cin>>a22;
cout<<"------------------------------------------------"<<endl;
cout<<"Ingrese los valores:"<<endl;
cout<<"|a10 a11 a12|" <<endl;
cout<<"|a00 a01 a02|" <<endl;
cout<<"|a20 a21 a22|" <<endl;
 total=a00*a11*a22 + a01*a12*a00 + a02*a10*a21;
 total=total+(a20*a11*a02) + (a21*a12*a00) + (a22*a10*a01);
    cout<<"Determinante 3x3: "<<total;
    cin>>total;
    total2=a10*a01*a22 + a11*a02*a20 + a12*a00*a21;
 total2=total2+(a20*a01*a12) + (a21*a02*a10) + (a22*a00*a11);
    cout<<"Determinante 3x3: "<<total2;
    cin>>total2;
    return 0;
    system("pause");
    cout<<"gracias "<<endl;
    cin>>t;
}