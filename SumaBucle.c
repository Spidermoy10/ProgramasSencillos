// Programa con estructura for
#include<stdio.h>

int in, fin, step, i; 
int acu=0;
int x=0;

main()
{
      printf("Teclear los valores de: inicio, fin e incremento: ");
      scanf("%d %d %d",&in,&fin,&step);
      
        for(i=in; i<=fin; i+=step)
        {
           printf("i=%d\n", i);
           acu=acu+i;
           x++;
        }
      printf("La suma de los numeros es: %d\n", acu);
      printf("las iteraciones totales fueron: %d\n", x);
      
system("pause");
}
