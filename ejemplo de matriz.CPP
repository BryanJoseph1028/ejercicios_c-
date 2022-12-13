#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <time.h>

int main()
{
	int matriz[3][3];
	int i,j,x,y,r;


	for (i=0;i<=2;i++)  //Llenado de matriz
	{
		for (j=0;j<=2;j++)
		{
			printf ("Ingrese el valor de la matriz");
			scanf ("%d",&matriz[i][j]);
		}
	}
	for (i=0;i<=2;i++)  //Imprime la matriz 3x3
	{
		for (j=0;j<=2;j++)
		{
			printf (" %d",matriz[i][j]);
		}
		printf ("\n");
	}
    return 0;
    system("pause");
}