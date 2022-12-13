// Este c¢digo es para un juego de carreras, no es como 'Need for Speed'
// pero espero que les parezca interesante.
//
//	escribanme acerca de su opinion !!
//
//   Por: Jos‚ Luis Gonz lez Vergara
//
//   Ingenier¡a en Sistemas Computacionales 2§ semestre
//   Escuela Superior de C¢mputo, IPN M‚xico D.F.
//
//   e-mail: jlpato@hotmail.com
//           jlpato2002@yahoo.com
//
#include <graphics.h>
#include <time.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <dos.h>
#include <ctype.h>
#include <math.h>
#include <assert.h>

void juego(int concarros);
void instructivo(void);
void cisne(void);
void carro(int xcar, int ycar, int colorcar, int colorpiloto, int xant, int yant);
void explosion(int x, int y);
void campeon(int x, int y, int a, int b);
void puntaje(int n);
double bonus=0;
clock_t start, end, start2;
int cont3=0, nivel=1;

void main()
{
   /* request auto detection */
   int gdriver = DETECT, gmode, errorcode;

   /* initialize graphics and local variables */
   initgraph(&gdriver, &gmode, "");

   /* read result of initialization */
   errorcode = graphresult();
   if (errorcode != grOk)  /* an error occurred */
   {
      printf("Error al inicializar el modo gr fico:\n\t%s\n\n\n", grapherrormsg(errorcode));
      printf("Presiona una tecla para continuar:");
      getch();
      exit(1); /* terminate with an error code */
   }
int cont=0;
char op, opcion;

inicio:
setbkcolor(1);
cont=0;
while( !kbhit() && cont<=1500 )
   {
   setcolor(2);
   line(320,240,random(580)+30,random(100)+190);
   if(cont%10==0)
     {
     setcolor(14);
     line(0,cont/10,640,cont/10);
     line(0,480-cont/10,640,480-cont/10);
     }
   cont++;
   delay(2);
   }
setfillstyle(1,14);
if(cont<1500)
  {
  cleardevice();
  goto menu;
  }

setcolor(14);
settextjustify(1,1);
outtextxy(320,240,"S P E E D C A R   F-1");

start=clock();
end=clock();
while( !kbhit() && ( ((end -start) /CLK_TCK )<(5) ) )
   end=clock();
if(((end -start) /CLK_TCK )<(5))
   {
   getch();
   cleardevice();
   goto menu;
   }

setfillstyle(1,1);
setcolor(1);
cont=0;
while( !kbhit() && cont<=400 )
  {
   fillellipse(320,240,cont,cont);
   cont++;
  }
if(cont<400)
  {
  cleardevice();
  getch();
  }

menu:
do{

settextjustify(1,1);
setcolor(14);
outtextxy(320,150,"J U G A R    (A)");
outtextxy(320,200,"C O M O   J U G A R    (B)");
outtextxy(320,250,"C R E D I T O S    (C)");
outtextxy(320,300,"S A L I R    (D)");
setcolor(10);
rectangle(240,130,400,170);
  rectangle(239,129,401,171);
rectangle(200,180,440,220);
  rectangle(199,179,441,221);
rectangle(220,230,420,270);
  rectangle(219,229,421,271);
rectangle(240,280,400,320);
  rectangle(239,279,401,321);

start2=clock();
while( !kbhit() && ( ((end -start2) /CLK_TCK )<(5) ) )
   end=clock();
if(((end -start2) /CLK_TCK )<(5))
op=tolower(getch());
else
  {
  cleardevice();
  goto inicio;
  }

if(op=='a')
  {
   cleardevice();
   settextjustify(1,1);
   outtextxy(320,230,"¨Quieres jugar con carros?");
   outtextxy(320,250,"( s/n )");
   opcion=tolower(getch());
   setcolor(0);
   outtextxy(320,230,"¨Quieres jugar con carros?");
   outtextxy(320,250,"( s/n )");
   if(opcion=='s')
      juego(1);
   else
      juego(0);
  }
if(op=='b')
   instructivo();
if(op=='c')
   cisne();

if(op=='p')
  if(getch()=='r')
    if(getch()=='i')
      if(getch()=='n')
	if(getch()=='c')
	  if(getch()=='e')
	    if(getch()=='s')
	      if(getch()=='a')
	      {
	      cleardevice();
	      settextjustify(1,1);
	      outtextxy(320,200,"Te Amo y extra¤o mucho Princesa");
	      outtextxy(320,220,"Nunca olvides a tu 'burro' que te estar  esperando");
	      outtextxy(320,240,"Necesito escuchar de tus labios un 'Te Amo'");
	      outtextxy(320,260,"que me devolver¡a muchas ilusiones que he perdido");
	      getch();
	      cleardevice();
	      }
if(op=='j')
  if(getch()=='o')
    if(getch()=='s')
      if(getch()=='e')
	if(getch()==' ')
	  if(getch()=='l')
	    if(getch()=='u')
	      if(getch()=='i')
		if(getch()=='s')
		{
		cisne();
		}


}while( op!='d' );
closegraph();
}//llave del main ************************************************************

