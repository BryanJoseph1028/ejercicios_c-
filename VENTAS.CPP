#include <stdio.h>
#include <conio.h>
#include <iostream.h>
#include <windows.h>
#include <math.h>
#include <string.h>
#include <dos.h>
struct cliente
{
char nombre [50];
char direccion [50];
char nit [14];
int status;
int compra;
};
cliente rclientes;
main()
{
int ind;
char ventas, preguntas;
int Opciones, Martillos, Desarmadores, Barrenos, Alicates, Cuchillas, Metros, pinzas, cantidad, total, pago, cambio;
do{
system("color B");
cout<<"ingrese la cantidad de regristos"<<endl;
cin>>ind;
for(int i=0; i<ind; i++)
{
cout<<"Ingrese el nombre"<<endl;
gets(rclientes.nombre);
cout<<"Ingrese Direccion"<<endl;
gets(rclientes.direccion);
cout<<"Ingrese Nit"<<endl;
gets(rclientes.nit);
clrscr();
}
cout<<"Bienvenidos a la ventas de herramientas EL MARTILLO"<<ventas<<endl;
cout<<"Codigos del producto:"<<endl;
cout<<"1122.Martillos--------------Q65"<<ventas<<endl;
cout<<"2224.Desarmadores-----------Q15"<<ventas<<endl;
cout<<"3505.Barrenos---------------Q250"<<ventas<<endl;
cout<<"4212.Alicates---------------Q40"<<ventas<<endl;
cout<<"5443.Cuchillas--------------Q20"<<ventas<<endl;
cout<<"6554.Metros-----------------Q25"<<ventas<<endl;
cout<<"7456.Pinzas-----------------Q30"<<ventas<<endl;
cout<<"8.salir"<<ventas<<endl;
cout<<"Introduzca el codigo"<<Opciones<<endl;
     cin>>Opciones;

 switch(Opciones)
 {
 case 1122:
 {
 cout<<"Su compra son Martillos"<<Opciones<<endl;
 cin>>Martillos;
 cout<<"¿cuantas necesita?"<<cantidad<<endl;
 cin>>cantidad;
 Martillos=65;
 total=cantidad*Martillos;
 cout<<"su total es: "<<total<<endl;
 cout<<"ingrese su pago:"<<pago<<endl;
 cin>>pago;
 if(pago>=65)
 {
 cout<<"recibe cambio"<<endl;
 cambio=pago-total;
 cout<<"Su cambio es "<<cambio<<endl;
 getch();
 }
 else
 if(pago<65)
 {
 cout<<"No alcanza su pago"<<endl;
 }
 }
 break;

 case 2224:
 {
 cout<<"Su compra son Desarmadores"<<endl;
 cin>>Desarmadores;
 cout<<"¿cuantas necesita?"<<cantidad<<endl;
 cin>>cantidad;
 Desarmadores=15;
 total=cantidad*Desarmadores;
 cout<<"su total es: "<<total<<endl;
  cout<<"ingrese su pago:"<<pago<<endl;
 cin>>pago;
 if(pago>=15)
 {
 cout<<"recibe cambio"<<endl;
 cambio=pago-total;
 cout<<"Su cambio es "<<cambio<<endl;
 getch();
 }
 else
 if(pago<15)
 {
 cout<<"No alcanza su pago"<<endl;
 }
 }
 break;

 case 3505:
 {
 cout<<"Su compra son Barrenos"<<endl;
 cin>>Barrenos;
 cout<<"¿cuantas necesita?"<<cantidad<<endl;
 cin>>cantidad;
 Barrenos=250;
 total=cantidad*Barrenos;
 cout<<"su total es: Q"<<total<<endl;
  cout<<"ingrese su pago:"<<pago<<endl;
 cin>>pago;
 if(pago>=250)
 {
 cout<<"recibe cambio"<<endl;
 cambio=pago-total;
 cout<<"Su cambio es "<<cambio<<endl;
 getch();
 }
 else
 if(pago<250)
 {
 cout<<"No alcanza su pago"<<endl;
 }
 }
 break;
 case 4212:
 {
 cout<<"Su compra son Alicates"<<endl;
 cin>>Alicates;
 cout<<"¿cuantas necesita?"<<cantidad<<endl;
 cin>>cantidad;
 Alicates=40;
 total=cantidad*Alicates;
 cout<<"su total es: "<<total<<endl;
  cout<<"ingrese su pago:"<<pago<<endl;
 cin>>pago;
 if(pago>=40)
 {
 cout<<"recibe cambio"<<endl;
 cambio=pago-total;
 cout<<"Su cambio es "<<cambio<<endl;
 getch();
 }
 else
 if(pago<40)
 {
 cout<<"No alcanza su pago"<<endl;
 }
 }
 break;
 case 5443:
 {
 cout<<"Su compra son cuchillas"<<endl;
 cin>>Cuchillas;
 cout<<"¿cuantas necesita?"<<cantidad<<endl;
 cin>>cantidad;
 Cuchillas=20;
 total=cantidad*Cuchillas;
 cout<<"su total es: "<<total<<endl;
  cout<<"ingrese su pago:"<<pago<<endl;
 cin>>pago;
 if(pago>=20)
 {
 cout<<"recibe cambio"<<endl;
 cambio=pago-total;
 cout<<"Su cambio es "<<cambio<<endl;
 getch();
 }
 else
 if(pago<80)
 {
 cout<<"No alcanza su pago"<<endl;
 }
 }
 break;
 case 6554:
 {
 cout<<"Su compra son Metros"<<endl;
 cin>>Metros;
 cout<<"¿cuantas necesita?"<<cantidad<<endl;
 cin>>cantidad;
 Metros=25;
 total=cantidad*Metros;
 cout<<"su total es: "<<total<<endl;
  cout<<"ingrese su pago:"<<pago<<endl;
 cin>>pago;
 if(pago>=25)
 {
 cout<<"recibe cambio"<<endl;
 cambio=pago-total;
 cout<<"Su cambio es "<<cambio<<endl;
 getch();
 }
 else
 if(pago<25)
 {
 cout<<"No alcanza su pago"<<endl;
 }
 }
 break;
 case 7456:
 {
 cout<<"Su compra son Pinzas"<<endl;
 cin>>pinzas;
 cout<<"¿cuantas necesita?"<<cantidad<<endl;
 cin>>cantidad;
 pinzas=30;
 total=cantidad*pinzas;
 cout<<"su total es: "<<total<<endl;
  cout<<"ingrese su pago:"<<pago<<endl;
 cin>>pago;
 if(pago>=30)
 {
 cout<<"recibe cambio"<<endl;
 cambio=pago-total;
 cout<<"Su cambio es "<<cambio<<endl;
 getch();
 }
 else
 if(pago<20)
 {
 cout<<"No alcanza su pago"<<endl;
 }
 }
 break;
 case 8:
 {
   system("cls");
   cout<<"GRACIAS POR VISITARNOS :) "<<preguntas<<endl;
   cin>>preguntas;
 }

 default:
 {
 cout<<"Esa opcion no se encuentra disponible"<<endl;
 }
 system("pause");
 break;
 }//fin del switch
 }while(ventas>=8);

void  Crear(void);
void  Imprimir(void);
void  Anexar (void);
void  Modificar(void);
void  Borrar(void);

int op,cent;

      cent=6;
      while(cent<=6){
            printf("Bienvenido al menu de registro de pedidos, elige una opcion");
            printf("\n\n1.Crear archivo");
            printf("\n\n2.Visualizar la lista existente");
            printf("\n\n3.Anexar pedidos al archivo");
            printf("\n\n4.Modificar el registro de un pedido");
            printf("\n\n5.-Borrar el registro del pedido");
            printf("\n\n6.-Salir del menu");
            printf("\n\nOpcion: ");
            scanf("%d",&op);

            switch(op){
               case 1:
                  Crear();
               break;
               case 2:
                  Imprimir();
               break;
               case 3:
                  Anexar();
               break;
               case 4:
                  Modificar();
               break;
               case 5:
                  Borrar();
               break;
               case 6:
                  cent=7;
               break;
               default:
                  printf("\n!!!Error, opcion inexistente!!!");
                  printf("\n Introduce una opcion valida");
                  getch();
               break;
            }
        clrscr();
        }
        getch();
}

