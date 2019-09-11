#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

int main()
{
    char frase[20];

    printf("RESPUESTA: ");
    gets(frase);

    if(strcmp(frase, "hola mundo")== 0){

        printf("\n\nCORRECTO\n\n");

    }else{

        printf("\n\nINCORRECTO\n\na");

}


    return 0;
}
