#include<stdio.h>

float num1, num2, Resul;

main()
{
	printf("Numero 1: ");
	scanf("%f", &num1);
	
	printf("Numero 2: ");
	scanf("%f", &num2);
	
	if(num1!=num2)
	{
		Resul= 3*(num1+num2);
		
		printf("\nResultado: %.2f\n", Resul);
	
	}
	
	system("pause");
	
}
