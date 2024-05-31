#include<stdio.h>

int cal,mat;

main()
{
	printf("Matricula del estudiante: ");
     scanf("%d",&mat);
     
	printf("Calificacion del estudiante: ");
	scanf("%d", &cal);
	
	switch(cal)
	{
		case 10:
			printf("Buen trabajo\n");
		break;
		
		case 9:
			printf("Sigue asi\n");	
	    break;
		
		case 8:
			printf("Haces bien\n");
		break;
		
		case 7:
			printf("De pansazo\n");
		break;
		
		case 6:
			printf("Lo siento\n");
		break;
		default:
			printf("Recursar\n");
	}
	
	while(cal==6)
	{
		cal=cal+1;
		
		printf("Me caes bien, te regalo 1 punto.\n");
		printf("Tu calificacion sube a 7.\n");
	}
	
  system("pause");
}
