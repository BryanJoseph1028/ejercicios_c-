
closegraph();
#include < winbgim.h >

#include < stdlib.h >

#include < stdio.h >

#include < iostream >

#include < String.h >

using namespace std;

main()


{ int x=20;

system("color e1");

char texto[20];

cout < < "\n";

cout < < "\n";

cout < < " ===== JUEGO DEL AHORCADO ===== \n";

cout < < "\n";

cout < < "\n";

cout < < " ===== Escriba la palabra que desea adivinar ? ===== \n";

cout < < "\n";

cout < < "\n";

cin > > texto;

cout < < "\n";


int n=strlen(texto);

char otro[n];

for (int i=0;i < n;i++){

otro[i]='-';}

char letra[2];

int ce=0, completa=0, encontrado;

initwindow(300,300);

setcolor(4);

settextstyle(0,0,2);

outtextxy(20,250,"= EL AHORCADO =");

outtextxy(50,30,otro);

while (ce < 5 && completa==0){

cout < < " Escriba la letra para completar la palabra ? \n";

cout < < "\n";

cin > > letra;


encontrado=0;

for (int i=0;i < n;i++){

if(texto[i]==letra[0]){

encontrado=1;

otro[i]=letra[0];

cout < < "\n";

cout < < " Letra acertada ";

cout < < "\n";

}

}


if(encontrado==0){

ce++;

switch(ce) {

case 1: circle(100,90,20);

break;

case 2:line(100,110,100,180);

break;

case 3: line(100,125,65,170);

line(100,125,135,170);

break;

case 4: line(100,180,60,220);

line(100,180,140,220);

break;

case 5: line(100,120,140,120);

line(140,120,140,50);

line(140,50,45,50);

line(45,50,45,240);

line(45,240,160,240);

setcolor(2);

line(90,80,110,100);

line(90,100,110,80);

outtextxy(10,250," PERDEDOR !!!! ");

break;

}

}

completa=1;

for (int i=0;i < n;i++){

if(otro[i]=='-'){ completa=0;}

}

cout < < otro < < endl;

outtextxy(50,30,otro);

}

system("pause");

closegraph();

}