//Definicion de funciones//

//FUNCION PARA CREAR EL ARCHIVO//
void Crear(void){
   FILE *arventas;
   // Creacion del archivo y guardar datos
   if(!(arventas=fopen("ventas.txt","w+")))
   	printf("\n Error de apuertura del registro");
   else{
      fflush(stdin);
      clrscr();
      printf("\tELIGIO LA OPCION 1: CREAR ARCHIVO");
      printf("\n\nIntroduce el nombre del cliente: ");
      gets(rclientes.nombre);
      printf("\nIntroduce el numero la direccion del cliente: ");
      gets(rclientes.direccion);
      printf("\nIntroduce el nit del cliente:  ");
      gets(rclientes.nit);
      printf("\n\nIngrese la compra del cliente: ");
      scanf("%d",&rclientes.compra);
      printf("\n\nIngrese el nivel de estatus del cliente: ");
      scanf("%d",&rclientes.status);
      getch();
      fwrite(&arventas, sizeof(rclientes), 1, arventas);
      printf("\n!!!REGISTRO REALIZADO CON EXITO!!!");
      printf("\nPresiona una tecl para continuar...");
      getch();
      fclose(arventas);
   }
}

//FUNCION PARA IMPRIMIR EL REGISTRO//
void Imprimir(void){
   FILE * arventas;
   int n;
   if(!(arventas=fopen("ventas.txt","r")))
   	printf("Error de apuertura del registro");
   else{
      clrscr();
      printf("\tELIGIO LA OPCION 2:IMPRIMIR REGISTRO DE CLIENTE");
      printf("\n\n\t\t F E R R E T E R I A  E L  M A R T I L L O , P E D I D O  D E L  C L I E N T E\n");
      printf("\n------------------------------------------------------------------------------\n");
      printf("\tCLIENTE\tCOMPRA\tNIT\tDIRECCION\tSTATUS ");
      printf("\n------------------------------------------------------------------------------\n");
      while ((n=fread(&rclientes, sizeof(rclientes), 1, arventas))!=0){
         printf("%s \t",&rclientes.nombre);
         printf("%s \t",&rclientes.compra);
         printf("%s \t",&rclientes.nit);
         printf("%s \t",&rclientes.direccion);
         printf("%s \t",&rclientes.status);
      }
      printf("\n------------------------------------------------------------------------------\n");
      printf("\nPresiona una tecla para continuar...");
      getch();
      fclose(arventas);
   }
}
void Anexar(void){
   FILE *arventas;

   clrscr();
   printf("\tELIGIO LA OPCION 3: ANEXAR  LOS PEDIDOS DEL CLIENTE");
   printf("\n\n!!Se anexaran nuevos registros del cliente !!\n");
   if(!(arventas=fopen("ventas.txt","ab")))
   	printf("\n Error de apuertura del registro");
   else{
      fflush(stdin);
      printf("\n\nIntroduce el nombre del cliente: ");
      gets(rclientes.nombre);
      fflush(stdin);
      printf("\nIntroduce el nit del cliente: ");
      gets(rclientes.nit);
      printf("\nIntroduce la direccion del cliente:  ");
      gets(rclientes.direccion);
      printf("\n\nIngrese la compra del cliente: ");
      scanf("%d",&rclientes.compra);
       printf("\n\nIngrese el estatus del cliente ");
      scanf("%d",&rclientes.status);
      fwrite(&rclientes, sizeof(rclientes), 1, arventas);
      printf("\n!!!ANEXO REALIZADO CON EXITO!!!");
      printf("\nPresiona una tecla para continuar...");
      getch();
      fclose(arventas);
   }
}

