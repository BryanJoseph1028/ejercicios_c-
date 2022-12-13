#include <iostream.h>
#include <conio.h>
void suma(int a, int b, int &r)
{
r=a+b;
}
void main()
{
int x;
suma(7,5,x);
cout<<"7+5="<<x;
getch();
}