void juego(int concarros)
{
int xcarplayer=320, ycarplayer=240, xcarplayerant=320, ycarplayerant=240;
int colorcar=1, colorpiloto=1;
int cont, velocidad=10, ya=1;
int xobs1=250, xobs2=310, xobs3=320, conty=0, conty2=0, conty3=0;
int colorobs1=WHITE, colorobs2=DARKGRAY, colorobs3=6;
int xobs4=350, xobs5=380, xobs6=410, conty4=0, conty5=0, conty6=0;
int colorobs4=LIGHTRED, colorobs5=YELLOW, colorobs6=LIGHTGREEN;
int xobs7=240, xobs8=300, xobs9=415, conty7=0, conty8=0, conty9=0;
int colorobs7=LIGHTBLUE, colorobs8=MAGENTA, colorobs9=LIGHTMAGENTA;
int xcarro1a=410, xcarro1b=410, ycarro1=0, colorcarro1=LIGHTRED, colorpiloto1=RED;
int xcarro2a=300, xcarro2b=300, ycarro2=550, colorcarro2=YELLOW, colorpiloto2=GREEN;
int xcarro3a=225, xcarro3b=225, ycarro3=1100, colorcarro3=LIGHTGREEN, colorpiloto3=BLUE;
char tecla, color;
long double contador=0, cont2=0;
nivel=1;
bonus=0;

setbkcolor(0);
cleardevice();
setfillstyle(7,1);
bar(0,0,100,480);
bar(540,0,640,480);
setfillstyle(11,10);
bar(101,0,149,480);
bar(491,0,540,480);
setfillstyle(11,12);
rectangle(150,-1,169,480);
rectangle(471,-1,490,480);
bar(151,0,168,479);
bar(472,0,489,479);
setfillstyle(4,14);
bar(170,0,200,480);
setfillstyle(5,14);
bar(440,0,470,480);
setfillstyle(1,9);
bar(98,0,102,480);
bar(538,0,542,480);
for(cont=0;cont<=100;cont++)
{
setfillstyle(1,random(15)+1);
fillellipse(random(94),random(480),4,4);
fillellipse(random(94)+544,random(480),4,4);
}

//este bloque pide al usuario que seleccione un color para su carro
setcolor(10);
settextjustify(1,1);
outtextxy(320,180,"Selecciona tu carro:");
outtextxy(320,300,"Presiona cualquier");
outtextxy(320,320,"tecla para cambiarlo");
outtextxy(320,340,"Presiona 's' para elegirlo");
do{
   carro(xcarplayer,ycarplayer,colorcar,colorpiloto,xcarplayerant,ycarplayerant);
   color=tolower(getch());
   if(color!='s')
     colorcar++;
}while(color!='s');
setcolor(0);
outtextxy(320,180,"Selecciona tu carro:");
setcolor(10);
outtextxy(320,180,"Selecciona tu piloto:");
do{
   carro(xcarplayer,ycarplayer,colorcar,colorpiloto,xcarplayerant,ycarplayerant);
   color=tolower(getch());
   if(color!='s')
     colorpiloto++;
}while(color!='s');
setcolor(0);
outtextxy(320,180,"Selecciona tu piloto:");
outtextxy(320,300,"Presiona cualquier");
outtextxy(320,320,"tecla para cambiarlo");
outtextxy(320,340,"Presiona 's' para elegirlo");

   start = clock();

do
{
randomize();

carro(xcarplayer,ycarplayer,colorcar,colorpiloto,xcarplayerant,ycarplayerant);
xcarplayerant=xcarplayer;
ycarplayerant=ycarplayer;

if( xcarplayer<=215 || xcarplayer>=425 )
  {
  explosion(xcarplayer,ycarplayer);
  goto fin;
  }

while(!kbhit())
{

if(conty==0)
  {
  xobs1=xobs1-60;
  if(xobs1<215 || xobs1>410)
    xobs1=410;
  }
if(conty2==0)
  {
  xobs2=xobs2+40;
  if(xobs2<215 || xobs2>410)
    xobs2=215;
  }
if(conty3==0)
  {
  xobs3=xobs3+50;
    if(xobs3<215 || xobs3>410)
  xobs3=215;
  }
if(contador>=500)
{
if(conty7==0)
  {
  xobs7=xobs7+60;
  if(xobs7<215 || xobs7>410)
    xobs7=220;
  }
if(conty8==0)
  {
  xobs8=xobs8+35;
  if(xobs8<215 || xobs8>410)
    xobs8=220;
  }
if(conty9==0)
  {
  xobs9=xobs9-35;
  if(xobs9<215 || xobs9>410)
    xobs9=410;
  }
}

if(concarros==1)
{
if(ycarro1==0)
  {
  xcarro1a=xcarro1a+50;
  if(xcarro1a<224 || xcarro1a>410)
    xcarro1a=225;
  }
if(ycarro2==0)
  {
  xcarro2a=xcarro2a-30;
  if(xcarro2a<224 || xcarro2a>410)
    xcarro2a=410;
  }
if(ycarro3==0)
  {
  xcarro3a=xcarro3a+25;
  if(xcarro3a<224 || xcarro3a>410)
    xcarro3a=225;
  }

}
else
{
if(conty4==0)
  {
  xobs4=xobs4-25;
  if(xobs4<215 || xobs4>410)
    xobs4=410;
  }
if(conty5==0)
  {
  xobs5=xobs5+25;
  if(xobs5<320 || xobs5>410)
    xobs5=320;
  }
if(conty6==0)
  {
  xobs6=xobs6-25;
  if(xobs6<215 || xobs6>320)
    xobs6=320;
  }
}

if(nivel!=ya)
   {
   end=clock();
   if( (end-start2)/CLK_TCK <= 5 )
     {
     setcolor(8);
     outtextxy(320,240,"N I V E L");
     gotoxy(40,17);
     printf("%d",nivel);
     }
   else
     {
     setcolor(0);
     outtextxy(320,240,"N I V E L");
     gotoxy(40,17);
     printf("  ",nivel);
     ya=nivel;
     }
   }
else
   start2=clock();


contador++;
end=clock();
if( ((end-start)/CLK_TCK ) >= 45 )
  {
  nivel=2;
  if( ((end-start)/CLK_TCK ) >= 90 )
    {
    nivel=3;
    if( ((end-start)/CLK_TCK ) >= 135 )
      {
      nivel=4;
      if( ((end-start)/CLK_TCK ) >= 180 )
	{
	nivel=5;
	if( ((end-start)/CLK_TCK ) >= 225 )
	  {
	  nivel=6;
	  if( ((end-start)/CLK_TCK ) >= 270 )
	    {
	    nivel=7;
	    if( ((end-start)/CLK_TCK ) >= 315 )
	      {
	      nivel=8;
	      if( ((end-start)/CLK_TCK ) >= 360 )
		{
		nivel=9;
		if( ((end-start)/CLK_TCK ) >= 405 )
		  {
		  nivel=10;
		  if( ((end-start)/CLK_TCK ) >= 450 )
		    {
		    campeon(xcarplayer,ycarplayer, colorcar, colorpiloto);
		    goto fin;
		    }
		  }
		}
	      }
	    }
	  }
	}
      }
    }
  }

//este bloque llena las gradas de gente
randomize();
if(conty3==999)
{
  if( (cont3%2)==1 )
  for(cont=1;cont<=15;cont++)
   {
    setfillstyle(1,random(15)+1);
    fillellipse(random(94),random(480),4,4);
    fillellipse(random(94)+544,random(480),4,4);
   }
  cont2++;
  cont3++;
  if(velocidad!=0)
     bonus=bonus+(cont2*(50/velocidad));
  else
     bonus=bonus+(cont2*100);
}

   setfillstyle(10,colorobs1);
   bar(xobs1,conty-20,xobs1+20,conty);
   conty++;
   setfillstyle(1,0);
   bar(xobs1,conty-20-1,xobs1+20,conty-20);

   setfillstyle(7,colorobs2);
   bar(xobs2,conty2-20,xobs2+20,conty2);
   conty2++;
   setfillstyle(1,0);
   bar(xobs2,conty2-20-1,xobs2+20,conty2-20);

   setfillstyle(1,colorobs3);
   bar(xobs3,conty3-20,xobs3+20,conty3);
   conty3++;
   setfillstyle(1,0);
   bar(xobs3,conty3-20-1,xobs3+20,conty3-20);

   if(contador>=500)
     {

     setfillstyle(10,colorobs7);
     bar(xobs7,conty7-20,xobs7+20,conty7);
     conty7++;
     setfillstyle(1,0);
     bar(xobs7,conty7-20-1,xobs7+20,conty7-20);

     setfillstyle(7,colorobs8);
     bar(xobs8,conty8-20,xobs8+20,conty8);
     conty8++;
     setfillstyle(1,0);
     bar(xobs8,conty8-20-1,xobs8+20,conty8-20);

     setfillstyle(1,colorobs9);
     bar(xobs9,conty9-20,xobs9+20,conty9);
     conty9++;
     setfillstyle(1,0);
     bar(xobs9,conty9-20-1,xobs9+20,conty9-20);
     }

if(concarros==1)
{
   carro(xcarro1a,ycarro1,colorcarro1,colorpiloto1,xcarro1b,ycarro1-1);
   xcarro1b=xcarro1a;
   ycarro1++;

   carro(xcarro2a,ycarro2,colorcarro2,colorpiloto2,xcarro2b,ycarro2-1);
   xcarro2b=xcarro2a;
   ycarro2++;

   carro(xcarro3a,ycarro3,colorcarro3,colorpiloto3,xcarro3b,ycarro3-1);
   xcarro3b=xcarro3a;
   ycarro3++;
}
else
{
   setfillstyle(10,colorobs4);
   bar(xobs4,conty4-20,xobs4+20,conty4);
   conty4++;
   setfillstyle(1,0);
   bar(xobs4,conty4-20-1,xobs4+20,conty4-20);

   setfillstyle(7,colorobs5);
   bar(xobs5,conty5-20,xobs5+20,conty5);
   conty5++;
   setfillstyle(1,0);
   bar(xobs5,conty5-20-1,xobs5+20,conty5-20);

   setfillstyle(1,colorobs6);
   bar(xobs6,conty6-20,xobs6+20,conty6);
   conty6++;
   setfillstyle(1,0);
   bar(xobs6,conty6-20-1,xobs6+20,conty6-20);
}

if(conty==500)
   conty=0;
if(conty2==700)
   conty2=0;
if(conty3==1000)
   conty3=0;

if(concarros==1)
{
  if(ycarro1==1650)
     ycarro1=0;
  if(ycarro2==1650)
     ycarro2=0;
  if(ycarro3==1650)
     ycarro3=0;
}
else
{
  if(conty4==765)
     conty4=0;
  if(conty5==579)
     conty5=0;
  if(conty6==832)
     conty6=0;
}
if(contador>=500)
  {
  if(conty7==962)
    conty7=0;
  if(conty8==543)
    conty8=0;
  if(conty9==509)
    conty9=0;
  }

if( (xcarplayer+16)>(xobs1) && (xcarplayer-16)<(xobs1+20) )
 {
  if( (conty)>(ycarplayer-34) && (conty-20)<(ycarplayer+45) )
  {
   explosion(xcarplayer,ycarplayer);
   goto fin;
  }
 }
if( (xcarplayer+16)>(xobs2) && (xcarplayer-16)<(xobs2+20) )
 {
  if( (conty2)>(ycarplayer-34) && (conty2-20)<(ycarplayer+45) )
  {
   explosion(xcarplayer,ycarplayer);
   goto fin;
  }
 }
if( (xcarplayer+16)>(xobs3) && (xcarplayer-16)<(xobs3+20) )
 {
  if( (conty3)>(ycarplayer-34) && (conty3-20)<(ycarplayer+45) )
  {
   explosion(xcarplayer,ycarplayer);
   goto fin;
  }
 }
if( (xcarplayer+16)>(xobs4) && (xcarplayer-16)<(xobs4+20) )
 {
  if( (conty4)>(ycarplayer-34) && (conty4-20)<(ycarplayer+45) )
  {
   explosion(xcarplayer,ycarplayer);
   goto fin;
  }
 }
if( (xcarplayer+16)>(xobs5) && (xcarplayer-16)<(xobs5+20) )
 {
  if( (conty5)>(ycarplayer-34) && (conty5-20)<(ycarplayer+45) )
  {
   explosion(xcarplayer,ycarplayer);
   goto fin;
  }
 }
if( (xcarplayer+16)>(xobs6) && (xcarplayer-16)<(xobs6+20) )
 {
  if( (conty6)>(ycarplayer-34) && (conty6-20)<(ycarplayer+45) )
  {
   explosion(xcarplayer,ycarplayer);
   goto fin;
  }
 }
if( (xcarplayer+16)>(xobs7) && (xcarplayer-16)<(xobs7+20) )
 {
  if( (conty7)>(ycarplayer-34) && (conty7-20)<(ycarplayer+45) )
  {
   explosion(xcarplayer,ycarplayer);
   goto fin;
  }
 }
if( (xcarplayer+16)>(xobs8) && (xcarplayer-16)<(xobs8+20) )
 {
  if( (conty8)>(ycarplayer-34) && (conty8-20)<(ycarplayer+45) )
  {
   explosion(xcarplayer,ycarplayer);
   goto fin;
  }
 }
if( (xcarplayer+16)>(xobs9) && (xcarplayer-16)<(xobs9+20) )
 {
  if( (conty9)>(ycarplayer-34) && (conty9-20)<(ycarplayer+45) )
  {
   explosion(xcarplayer,ycarplayer);
   goto fin;
  }
 }
if( ((xcarplayer+16)>(xcarro1a-16)) && (xcarplayer-16)<(xcarro1a+16) )
 {
  if( (ycarro1+45)>(ycarplayer-34) && (ycarro1-34)<(ycarplayer+45) )
  {
   if(concarros==1)
     {
     explosion(xcarplayer,ycarplayer);
     goto fin;
     }
  }
 }
if( ((xcarplayer+16)>(xcarro2a-16)) && (xcarplayer-16)<(xcarro2a+16) )
 {
  if( (ycarro2+45)>(ycarplayer-34) && (ycarro2-34)<(ycarplayer+45) )
  {
   if(concarros==1)
     {
     explosion(xcarplayer,ycarplayer);
     goto fin;
     }
  }
 }
if( ((xcarplayer+16)>(xcarro3a-16)) && (xcarplayer-16)<(xcarro3a+16) )
 {
  if( (ycarro3+45)>(ycarplayer-34) && (ycarro3-34)<(ycarplayer+45) )
  {
   if(concarros==1)
     {
     explosion(xcarplayer,ycarplayer);
     goto fin;
     }
  }
 }

delay(velocidad);
}//llave del 'while(!kbhit())'

  tecla=tolower(getch());
  if(tecla=='m')
     xcarplayer=xcarplayer+10;
  if(tecla=='k')
     xcarplayer=xcarplayer-10;
  if(tecla=='p')
     ycarplayer=ycarplayer+10;
  if(tecla=='h')
     ycarplayer=ycarplayer-10;

  if(tecla=='c')
     getch();
  if(tecla=='b')
     if(velocidad!=0)
	velocidad--;
  if(tecla=='v')
     {
     settextjustify(1,1);
     if(nivel==1)
	 {
	 if(velocidad<=33)
	   velocidad++;
	 if(velocidad>33)
	   velocidad=33;
	 }
     if(nivel==2)
	 {
	 if(velocidad<=30)
	   velocidad++;
	 if(velocidad>30)
	   velocidad=30;
	 }
     if(nivel==3)
	 {
	 if(velocidad<=27)
	   velocidad++;
	 if(velocidad>27)
	   velocidad=27;
	 }
     if(nivel==4)
	 {
	 if(velocidad<=23)
	   velocidad++;
	 if(velocidad>23)
	   velocidad=23;
	 }
     if(nivel==5)
	 {
	 if(velocidad<=20)
	   velocidad++;
	 if(velocidad>20)
	   velocidad=20;
	 }
     if(nivel==6)
	 {
	 if(velocidad<=17)
	   velocidad++;
	 if(velocidad>17)
	   velocidad=17;
	 }
     if(nivel==7)
	 {
	 if(velocidad<=13)
	   velocidad++;
	 if(velocidad>13)
	   velocidad=13;
	 }
     if(nivel==8)
	 {
	 if(velocidad<=10)
	   velocidad++;
	 if(velocidad>10)
	   velocidad=10;
	 }
     if(nivel==9)
	 {
	 if(velocidad<=7)
	   velocidad++;
	 if(velocidad>7)
	   velocidad=7;
	 }
     if(nivel==10)
	 {
	 if(velocidad<=3)
	   velocidad++;
	 if(velocidad>3)
	   velocidad=3;
	 }
     }

  //este bloque imprime el velocimetro
  gotoxy(76,2);
  printf("   ");
  gotoxy(70,2);
  if(velocidad<=33)
     printf(" Vel: %d",99-velocidad*3);
  setcolor(12);
  rectangle(551,15,623,31);
  rectangle(550,14,624,32);
  rectangle(549,13,625,33);
  rectangle(548,12,626,34);
  if(velocidad<=3)
  {
    setcolor(14);
    rectangle(550,14,624,32);
    rectangle(548,12,626,34);
    if(velocidad==0)
    {
      setcolor(14);
      rectangle(551,15,623,31);
      rectangle(549,13,625,33);
    }
  }

  //este bloque imprime el nivel en que se est 
  gotoxy(76,4);
    printf("   ");
  gotoxy(70,4);
    printf("Nivel %2d",nivel);
  setcolor(12);
  rectangle(550,47,623,63);
  rectangle(549,46,624,64);
  rectangle(548,45,625,65);
  rectangle(547,44,626,66);

//gotoxy(1,2);//************eliminar estos dos enunciados
//printf("%3d",cont3);//*****'cont3' contiene el num. de personas en las gradas

}while(tecla!='s');//termina ciclo 'do-while'

fin:
cleardevice();
setbkcolor(1);
}

