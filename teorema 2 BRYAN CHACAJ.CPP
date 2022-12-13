#include <iostream.h>
#include <conio.h>
#include <stdlib.h>
#include <stdio.h>
//TEOREMA 5 PROPIEDADES DE LOS DETERMINANTES//
//BRYAN JOSEPH CHACAJ CORADO (CARNET 1290-19-5032)//
//Transpuesta de una matriz//
main(){
double a00,a01,a02,a10,a11,a12,a20,a21,a22,total;
cout<<"Ingrese los valores:"<<endl;
cout<<"|a00 a01 a02|" <<endl;
cout<<"|a10 a11 a12|" <<endl;
cout<<"|a20 a21 a22|" <<endl;
cout<<"----------------------"<<endl;
cout<<"|a00 a10 a20|" <<endl;
cout<<"|a01 a11 a21|" <<endl;
cout<<"|a02 a12 a22|" <<endl;
cout<<"a00: ";
cin>>a00;
cout<<"a10: ";
cin>>a10;
cout<<"a20: ";
cin>>a20;
cout<<"a01: ";
cin>>a01;
cout<<"a11 ";
cin>>a11;
cout<<"a21: ";
cin>>a21;
cout<<"a02: ";
cin>>a02;
cout<<"a12: ";
cin>>a12;
cout<<"a22: ";
cin>>a22;

 total=a00*a11*a22 + a10*a21*a02 + a20*a01*a12;
 total=total+(a02*a11*a20) + (a12*a21*a00) + (a22*a01*a10);
    cout<<"Determinante 3x3 es: "<<total;
    cin>>total;
    return 0;
}