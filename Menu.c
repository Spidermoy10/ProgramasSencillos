//P.Selectivo primero con uso de estructura switch elije un guisado con caracteres

#include<stdio.h>//incluye la libreria estandar de e/s

main(){//Abre main

              char opcion;//declara la variable de la opcion
              
              //imprime el menu de pantalla
              puts("Elija una opcion del siguiente menu para pedir un platillo");
              puts("Letra \t Opcion");
              puts(" S \t Sopa");
              puts(" A \t Arroz");
              puts(" F \t Frijoles");
              
              scanf("%s",&opcion);//lee la opcion
              //scanf("%c",&opcion);//otr4a forma de leer el caracter
              
              switch (opcion){//abre switch
              case 'S'://abre el caso 'S' para sopa
              case 's':
                   printf("Pidio sopa\n");//imprime la elección del caso
                   break;//cierra el caso
              case 'A'://abre el caso 'A' para el arroz
              case 'a':     printf("Pidio arroz\n");//imprime la elección del caso
                   break;//cierra el caso
              case 'F'://abre el caso 'F' para frijoles
              case 'f':
                   printf("Pidio frijoles\n");//imprime la elección del caso
                   break;//cierra el caso
              default://abre el caso default
                   printf("Opcion incorrecta, no hay de eso.\n");//imprime el caso
                   break;//cierra el caso
                                  }//cierra el switch
                   
                   system("pause");//pausa para windows
                   
                   }//cierra main
