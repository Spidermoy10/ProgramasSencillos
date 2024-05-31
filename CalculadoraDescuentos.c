#include <stdio.h>

float Pmax, Desc, Ppublic;

main()
{
	printf("Precio maximo al publico ");
	scanf("%f", &Pmax);
	
	Desc=Pmax*0.3;
	Ppublic=Pmax-Desc;
	
	printf("Descuento es: %.2f\n", Desc);
	printf("Precio a pagar: %.2f\n",Ppublic);
	
	system("pause");
}

