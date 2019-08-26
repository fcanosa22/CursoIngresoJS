#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int nota;
    int notaMaxima;
    int notaMinima;
    int contMujeres = 0;
    int contador = 0;
    int acumNotas = 0;
    int acumNotasF = 0;
    int flag = 0;
    float promedio;
    float promedioF = 0;
    char nombre[20];
    char nombreMin[20];
    char nombreMax[20];
    char sexo;
    char sexoMin;
    char sexoMax;
    char seguir;

    do{
        contador++;

        printf("\nIngrese nombre: ");
        fflush(stdin);
        gets(nombre);

        printf("Ingrese sexo: ");
        fflush(stdin);
        scanf("%c", &sexo);

        while(sexo!='f' && sexo!='m'){
        printf("Error, ingresa sexo f o m: ");
        fflush(stdin);
        scanf("%c", &sexo);

        }

        printf("Ingrese nota entre 0 y 10: ");
        scanf("%d", &nota);

        while(nota<0 || nota>10){
            printf("Error, ingrese nota entre 0 y 10: ");
            scanf("%d", &nota);
            }

            acumNotas += nota;
            contador++;

            if(sexo=='f'){
                acumNotasF+= nota;
                contMujeres++;
            }

            if(nota>notaMaxima || flag == 0){
                notaMaxima = nota;
                sexoMax= sexo;
                strcpy(nombreMax, nombre);
            }

            if(nota< notaMinima || flag == 0){
                notaMinima = nota;
                sexoMin = sexo;
                strcpy(nombreMin, nombre);
                flag = 1;

            }

            printf("\nQuiere continuar?: ");
            fflush(stdin);
            scanf("%c", &seguir);

        }while(seguir == 's');

        promedio = (float) acumNotas/ contador;

        if(contMujeres != 0)
            promedioF = acumNotasF / contMujeres;

        printf("Promedio de notas %.2f\n", promedio);
        printf("Promedio de notas de mujeres %.2f\n", promedioF);
        printf("Nota maxima: %d  Nombre: %s  sexo: %c\n", notaMaxima, nombreMax, sexoMax);
        printf("Nota minima: %d  Nombre: %s  sexo: %c\n", notaMinima, nombreMin, sexoMin);

    return 0;
}