//esta funcion imprime en pantalla un carro de carreras **********************
void carro(int xcar, int ycar, int colorcar, int colorpiloto, int xant, int yant)
{
//xcar es la coordenada 'x' donde se dibujara el carro
//ycar es la coordenada 'y' donde se dibujara el carro
//xant es la coordenada 'x' donde estaba dibujado el carro
//yant es la coordenada 'y' donde estaba dibujado el carro

// este ciclo borra el carro del lugar donde estaba dibujado
if(xcar!=xant || ycar!=yant)
{
 setfillstyle(1,0);
 bar(xant-15,yant-37,xant+15,yant+44);
}

//este ciclo dibuja el carro en la nueva posicion
setfillstyle(1,colorcar);
bar(xcar-9,ycar-37,xcar+9,ycar-32);
bar(xcar-3,ycar-32,xcar+3,ycar-19);
bar(xcar-10,ycar-19,xcar+10,ycar+19);
bar(xcar-5,ycar+19,xcar+5,ycar+36);
bar(xcar-15,ycar+37,xcar+15,ycar+44);
setfillstyle(9,7);
setcolor(8);
rectangle(xcar-12,ycar-29,xcar-7,ycar-21);
bar(xcar-11,ycar-28,xcar-8,ycar-22);
rectangle(xcar+7,ycar-29,xcar+12,ycar-21);
bar(xcar+8,ycar-28,xcar+11,ycar-22);
rectangle(xcar-15,ycar+21,xcar-7,ycar+35);
bar(xcar-14,ycar+22,xcar-8,ycar+34);
rectangle(xcar+7,ycar+21,xcar+15,ycar+35);
bar(xcar+8,ycar+22,xcar+14,ycar+34);
setfillstyle(1,0);
fillellipse(xcar,ycar+3,6,13);
setfillstyle(1,colorpiloto);
fillellipse(xcar,ycar+3,3,3);
ellipse(xcar,ycar+3,-37,73,9,25);
ellipse(xcar,ycar+3,107,220,9,25);
ellipse(xcar+13,ycar+40,140,170,10,30);
ellipse(xcar-13,ycar+40,9,40,10,30);
line(xcar-4,ycar+36,xcar+4,ycar+36);
line(xcar-3,ycar-7,xcar+3,ycar-7);
line(xcar-2,ycar-8,xcar+2,ycar-8);
line(xcar-2,ycar-9,xcar+2,ycar-9);
line(xcar-3,ycar-20,xcar,ycar-29);
line(xcar,ycar-29,xcar+3,ycar-20);
}