//FUNCION PARA MODIFICAR UN REGISTRO CON BUSQUEDA
void Modificar(void){
   FILE *arventas;
   int n,c,opc;

   if(!(arventas=fopen("ventas.txt","r+b")))
   	printf("\n Error de apuertura del registro");
   else{
      clrscr();
      printf("\tELIGIO LA OPCION 4: MODIFICAR EL REGISTRO DEL CLIENTE");
      printf("\n\nIntroduzca el numero de nit del cliente: ");
      scanf("%d",rclientes.nit);
      gets(rclientes.nit);
      while ((n=fread(&rclientes, sizeof(rclientes), 1, arventas))!=0 && rclientes.compra !=c);
      if (c=rclientes.compra !=c)
         printf("No existe el nit del cliente: %d ",c);
      else{
         clrscr();
         printf("\n!!Se encontro el cliente!!");
         printf("\n¿Que desea cambiar?, Seleccione una opcion");
         printf("\n\n1.Nombre");
         printf("\n\n2.compra");
         printf("\n\n3.nit del cliente");
         printf("\n\n4.direccion del cliente");
          printf("\n\n5.status del cleinte");
         printf("\n\nIntroduzca su opicion: ");
         scanf("%d",&opc);
         switch(opc){
                     case 1:
                        fflush(stdin);
                        printf("\nIntroduzca el nuevo nombre: ");
                        gets(rclientes.nombre);
                     break;
                     case 2:
                        printf("\nIntroduza la nueva compra del cliente: ");
                        scanf("%d",&rclientes.compra);;
                     break;
                     case 3:
                        printf("\nIntroduzca el nit del cliente: ");
                        gets(rclientes.nit);
                     break;
                     case 4:
                        printf("\nIntroduzca la direccion del cliente: ");
                        gets(rclientes.direccion);
                     break;
                     case 5:
                        printf("\nIntroduzca el nivel de status del cliente: ");
                        scanf("%d",&rclientes.status);
                     break;
                     default:
                        printf("\Error, opcion inexistente");
                     break;
         }
         printf("\nGrabando registro.....\n");
         fseek(arventas,-sizeof(rclientes),SEEK_CUR);
         fwrite(&rclientes, sizeof(rclientes), 1, arventas);
         printf("\nRegistro grabado con exito");
         printf("\nPresiona una tecla para continuar...");
         getch();
      }
      fclose(arventas);
   }
}

