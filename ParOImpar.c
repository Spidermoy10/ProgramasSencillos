#include<stdio.h>//Biblioteca a utilizar

main(){//Abre funci�n principal
       int num;//Variable para numero
       int triple;//Variable para el triple
       int resta;//Variable de la resta 
       
       printf("Ingresa un numero entero");//Imprime un n�mero entero
       scanf("%f",&num);//Lee el n�mero ingresado
       
       if(num % 2 == 0){//Abre if con su condicion
                    triple=3*num;//Triplica el n�mero
                    printf("El triple del numero es: %d ",triple);//Imprime el resultado del triple del numero
                    }//Cierra if
       else{//Abre else
            resta=num-1;//resta uno al numero
            printf("El numero anterior es: %d ",resta);//Iimprime el resultado del numero anterior menos uno
            }//Cierra else
            
            system("pause");//realiza una pausa
       }
