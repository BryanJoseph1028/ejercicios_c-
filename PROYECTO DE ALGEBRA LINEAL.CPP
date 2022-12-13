#include<conio.h>
#include<iostream>
#include<stdlib.h>
#include<math.h>
#include<windows.h>

 main(){
  		 float num1,num2,num3,num4,num5,num6,num7,num8,num9,nu1,nu2,nu3,nu4,nu5,nu6,nu7,nu8,nu9;
       int operacion,accion,deter,forma2;
 		 float division1,division2,division3,division4;
		 double a00,a01,a02,a10,a11,a12,a20,a21,a22,total,total2,t;
 while (accion != 0){
 		 cout<<"BIENVENIDO QUE OPERACION DESEAS REALIZAR"<<endl;

 cout<<"PARA ELIGIR UNA OPERACION INGRESA EN NUMERO QUE SE ENCUENTRA A LA PAR DEL INSISO "<<endl;

 cout<<"..........................................#1INVERSA DE UNA MATRIZ CUADRADA"<<endl;
 cout<<"..........................................#2TRANSPUESTA DE UNA MATRIZ"<<endl;
 cout<<"...........................................PROPIEDADES DE LOS DETERMINANTES"<<endl;
 cout<<"..........................................#3 TEOREMA-1 "<<endl;
 cout<<"..........................................#4 TEOREMA-2 "<<endl;
 cout<<"..........................................#5 TEOREMA-3 "<<endl;
 cout<<"..........................................#6 TEOREMA-4 "<<endl;
 cout<<"..........................................#7 TEOREMA-5 "<<endl;
 cout<<"..........................................#8 TEOREMA-6 "<<endl;
 cout<<"..........................................#0 SALIR "<<endl;
 cin>>accion;
    switch(accion){

     case 1:{
     cout<<"Sean A y B dos matrices de 2x2 AB =BA = 1"<<endl<<endl;
     cout<<"Ingrese su matriz "<<endl;
     cout<<"Ingrese el primer numero"<<endl;
     cin>>num1;
     cout<<"Ingrese el segundo numero"<<endl;
     cin>>num2;
     cout<<"Ingrese el tercer numero "<<endl;
     cin>>num3;
     cout<<"Ingrese el cuarto numero"<<endl;
     cin>>num4;

     operacion= (num1*num4)-(num2*num3);
      cout<<"Su determinante es: "<<operacion<<endl<<endl;
     if (operacion != 0){


     division1 = num4/operacion;
     division2 = -1*(num3/operacion);
     division3 = -1*(num2/operacion);
     division4 = num1/operacion;

     cout<<"Su inversa es:"<<endl;
     cout<<""<<division1<<endl;
     cout<<""<<division4<<endl;
     cout<<""<<division2<<endl;
     cout<<""<<division3<<endl;
			}

     else{

       cout<<"Su Operacion no tiene solucion porque la determinante es cero "<<endl<<endl;

     }


     }
     break;
     case 2:{

     }
     break;
     case 3:{

         cout<<"Sean A y B dos matrices de nxn entonces: DET=AB = det A det B"<<endl<<endl;
         cout<<"BIENVENIDO AL TEOREMA #1"<<endl<<endl;
         cout<<"iNGRESE LAS DOS MATRICES"<<endl<<endl;
         cout<<"Ingrese el dato1"<<endl;
         cin>>num1;
         cout<<"Ingrese el dato2"<<endl;
         cin>>num2;
         cout<<"Ingrese el dato3"<<endl;
         cin>>num3;
         cout<<"Ingrese el dato4"<<endl;
         cin>>num4;
         cout<<"Ingrese el dato5"<<endl;
         cin>>num5;
         cout<<"Ingrese el dato6"<<endl;
         cin>>num6;
         cout<<"Ingrese el dato7"<<endl;
         cin>>num7;
         cout<<"Ingrese el dato8"<<endl;
         cin>>num8;
         cout<<"Ingrese el dato9"<<endl;
         cin>>num9;

          operacion = (((num5*num9)-(num8*num6))*num1)+((((num4*num9)-(num7*num6))*num2)*-1)+(((num4*num8)-(num7*num5))*num3);
         cout<<"Su determiante #1 es: "<<operacion<<endl;

         cout<<"Ingrese la Matriz Dos"<<endl<<endl;
         cout<<"Ingrese el dato1"<<endl;
         cin>>nu1;
         cout<<"Ingrese el dato2"<<endl;
         cin>>nu2;
         cout<<"Ingrese el dato3"<<endl;
         cin>>nu3;
         cout<<"Ingrese el dato4"<<endl;
         cin>>nu4;
         cout<<"Ingrese el dato5"<<endl;
         cin>>nu5;
         cout<<"Ingrese el dato6"<<endl;
         cin>>nu6;
         cout<<"Ingrese el dato7"<<endl;
         cin>>nu7;
         cout<<"Ingrese el dato8"<<endl;
         cin>>nu8;
         cout<<"Ingrese el dato9"<<endl;
         cin>>nu9;



         deter = (((nu5*nu9)-(nu8*nu6))*nu1)+((((nu4*nu9)-(nu7*nu6))*nu2)*-1)+(((nu4*nu8)-(nu7*nu5))*nu3);
         cout<<"Su determiante #2 es: "<<deter<<endl;

         operacion = operacion*deter;
         cout<<"Su determinante final es: "<<operacion<<endl;


     }
     break;
     case 4:{
         cout<<"Sean dos matrices de A y B nxn det (a+b) != det (a+b)"<<endl<<endl;
     		cout<<"BIENVENIDO AL TEOREMA #2"<<endl<<endl;
         cout<<"iNGRESE LAS DOS MATRICES"<<endl<<endl;
         cout<<"Ingrese el dato1"<<endl;
         cin>>num1;
         cout<<"Ingrese el dato2"<<endl;
         cin>>num2;
         cout<<"Ingrese el dato3"<<endl;
         cin>>num3;
         cout<<"Ingrese el dato4"<<endl;
         cin>>num4;

          operacion = ((num1*num4)-(num2*num3));
         cout<<"Su determiante #1 es: "<<operacion<<endl;

         cout<<"Ingrese la Matriz Dos"<<endl<<endl;
         cout<<"Ingrese el dato1"<<endl;
         cin>>nu1;
         cout<<"Ingrese el dato2"<<endl;
         cin>>nu2;
         cout<<"Ingrese el dato3"<<endl;
         cin>>nu3;
         cout<<"Ingrese el dato4"<<endl;
         cin>>nu4;

         deter = ((nu1*nu4)-(nu3*nu2));
         cout<<"Su determiante #2 es: "<<deter<<endl;

         operacion = operacion+deter;
         cout<<"Su determinante final es: "<<operacion<<endl;

        // cout<<"De la otra forma el resutado es: "<<endl;
          //forma2 = ((num1*num4)*(num2*num3))+((nu1*nu4)*(nu3*nu2));
         //cout<<" "<<forma2<<endl;


     }
     break;
     case 5:{
         cout<<"Si una matriz tiene dos filas iguales o columnas iguales su valor de determianate sera cero"<<endl<<endl;
      	cout<<"BIENVENIDO AL TEOREMA #3"<<endl<<endl;
         cout<<"iNGRESE LAS DOS MATRICES"<<endl<<endl;
         cout<<"Ingrese el dato1"<<endl;
         cin>>num1;
         cout<<"Ingrese el dato2"<<endl;
         cin>>num2;
         cout<<"Ingrese el dato3"<<endl;
         cin>>num3;
         cout<<"Ingrese el dato4"<<endl;
         cin>>num4;
         cout<<"Ingrese el dato5"<<endl;
         cin>>num5;
         cout<<"Ingrese el dato6"<<endl;
         cin>>num6;
         cout<<"Ingrese el dato7"<<endl;
         cin>>num7;
         cout<<"Ingrese el dato8"<<endl;
         cin>>num8;
         cout<<"Ingrese el dato9"<<endl;
         cin>>num9;

          operacion = (((num5*num9)-(num8*num6))*num1)+((((num4*num9)-(num7*num6))*num2)*-1)+(((num4*num8)-(num7*num5))*num3);
         cout<<"Su determiante #1 es: "<<operacion<<endl;


     }
     break;
     case 6:{
      cout<<"Si todos los elementos de una fila o columna son iguales a cero los determinantes son cero"<<endl<<endl;
      cout<<"BIENVENIDO AL TEOREMA #4"<<endl<<endl;
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

 		total=a00*a11*a22 + a10*a21*a02 +a20*a01*a12;
 		total=total+(a02*a11*a20) + (a12*a21*a00) + (a22*a01*a10);
    	cout<<"Determinante 3x3 es: "<<total;
    	cin>>total;

     }
     break;
     case 7:{
      cout<<"Una Matriz y su transpuesta. Si se intercambian filas por columnas el valo del determiante no se modifica"<<endl<<endl;
      cout<<"BIENVENIDO AL TEOREMA #5"<<endl<<endl;
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
     break;
     case 8:{
     		cout<<"Si se cambian dos filas o columnas el determinante se convierte en su opuesto"<<endl<<endl;
         cout<<"BIENVENIDO AL TEOREMA #6"<<endl<<endl;
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
    		getch();
    		return 0;
        	system("pause");
    		cout<<"gracias "<<endl;
         cin>>t;

     }
     break;
     case 0:{
      cout<<"Gracias vuelva pronto "<<endl;
     }
     break;
   }
  }
  getch();
  return 0;
 }

 
