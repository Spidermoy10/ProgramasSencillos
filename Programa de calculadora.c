#include<stdio.h>
int num1, num2, Res; 
char ope; char carac; int a;
main(){
	do{
		printf("Ingresa un primer numero: ");
		scanf("%d", &num1);		
	    printf("Ingresa algun operador: ");
		scanf("%s", &ope);
		printf("Ingresa un primer numero: ");
		scanf("%d", &num2);
	
		switch(ope){
				case '+':
					printf("\nSUMA.\n\n");
					Res=num1+num2;
					printf("\nEl resultado es: %d", Res);
				  break;
				case '-':
					printf("\nRESTA.\n\n");
					Res=num1-num2;
					printf("\nEl resultado es: %d", Res);
				  break;	
				case '*':
					printf("\nMULTIPLICACION.\n\n");
					Res=num1*num2;	
					printf("\nEl resultado es: %d", Res);
				  break;
				case '/':
					printf("\nDIVISION.\n\n");
					  if(num2==0){
						  printf("Error!\n\n");
				                 }
					else{
					    Res=num1/num2;		
					    printf("\nEl resultado es: %d", Res);
				        }
				   break;
				default:
				   printf("Operador incorrecto.\n\n");		
			       }
			printf("\n\nQuieres intentar de nuevo? "); 
			scanf("%s", &carac);
	   system("cls");
	     	}while(carac=='s');
    system("pause");
}
                                                           
