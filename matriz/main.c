#include <stdio.h>
#include <stdlib.h>

void mostrarNombres( char mat[][20]);
int main()
{
    char nombres[5][20]; // MATRIZ MULTIDIMENSIONAL (PRIMER CORCHETE FILAS) (SEGUNDO CORCHETE ESPACIOS RESERVADOS)



    for(int i= 0; i<5; i++){
        printf("INGRESE UN NOMBRE: ");
        fflush(stdin);
        gets(nombres[i]);

    } // PIDE 5 NOMBRES

    for(int i=0; i<5; i++){

        printf("%s\n", nombres[i]);

    } // MUESTRA LOS 5 NOMBRES




    return 0;
}