//FUNCION PARA BORRAR REGISTROS//

void Borrar(void){
   FILE *arventas;
   int n,c,encontrado=0;
   clrscr();
   printf("\tELIGIO LA OPCION 5: BORRAR EL REGISTRO DEL CLIENTE");
   printf("\n\nIngrese el numero de nit del cliente para borrar el registro: ");
   gets(rclientes.nit);
   if(!(arventas=fopen("ventas.txt","r")))
   	printf("\n Error de apuertura del registro");
   else{
      if(!(arventas=fopen("ventas.txt","wb")))
         printf("\n Error,imposible borrar registro, el archivo no existe");
      else{
         while ((n=fread(&rclientes, sizeof(rclientes), 1, arventas))!=0){
            if(rclientes.compra !=c)
              fwrite(&rclientes, sizeof(rclientes), 1, arventas);
            else
              encontrado=1;
         }
         fclose(arventas);
      }
      fclose(arventas);
      if(encontrado){
         system("del rclientes.nit");
         system("ren ventas.txt rclientes.nit");
         printf("\n!!!Registro borrado satisfactoriamente!!!\n");
         printf("\n\nPresiona una tecla para continuar");
         getch();
      }
      else{
         system("del ventas.txt");
         printf("\n!!!No se entontro ningun cliente!!!");
         printf("\n\nPresiona una tecla para continuar");
         getch();
      }
     }
   }

