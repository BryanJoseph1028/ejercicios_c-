// eb25_while01.cpp
// Uso de while
// Este programa ilustra el uso del bucle While
// 2017, Por http://about.me/carlosgbr
// Versi?n 1
// Compilado en https://www.onlinegdb.com/online_c++_compiler

#include <iostream>

main()
{
int num;
cout <<"Este programa solicitar? n?meros hasta que el usuario escriba 0" << endl;
cout << endl;
cout<< "Escribe n?mero enteros, cuando desees terminar, escribe cero" << endl;

//num = 1;

while (num != 0)
{
cin >> num;
cout<<"Escribiste: " << num << endl << "escribe 0 para terminar" << endl;
}

cout<<"Escribiste 0, el ciclo while ha terminado" << endl;

return 0;
}