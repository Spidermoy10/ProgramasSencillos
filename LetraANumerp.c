#include <stdio.h>
#include <windows.h>

char cadena[50];
int i=0;
int S,G,T,B,P,I,O,E,A;

 main()
{
 
    
    printf("Ingresa una palabra<en may%csculas> a modificar:\n ",163);
    scanf("%d",&cadena);
    printf("\n");
    
    while(cadena[i]!=0)
	{
        i++;
    }
    printf("La palabra modificada es:\n ");
    for ( i=0; i<=500; i++)
    {
    	if (cadena [i] == '1')
    	{
    		cadena [i] = '2';
		}
		if (cadena[i] == '2')
		{
			cadena[i] = '1';
		}
		if (cadena[i] == '3')
		{
			cadena [i] = '4';
		}
		if (cadena[i]== '4')
		{
			cadena [i] = '3';
		}
		if (cadena[i]== '5')
		{
			cadena [i] = '6';
		}
		if (cadena[i]== '6')
		{
			cadena [i] = '7';
		}
		if (cadena[i]== 'T')
		{
			cadena [i] = '7';
		}
		if (cadena[i]== 'B')
		{
			cadena [i] = '8';
		}
		if (cadena[i]== 'P')
		{
			cadena [i] = '9';
		}
		printf ("%c", cadena[i]);
	}
system("pause");
   
}
