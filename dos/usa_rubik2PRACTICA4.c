#include <stdio.h>
#include "rubik2.h"

int main(){
    char cadena[500];/*esta cadena sirve para que se pueda imprimir el cubo sin ningún problema*/
    cubo2 cuboSaid;

    int semilla = 18; /*Semilla para desarmar el cubo aleatoriamente*/


    ini_cub2(&cuboSaid); /*Inicializa el cubo*/

    printf("%s\n",tostr_cub2(cadena,&cuboSaid));/*Imprime el cubo inicializado*/

    mezcl_cub2(&cuboSaid, semilla); /*Mezcla el cubo aleatoriamente con la semilla*/

    printf("Cubo desarmado\n");
    printf("%s\n",tostr_cub2(cadena,&cuboSaid));  
    /*Armando la cara blanca*/
   
    
    
    printf("%s\n",tostr_cub2(cadena,&cuboSaid));  
    

    return 0;
}