void explosion(int x, int y)//************************************************
{
int cont;

   end = clock();

setcolor(14);
randomize();
for(cont=0;cont<=150;cont++)
{
 moveto(random(40)+x-20,random(80)+y-40);
 lineto(x,y);
}
   setcolor(14);
   outtextxy(320,230,"C H O C A S T E");
   outtextxy(320,250,"Int‚ntalo otra vez");
   delay(3000);

   puntaje(nivel);
   nivel=1;
   bonus=0;
   getch();
}

void cisne(void)//************************************************************
{
int cont;
setbkcolor(0);
cleardevice();
delay(1000);
for(cont=0;cont<=5;cont++)
{
if(cont==0 || cont==4)
   setcolor(8);
if(cont==1 || cont==3)
   setcolor(7);
if(cont==2)
   setcolor(15);
if(cont==5)
   setcolor(0);
arc(490,60,215,220,200);
arc(382,168,180,200,50);
arc(317,167,0,180,15);
if(cont!=5)
{
arc(402,168,180,210,100);
arc(192,304,5,35,150);
arc(291,292,180,360,50);
}
arc(390,304,155,175,150);
arc(208,220,290,340,50);
arc(225,217,270,285,50);
arc(195,241,290,330,50);
arc(212,238,270,290,50);
arc(186,260,290,330,50);
arc(205,258,265,290,50);
arc(179,280,290,330,50);
arc(200,278,262,290,50);
arc(135,143,270,295,200);
if(cont!=5)
{
arc(412,160,205,215,100);
arc(207,304,5,35,150);
arc(276,292,325,360,80);
arc(340,139,270,295,200);
}
arc(494,508,90,110,200);
if(cont<2)
   delay(100);
else
   delay(150);
}

delay(200);
setcolor(8);
settextjustify(1,1);
outtextxy(320,240,"Jos‚ Luis");

delay(100);
setcolor(7);
settextjustify(1,1);
outtextxy(320,240,"Jos‚ Luis");

delay(100);
setcolor(15);
settextjustify(1,1);
outtextxy(320,240,"Jos‚ Luis");

delay(3000);
setcolor(0);
arc(402,168,180,210,100);
arc(192,304,5,35,150);
arc(291,292,180,360,50);
arc(412,160,205,215,100);
arc(207,304,5,35,150);
arc(276,292,325,360,80);
arc(340,139,270,295,200);
outtextxy(320,240,"Jos‚ Luis");
setbkcolor(1);
}

