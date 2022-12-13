#include <iostream.h>
#include <conio.h>

int suma(int a, int b, int &r, int &m, float &d)
{	r = a - b;
	m = a * b;
	d = a / b;
	return a + b;
}
void main()
{	int rest, mult;
	float div;
	cout<<" 7 + 5 = "<<suma(7,5,rest,mult,div)<<endl;
	cout<<"7 - 5 = "<<rest<<endl;
	cout<<"7 * 5 = "<<mult<<endl;
	cout<<"7/5 = "<<div;
	getch();
}
