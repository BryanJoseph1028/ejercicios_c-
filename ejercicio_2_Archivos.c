#include <stdlib.h>
#include <fstream>
using namespace std;
 
 
 const char *nombre_archivo = "calculo_base.txt";
 void ingresar_nombre();
 void ingresar_apellidos();
 void ingresar_profesion();
 void ingresar_sueldos();
 void ingresar_sueldoBoni();
 
int main(){
	ingresar_nombre();
	ingresar_apellidos();
	ingresar_profesion();
	ingresar_sueldos();
	ingresar_sueldoBoni();
	return 0;	
}

void abrir_archivo(){
	ifstream archivo;
	string contenido;
	archivo.open(nombre_archivo,ios::in);

	
	if (archivo.fail() ) {
	cout<<"No se pudo abrir el archivo";
	exit(1);
	}else{
	cout<<endl;
		do{
			getline(archivo,contenido);
			cout<<contenido<<endl;
		} while(archivo.eof()==false);
	}
	
	archivo.close();

}
void ingresar_nombre(){
	ofstream archivo;
	char continuar;
	archivo.open(nombre_archivo,ios::app);

	
	if (archivo.fail()){
		cout<<"No es posible abrir el archivo";
		exit(1);
	}
	else{
		string nombre;
		string apellidos;
		string profesion;
		string sueldos;
		string sueldoBoni;

		do{
		fflush(stdin);
		cout<<"Ingrese el Nombre del empleado:";
		getline(cin,nombre);
		archivo<<nombre<<endl;
		cout<<"Ingrese los apellidos del empleado:";
		getline(cin,apellidos);
		archivo<<apellidos<<endl;
		cout<<"Ingrese la profesion del empleado:";
		getline(cin,profesion);
		archivo<<profesion<<endl;
		cout<<"Ingrese el sueldo del empleado:";
		getline(cin,sueldos);
		archivo<<sueldos<<endl;
		cout<<"Ingrese el sueldo Bonificacion del empleado:";
		getline(cin,sueldoBoni);
		archivo<<sueldoBoni<<endl;
		
		cout<<"Desea Agregar otro Nombre, apellido sueldo y profesion s/n : ";
		cin>>continuar;
		} while((continuar=='s') || (continuar=='S') );
		
	}
	archivo.close();
	abrir_archivo();
}