void instructivo(void)//******************************************************
{
cleardevice();
setcolor(10);
rectangle(100,100,540,380);
rectangle(99,99,541,381);
rectangle(98,98,542,382);
rectangle(97,97,543,383);

setcolor(14);
settextjustify(0,1);
outtextxy(120,140,"Este es el instructivo de c¢mo jugar 'SPEEDCAR F-1'");
setcolor(12);
outtextxy(120,180,"  Tu puedes manejar tu carro hasta donde quieras");
outtextxy(120,200,"pero procura no chocar contra los objetos que hay");
outtextxy(120,220,"en el camino y ten cuidado de no acercarte mucho");
outtextxy(120,240,"a los muros de contensi¢n.");
outtextxy(120,260,"  Adem s puedes aumentar o disminuir la velocidad");
outtextxy(120,280,"para tener mayor control sobre tu fabuloso auto.");
outtextxy(120,300,"  Mientras m s tiempo dures en el camino m s");
outtextxy(120,320,"puntos obtendr s, las gradas se llenar n y ser s");
outtextxy(120,340,"el campe¢n de la Formula 1.");
getch();

setcolor(0);
outtextxy(120,140,"Este es el instructivo de c¢mo jugar 'SPEEDCAR F-1'");
outtextxy(120,180,"  Tu puedes manejar tu carro hasta donde quieras");
outtextxy(120,200,"pero procura no chocar contra los objetos que hay");
outtextxy(120,220,"en el camino y ten cuidado de no acercarte mucho");
outtextxy(120,240,"a los muros de contensi¢n.");
outtextxy(120,260,"  Adem s puedes aumentar o disminuir la velocidad");
outtextxy(120,280,"para tener mayor control sobre tu fabuloso auto.");
outtextxy(120,300,"  Mientras m s tiempo dures en el camino m s");
outtextxy(120,320,"puntos obtendr s, las gradas se llenar n y ser s");
outtextxy(120,340,"el campe¢n de la Formula 1.");
setcolor(12);
outtextxy(120,140,"  El tiempo que dura el juego son 7.5 minutos.");
outtextxy(120,160,"  Cada ocasi¢n que avanzas un nivel aumenta la");
outtextxy(120,180,"velocidad m¡nima, asi que en el nivel 10 solo");
outtextxy(120,200,"puedes cambiar de 90 a 99 km/h y necesitar s ser");
outtextxy(120,220,"muy h bil para no chocar y poder llegar a la meta");
outtextxy(120,240,"para obtener la copa del mejor corredor de autos.");
outtextxy(120,260,"  Si eres muy veloz las gradas se llenar n muy");
outtextxy(120,280,"r pidamente porque todos querr n ver al futuro");
outtextxy(120,300,"campe¢n y al mismo tiempo sumas m s puntos a tu");
outtextxy(120,320,"record para poner tu nombre en la lista de los");
outtextxy(120,340,"pilotos m s sagaces de 'SPEEDCAR F-1'.");
getch();

setcolor(0);
outtextxy(120,140,"  El tiempo que dura el juego son 7.5 minutos.");
outtextxy(120,160,"  Cada ocasi¢n que avanzas un nivel aumenta la");
outtextxy(120,180,"velocidad m¡nima, asi que en el nivel 10 solo");
outtextxy(120,200,"puedes cambiar de 90 a 99 km/h y necesitar s ser");
outtextxy(120,220,"muy h bil para no chocar y poder llegar a la meta");
outtextxy(120,240,"para obtener la copa del mejor corredor de autos.");
outtextxy(120,260,"  Si eres muy veloz las gradas se llenar n muy");
outtextxy(120,280,"r pidamente porque todos querr n ver al futuro");
outtextxy(120,300,"campe¢n y al mismo tiempo sumas m s puntos a tu");
outtextxy(120,320,"record para poner tu nombre en la lista de los");
outtextxy(120,340,"pilotos m s sagaces de 'SPEEDCAR F-1'.");
setcolor(12);
outtextxy(120,140,"Estas son las teclas que debes usar para manejar");
outtextxy(120,160,"tu auto:");
outtextxy(120,200,"flecha arriba mueve tu auto hacia adelante");
outtextxy(120,220,"flecha izquierda mueve tu auto hacia la izquierda");
outtextxy(120,240,"flecha abajo mueve tu auto hacia atr s");
outtextxy(120,260,"flecha derecha mueve tu auto hacia la derecha");
outtextxy(120,280,"' B ' aumenta la velocidad de tu auto");
outtextxy(120,300,"' V ' disminuye la velocidad de tu auto");
outtextxy(120,320,"' C ' pausa tu juego");
outtextxy(120,340,"' S ' abandona tu juego");
getch();

setcolor(0);
outtextxy(120,140,"Estas son las teclas que debes usar para manejar");
outtextxy(120,160,"tu auto:");
outtextxy(120,200,"flecha arriba mueve tu auto hacia adelante");
outtextxy(120,220,"flecha izquierda mueve tu auto hacia la izquierda");
outtextxy(120,240,"flecha abajo mueve tu auto hacia atr s");
outtextxy(120,260,"flecha derecha mueve tu auto hacia la derecha");
outtextxy(120,280,"' B ' aumenta la velocidad de tu auto");
outtextxy(120,300,"' V ' disminuye la velocidad de tu auto");
outtextxy(120,320,"' C ' pausa tu juego");
outtextxy(120,340,"' S ' abandona tu juego");
setcolor(12);
outtextxy(120,140,"Estas son algunas recomendaciones que te sugiero:");
outtextxy(120,160,"  Si te gusta la velocidad no juegues contra otros");
outtextxy(120,180,"carros, juega solo y la carrera ser  m s r pida.");
outtextxy(120,200,"  La velocidad con que se mueva tu auto despu‚s de");
outtextxy(120,220,"que hayas oprimido alguna tecla depende de la");
outtextxy(120,240,"configuraci¢n de tu teclado, si deseas que sea m s");
outtextxy(120,260,"r pida la respuesta has lo siguiente:");
outtextxy(120,280,"1) Habre el panel de control");
outtextxy(120,300,"2) Selecciona teclado");
outtextxy(120,320,"3) Aumenta la velocidad de repetici¢n de caracteres");
outtextxy(120,340,"4) Disminuye el retraso de repetici¢n de caracteres");
getch();

setcolor(0);
outtextxy(120,140,"Estas son algunas recomendaciones que te sugiero:");
outtextxy(120,160,"  Si te gusta la velocidad no juegues contra otros");
outtextxy(120,180,"carros, juega solo y la carrera ser  m s r pida.");
outtextxy(120,200,"  La velocidad con que se mueva tu auto despu‚s de");
outtextxy(120,220,"que hayas oprimido alguna tecla depende de la");
outtextxy(120,240,"configuraci¢n de tu teclado, si deseas que sea m s");
outtextxy(120,260,"r pida la respuesta has lo siguiente:");
outtextxy(120,280,"1) Habre el panel de control");
outtextxy(120,300,"2) Selecciona teclado");
outtextxy(120,320,"3) Aumenta la velocidad de repetici¢n de caracteres");
outtextxy(120,340,"4) Disminuye el retraso de repetici¢n de caracteres");
setcolor(14);
settextjustify(1,1);
outtextxy(320,140,"A D V E R T E N C I A");
setcolor(12);
settextjustify(0,1);
outtextxy(120,160,"  No es necesario que cambies la configuraci¢n de");
outtextxy(120,180,"tu teclado.");
outtextxy(120,220,"Si no tienes idea de como cambiar la configuraci¢n");
outtextxy(120,240,"de tu teclado, no lo hagas, ya que el juego a£n as¡");
outtextxy(120,260,"funcionar  perfectamente.");
outtextxy(120,300,"  Disfruta tu juego.");
getch();

setcolor(14);
settextjustify(1,1);
cleardevice();
}

