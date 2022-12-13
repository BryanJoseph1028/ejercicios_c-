#include <stdio.h>
#include <dos.h>
#include <conio.h>
#include <iostream.h>
#include <windows.h>
#include <math.h>
main()
{
int i, b, c, d, e, f;
for(i=1; i<50; i++)
{
gotoxy(i,i);
Sleep(50);
cout<<"HOLA UMG";
}

for(i=1; i<50; i++)
{
gotoxy(i,i);
Sleep(50);
cout<<"----------";
}

for(b=1; b<10; b++)
{
gotoxy(b,b+3);
Sleep(50);
cout<<"Hola Umg";
cout<<"---------";
}

for(b=1; b<10; b++)
{
gotoxy(b,b+3);
Sleep(50);
cout<<"---------";
}

for(e=1; e<8; e++)
{
gotoxy(e*e,3);
Sleep(50);
cout<<"---------";
}
for(f=7; f<12; f--);
{
gotoxy(f+f,3);
Sleep(50);
}
getch();
}