void campeon(int x, int y, int a, int b)//esta funcion imprime una copa y la meta
{
int xan, yan, yx=0;
setfillstyle(1,0);
bar(200,0,440,480);
do{
carro(x,y,a,b,xan,yan);
xan=x;
yan=y;
if(x>320)
  x--;
if(x<320)
  x++;
if(y>300)
  y--;
if(y<300)
  y++;
delay(10);
}while(x!=320 || y!=300);

do{
setcolor(0);
line(200,yx-41,440,yx-41);
setfillstyle(1,15);
bar(200,yx-40,440,yx);
setfillstyle(1,0);
bar(200,yx-40,210,yx-30);
bar(220,yx-40,230,yx-30);
bar(240,yx-40,250,yx-30);
bar(260,yx-40,270,yx-30);
bar(280,yx-40,290,yx-30);
bar(300,yx-40,310,yx-30);
bar(320,yx-40,330,yx-30);
bar(340,yx-40,350,yx-30);
bar(360,yx-40,370,yx-30);
bar(380,yx-40,390,yx-30);
bar(400,yx-40,410,yx-30);
bar(420,yx-40,430,yx-30);
bar(210,yx-30,220,yx-20);
bar(230,yx-30,240,yx-20);
bar(250,yx-30,260,yx-20);
bar(270,yx-30,280,yx-20);
bar(290,yx-30,300,yx-20);
bar(310,yx-30,320,yx-20);
bar(330,yx-30,340,yx-20);
bar(350,yx-30,360,yx-20);
bar(370,yx-30,380,yx-20);
bar(390,yx-30,400,yx-20);
bar(410,yx-30,420,yx-20);
bar(430,yx-30,440,yx-20);
bar(200,yx-20,210,yx-10);
bar(220,yx-20,230,yx-10);
bar(240,yx-20,250,yx-10);
bar(260,yx-20,270,yx-10);
bar(280,yx-20,290,yx-10);
bar(300,yx-20,310,yx-10);
bar(320,yx-20,330,yx-10);
bar(340,yx-20,350,yx-10);
bar(360,yx-20,370,yx-10);
bar(380,yx-20,390,yx-10);
bar(400,yx-20,410,yx-10);
bar(420,yx-20,430,yx-10);
bar(210,yx-10,220,yx);
bar(230,yx-10,240,yx);
bar(250,yx-10,260,yx);
bar(270,yx-10,280,yx);
bar(290,yx-10,300,yx);
bar(310,yx-10,320,yx);
bar(330,yx-10,340,yx);
bar(350,yx-10,360,yx);
bar(370,yx-10,380,yx);
bar(390,yx-10,400,yx);
bar(410,yx-10,420,yx);
bar(430,yx-10,440,yx);
if(yx<=200)
  yx++;
else
  if(y>=70)
  {
    carro(x,y,a,b,x,y+1);
    y--;
  }

delay(5);
}while(y>=70);

setcolor(12);
setfillstyle(1,14);
fillellipse(320,330,20,5);
rectangle(315,290,325,330);
bar(316,291,324,329);
sector(320,240,180,360,30,50);
fillellipse(320,240,30,5);
setcolor(4);
settextjustify(1,1);
outtextxy(320,265,"1ø");

setfillstyle(1,10);
bar(250,380,390,420);
setcolor(12);
outtextxy(320,400,"ERES EL CAMPEON");

delay(6000);

puntaje(10);
}

void puntaje(int n)//esta funcion imprime en pantalla la puntuacion
{
int cont=0;
if(n==10)
  setcolor(12);
else
  setcolor(9);
settextjustify(1,1);
for(cont=0;cont<=480;cont++)
  {
  line(0,cont,640,cont);
  delay(3);
  }
if(n==10)
  setcolor(4);
else
  setcolor(1);

rectangle(100,100,540,380);
rectangle(99,99,541,381);
rectangle(98,98,542,382);
rectangle(97,97,543,383);

   cont3=cont3*15;

outtextxy(320,120,"Estos son los puntos que obtuviste:");
if(n==10)
  {
  setcolor(14);
  outtextxy(320,320,"F E L I C I D A D E S     C A M P E O N");
  setcolor(4);
  }
else
  {
  setcolor(14);
  if(n==9)
    outtextxy(320,320,"Estabas a punto de ser campe¢n");
  if(n==8)
    outtextxy(320,320,"Te falto tan solo un poco m s");
  if(n==7)
    outtextxy(320,320,"Tienes un buen nivel para SPEEDCAR F-1");
  if(n==6)
    outtextxy(320,320,"Te hace falta practicar");
  if(n==5)
    outtextxy(320,320,"A£n eres un novato");
  if(n==4)
    outtextxy(320,320,"Toma clases de manejo");
  if(n==3)
    outtextxy(320,320,"¨Eres principiante?");
  if(n==2)
    outtextxy(320,320,"¨Fu‚ tu mejor esfuerzo?");
  if(n==1)
    outtextxy(320,320,"¨Que tal otro intento?");
  setcolor(1);
  }

settextjustify(2,1);
outtextxy(400,170,"Puntos Extra:");
gotoxy(53,11);
printf("%10.2lf",bonus);
   bonus=bonus+(100*(end - start) / CLK_TCK)+cont3;
outtextxy(400,200,"Tiempo:");
gotoxy(53,13);
printf("%10.2lf", (end - start) / CLK_TCK);
outtextxy(400,230,"Entradas:");
gotoxy(53,15);
printf("%10d",cont3);
outtextxy(360,265,"Puntuaci¢n Final:");
gotoxy(49,17);
printf("%14.2lf",bonus);
delay(8000);
}