#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <string.h>
#include <conio.h>

int main()
{

int opcion;
int opcion2;
int codigo;
int clave;
int anden;
int hogwarts;
int energia = 100;
int hechizo;
int harryCumple;
int rose;
int rejunte;
int toalla;
int negra;
char seguir = 's';
char frase[20];
char fraseWalter[30];
char notaCortada[50];
char acertijo[30];
char theme[20];
char flores[20];
char retoUno[50];
char vincent[30];
char ladrillos[10];
char bebe[10];
char beso[50];
char mapa[70];
char travezura[40];




system("color 3");

printf(" >>>>>> BIENVENIDA MI AMOR, FELIZ PRIMER ANIO!! <<<<<<\n\n\n");

printf("              **********   **********\n");
printf("            ************* *************\n");
printf("           *****************************\n");
printf("           *****************************\n");
printf("           *****************************\n");
printf("            ***************************\n");
printf("              ***********************\n");
printf("                *******************\n");
printf("                  ***************\n");
printf("                    ***********\n");
printf("                      *******\n");
printf("                        ***\n");
printf("                         *\n\n\n\n");
printf("            ::: ESPERO QUE TE GUSTE!! :::\n\n\n");
printf("\n\n");



system("pause");

//-----------------------------------------------------------------------------------

system("cls");
system("color 3");
printf(":::::: REGLAS ::::::\n\n");
printf("Las reglas son basicas, solo tenes que leer atentamente cada cosa, seguir los\n pasos y en alguna que otra situacion deberas usar la logica!!.\n\n\n\n");

printf(":::::: ACLARACIONES ::::::\n\n");

printf("Probablemente haya situaciones que no recuerdes y necesites de una ayuda\n externa, para resolver estos casos podes usar google libremente.\n\n\n\n");

printf(":::::: ANOTACIONES ::::::\n\n");
printf("El lenguaje C no permite el caracter enie. Vas a encontrarte muchas palabras asi\n no es falta de ortografia!!\n\n\n\n");

system("pause");

//-----------------------------------------------------------------------------------


    system("cls");
    system("color 05");

    printf(":::: ESTAS LISTA PARA EMPEZAR?, (RESPONDE 'S' O 'N') ::::\n\n");




   do{

    printf(">>> S PARA EMPEZAR, N PARA SALIR!! <<<\n\n");
    fflush(stdin);
    scanf("%c", &seguir);



    } while(seguir!= 's' && seguir!= 'n');

    system("CLS");

    if(seguir == 'n'){
        printf("BYE!!\n\n\n");
    }

    if(seguir == 's'){



    do{

        system("color 6");
        system("CLS");

        printf(">>>>>> INGRESASTE AL NIVEL 1 <<<<<<\n\n\n");

        printf("::: RESUELVE ESTA PREGUNTA PARA DESBLOQUEAR EL NIVEL 2 :::\n\n\n");


        printf("::: QUE FECHA FUE NUESTRO PRIMER BESO? :::\n\n");

        printf("[1]- 17 DE OCTUBRE\n");
        printf("[2]- 23 DE SEPTIEMBRE\n");
        printf("[3]- 21 DE SEPTIEMBRE\n");


        switch(opcion){

        case 1:

            printf("\n:::::: INCORRECTO, VUELVE A INTENTAR ::::::\n\n");
            break;


        case 2:

            printf("\n:::::: INCORRECTO, VUELVE A INTENTAR ::::::\n\n");
            break;

        case 3:

            printf("CORRECTO!!");
            break;


        }



          printf("\nELEGI UNA OPCION: ");

            scanf("%d", &opcion);





        }while(!(opcion == 3));

        if(opcion==3){
                system("CLS");
            printf(">>>> CORRECTO!! <<<<\n\n\n");
            system("pause");

// ------------------------------------------------------------------------------

                 do{



        system("color 02");
        system("CLS");

        printf(">>>>>> INGRESASTE AL NIVEL 2 <<<<<<\n\n\n");

        printf("::: RESUELVE ESTA PREGUNTA PARA DESBLOQUEAR EL NIVEL 3 :::\n\n\n");

        printf("::: PROBEMOS TU MEMORIA VISUAL :::\n\n\n");


        printf("::: COMO ESTABA VESTIDO EL DIA QUE VINISTE A MI CASA POR PRIMERA VEZ? :::\n\n");

        printf("[1]- CAMISA BLANCA, JEAN NEGRO\n");
        printf("[2]- CAMISA AZUL, JEAN AZUL\n");
        printf("[3]- CAMISA AZUL, JEAN NEGRO\n");
        printf("[4]- CAMISA BLANCA, JEAN AZUL\n");

         switch(opcion2){


        case 1:

            printf("\n :::::: INCORRECTO, VUELVE A INTENTAR ::::::\n\n");

            break;


        case 2:
            printf("\nCORRECTO!!\n\n");

            break;

        case 3:
            printf("\n:::::: INCORRECTO, VUELVE A INTENTAR ::::::\n\n");

            break;

        case 4:

            printf("\n:::::: INCORRECTO, VUELVE A INTENTAR ::::::\n\n");

            break;


        }


          printf("\nELEGI UNA OPCION: ");
          fflush(stdin);
            scanf("%d", &opcion2);



        }while(!(opcion2 == 2));

        if(opcion2 ==2){
                system("CLS");
            printf(">>>> CORRECTO!! <<<<\n\n\n");
            system("pause");

// ---------------------------------------------------------------------------------------
                 do{



        system("color 0C");
        system("CLS");

        printf(">>>>>> INGRESASTE AL NIVEL 3 <<<<<<\n\n\n");

        printf("::: ENCONTRA LA CLAVE PARA DESBLOQUEAR EL NIVEL 4 :::\n\n\n");

        printf("::: PISTA: DONDE ESTA TU CAMPERA VERDE? :::\n\n\n");


        printf("::: CODIGO: ");
        fflush(stdin);
        scanf("%d", &codigo);

        if(codigo!= 21092018){
            printf("\n:::::: CODIGO INCORRECTO ::::::\n\n");
            system("pause");
        }


        }while(!(codigo == 21092018));



        if(codigo ==21092018){
                system("CLS");
            printf(">>>> CORRECTO!! <<<<\n\n\n");
            system("pause");

// ---------------------------------------------------------------------------------------

            do{


        system("color E");
        system("CLS");

        printf(">>>>>> INGRESASTE AL NIVEL 4 <<<<<<\n\n\n");

        printf("::: HASTA AHORA UN POCO FACIL NO...? :::\n\n\n");

        printf("------ PASEMOS A LA COMPLEJIDAD ------\n\n\n");

        printf("::: Ni paya, ni gitana, ni mora, ni cristiana, aqui somos todas mujeres, duenias de: _____________ :::\n\n\n");

        printf("RESPUESTA: ");

        gets(frase);




        }while(!strcmp(frase, "nosotras mismas")== 0); // FIN DEL DO WHILE DEL NIVEL 4


         if(strcmp(frase, "nosotras mismas")== 0){
                system("CLS");
            printf(">>>> JAJAJ MUY BIEN <<<<\n\n\n");
            system("pause");


// ---------------------------------------------------------------------------------------

        do{

        system("color 2F");
        system("CLS");

        printf(">>>>>> INGRESASTE AL NIVEL 5 <<<<<<\n\n\n");

        printf("::: MIENTRAS SEGUIS TU CAMINO, A LO LEJOS SE PUEDE ESCUCHAR UN\n EXTRANIO SUSURRO... :::\n\n\n\n\n");

        printf("::: SUSURRO:  I am not in danger, carolina. I __________ :::------\n\n\n");

        printf("::RESPUESTA: ");

        gets(fraseWalter);


        }while(!strcmp(fraseWalter, "am the danger")== 0); // FIN DEL DO WHILE DEL NIVEL 5


        if(strcmp(fraseWalter, "am the danger")== 0){
                system("CLS");
            printf(">>>> ALGO RARO PASA, HAY UNA ESPECIE DE TEMBLOR EN EL SUELO <<<<\n\n\n");
            printf("[:::: EMPEZAS A CORRER ::::]\n\n\n");
            system("pause");

// ---------------------------------------------------------------------------------------

        do{

        system("color 2F");
        system("CLS");

        printf(">>>>>> ENCONTRASTE UN BOSQUE QUE TIENE MALA PINTA, AUN ASI DECIDIS ENTRAR <<<<<<\n\n");

        printf("::: ESTA COMENZANDO A LLOVER!, [TE REFUGIAS RAPIDAMENTE EN UNA CABANIA\n QUE ENCONTRASTE] :::\n\n");
        printf("[.......]\n\n");

        printf("- CARO: Esta cabania parece abandonada, hay mucha tierra y escombros..\n");
        printf("- CARO: Mmm ojala estuviera harry styles aca conmigo.\n");
        printf("- CARO: [...]\n");
        printf("- CARO: Eso es un esqueleto??.. donde mierda estoy!!\n\n");

        printf(">>> SE PUEDE OBSERVAR UN LIBRO VIEJO Y SOMBRIO ARRIBA DE UNA MESA, Y\n UN GATO NEGRO CON COMPORTAMIENTO EXTRANIO <<<\n\n");

        printf("-CARO: Si llego a ver una arania me muero aca. Esta muy oscuro, aca hay una vela pero no se si va a encender.\n");
        printf("-CARO: [...], Que vela tan rara..\n");
        printf("-CARO: Hay una nota, pero no se entiende bien lo que dice.\n\n");
        printf("::NOTA: las hermanas resucitaran cuando en una luna llena en la vispera del dia\n de todos los santos, cualquier..........\n\n");

        printf("RESPUESTA: ");
        gets(notaCortada);


        }while(!strcmp(notaCortada, "virgen encienda la vela de llama negra")== 0); // FIN DEL DO WHILE DEL NIVEL 6 o INGRESO AL BOSQUE

         if(strcmp(notaCortada, "virgen encienda la vela de llama negra")== 0){
                system("CLS");
            printf(">>>> ALGO RARO PASA, HAY UNA ESPECIE DE TEMBLOR EN EL SUELO <<<<\n\n\n");
            printf("[:::: EMPEZAS A CORRER ::::]\n\n");
            system("pause");

// ---------------------------------------------------------------------------------------

        do{

        system("color 0D");
        system("CLS");

        printf(">>>>>> EL BOSQUE ESTABA MUY OSCURO, MIENTRAS CORRIAS TROPEZASTE Y TE CAISTE POR UNA COLINA.. <<<<<<\n\n");

        printf("::: DESPUES DE UN TIEMPO ESTANDO DESMAYADA, ENCONTRAS UN ARBOL ENORME\n Y DE ASPECTO RARO :::\n\n");

        printf(">>> SE PUEDE OBSERVAR UNA PUERTA ROJA COMO ENTRADA AL ARBOL <<<\n\n");

        printf("-CARO: La puerta no abre..\n");
        printf("-CARO: Creo que tiene un candado con clave.\n");
        printf("[...]\n");
        printf("-CARO: Mm, parece que solo se pueden poner 4 digitos.\n");

        printf("-CARO: Anda a cagarrr, anda a saber cual es la clave!.\n");
        printf("[...]\n");

        printf("-CARO: Ojala tuviera suerte...\n\n");


        printf("::CLAVE: ");
        fflush(stdin);
        scanf("%d", &clave);

        if(clave!= 3319){
            printf("\n:::::: CLAVE INCORRECTA ::::::\n\n");
            system("pause");
        }


        }while(!(clave == 3319));


            if(clave ==3319){
                system("CLS");
            printf(">>>> CLAVE CORRECTA!! <<<<\n\n\n");
            printf("::: ABRISTE LA PUERTA Y ENTRAS.. :::\n\n\n");
            system("pause");

// ---------------------------------------------------------------------------------------

        do{

        system("color 0C");
        system("CLS");

        printf(">>>>>> [.......] <<<<<<\n\n");

        printf("-CARO: Que mierda es este lugar??, parece una estacion de trenes.. pero como???.\n");
        printf("-CARO: Veo que no puedo volver atras.\n");
        printf("[...]\n");
        printf("-CARO: Desde aca puedo ver dos carteles.\n");
        printf("-CARO: El primer cartel dice 'INGRESO AL ANDEN 5'.\n");
        printf("-CARO: El segundo cartel dice 'INGRESO AL ANDEN 9 Y 3/4'.\n");
        printf("-CARO: Por donde me mandare??.\n\n");

        printf("[1]- ANDEN 5\n");
        printf("[2]- ANDEN 9 Y 3/4\n\n");

        printf("ELEGI UNA OPCION: ");
        fflush(stdin);
        scanf("%d", &anden);


        switch(anden){

    case 1:
        printf("\n:::::: NO CREO QUE IR POR ESTE ANDEN SEA BUENA IDEA ::::::\n\n");
        system("pause");
        break;


}


        }while(!(anden==2));



        if(anden==2){
                system("CLS");
            printf(">>>> ENTRASTE AL ANDEN '9 Y 3/4' Y TE SUBIS A UN ENORME TREN ROJO <<<<\n\n\n");
            printf(">>> [...] <<<\n");
            printf(">>>>>> BAJAS DEL TREN Y VES QUE TE ESTA ESPERANDO UN HOMBRE\n ALTO CON BARBA, CON UN BOTE AL LADO  <<<<<<\n\n");
            printf("::: ES HAGRID!!, Y PARECE QUE TE VA A LLEVAR HACIA EL CASTILLO QUE SE VE A LO\n LEJOS.. :::\n\n");
            system("pause");


// ---------------------------------------------------------------------------------------

        do{

        system("color 0F");
        system("CLS");

        printf(">>>>>> BIENVENIDA JOVEN MAGA, LLEGASTE A HOGWARTS  <<<<<<\n\n");
        printf("::: DEBERAS ELEGIR UNA DE LAS 4 CASAS EMBLEMATICAS PARA AVANZAR:::\n\n");

        printf("[1]- GRYFFINDOR\n");
        printf("[2]- HUFFLEPUFF\n");
        printf("[3]- RAVENCLAW\n");
        printf("[4]- SLYTHERIN\n\n");

        printf("ELEGI UNA OPCION: ");
        fflush(stdin);
        scanf("%d", &hogwarts);


    if(hogwarts==1){

        printf("\nGRYFFINDOR?, QUE CLICHE QUE SOS!!\n\n");
        system("pause");

    }else if(hogwarts==2){
        printf("\nHUFFLEPUFF??, JAJA EN SERIO??\n\n");
        system("pause");

    }
    if(hogwarts==4){
        printf("\nNO SOS UNA SANGRE PURA..\n\n");
        system("pause");

    }


        }while(!(hogwarts== 3));


        if(hogwarts == 3){

  // ---------------------------------------------------------------------------------------

        do{

        system("color 9F");
        system("CLS");
        printf(">>>> AHORA SOS ALUMNA DE LA CASA RAVENCLAW!! <<<<\n\n\n");

        printf("::: CAMINAS HACIA LA TORRE DE RAVENCLAW :::\n\n");

        printf("-La Torre de Ravenclaw se encuentra en el lado oeste de Hogwarts, la escalera\n que conduce a la sala comun se encuentra probablemente en el septimo piso,\n y es la ubicacion de la Sala Comun de Ravenclaw y los dormitorios.\n La entrada a la sala comun se encuentra en la parte superior de\n una escalera de caracol, y es una puerta sin pomo de una puerta o cerradura,\n con una aldaba de bronce en forma de un aguila. Con el fin de entrar en la sala\n una persona debe responder a un acertijo planteada por el\n llamador de aguila\n\n");

        printf("::ACERTIJO: >> Que fue primero, el ave fenix, o la llama? <<\n\n");

        printf("RESPUESTA: ");
        gets(acertijo);


        }while(!strcmp(acertijo, "un circulo no tiene principio")== 0);


        if(strcmp(acertijo, "un circulo no tiene principio")==0){

 // ---------------------------------------------------------------------------------------

        do{

        system("color 9F");
        system("CLS");
        printf(">>>> PERFECTO, PARECE QUE SOS DIGNA DE PERTENECER A RAVENCLAW.. <<<<\n\n\n");

        printf("::: RECORRES LOS PASILLOS MIENTRAS UNA CANCION SUENA EN TU CABEZA.. :::\n\n");

        printf("::CANCION: She's a good girl, She's such a good girl Yeah, She's a good girl,\n She _______\n\n");

        printf("::RESPUESTA: ");

        gets(theme);

        }while(!strcmp(theme, "feels so good")== 0);

        if(strcmp(theme, "feels so good")==0){

  // ---------------------------------------------------------------------------------------

        do{

        system("color 9F");
        system("CLS");
        printf(">>>> DE REPENTE MIRAS POR UNA VENTANA, ESTA VENTANA DA HACIA EL PATIO <<<<\n\n\n");
        printf("::: ESCUCHAS MURMULLOS.., SON GEORGE Y FRED WEASLEY DISCUTIENDO :::\n\n");
        printf("::: [.....] :::\n\n");
        printf(">>>> OBSERVAS QUE ARROJAN UN PERGAMINO VIEJO A LA BASURA Y SE VAN <<<<\n\n\n");

        printf("-CARO: Mm que sera ese papel??\n\n");

        printf(">>>> COMO TODA RAVENCLAW CURIOSA VAS A CHUSMEAR EL TACHO DE BASURA <<<<\n\n");
        printf("::: [.....] :::\n\n");
        printf("::: AGARRAS EL PERGAMINO Y TE LO GUARDAS PARA VERLO LUEGO :::\n\n");
        printf("::: [.....] :::\n\n");
        printf(">>> TE CRUZAS A DRACO MALFOY <<<\n\n");

        printf("-DRACO MALFOY: Esta no es hora para que ninias tontas anden por aca\n");
        printf("-CARO: Yo tonta??, vamos a ver quien es el tonto\n\n");

        printf("::: DEBES INTENTAR DESARMAR A MALFOY CON ALGUNO DE TUS DOS HECHIZOS DISPONIBLES :::\n\n\n");

        printf(":::::::::::::::::::::::::::::::::::::::::::::::::::::::\n\n");

        printf("DRACO MALFOY [ENERGIA: [ %d ]\n\n\n", energia);

        printf("::USA TUS HECHIZOS DISPONIBLES::\n\n");
        printf("[1]- EXPELLIARMUS (Quita 10 de energia)\n");
        printf("[2]- FLIPENDO (Quita 15 de energia)\n\n");
        printf("ELEGI UNA OPCION: ");
        fflush(stdin);
        scanf("%d", &hechizo);

        if(hechizo == 1){
                energia = energia - 10;
            printf("\n:::EXPELLIARMUS:::\n EXCELENTE!, SEGUI INTENTANDO\n\n\n");
            system("pause");

        }else if(hechizo == 2){
                energia = energia - 15;
            printf("\n:::FLIPENDO:::\n EXCELENTE!, SEGUI ASI\n\n\n");
            system("pause");
        }

        if(!(hechizo == 1 || hechizo== 2)){
           printf("\nINGRESA UNA OPCION CORRECTA!!\n");
           system("pause");
           }


        }while(!(energia == 10 || energia <10));

        if(energia ==10 || energia <10){

            printf("\n\n>>> LOGRASTE DESARMAR A DRACO MALFOY <<<\n\n\n");

            printf("-DRACO MALFOY: Esta vez fue solo suerte, ya nos volveremos a encontrar!!!\n\n\n");

            system("pause");


 // ---------------------------------------------------------------------------------------

         do{

        system("color 9F");
        system("CLS");
        printf(">>>> DESPUES DE HUMILLAR AL SALAME DE MALFOY SEGUIS TU CAMINO TRANQUILA <<<<\n\n\n");
        printf(":::: TE CRUZAS A DOBBY, PARECE QUE QUIERE DECIRTE ALGO.. ::::\n\n");
        printf("-DOBBY: Hola caro.. tengo algo que quizas pueda interesarte.\n");
        printf("-CARO: Explicate mas..\n");
        printf("-DOBBY: Primero deberas traerme algo.. algo que me encanta.\n\n");
        printf("::PISTA: HABITACION\n\n");
        printf("::QUE ENCONTRASTE?: ");
        fflush(stdin);
        gets(flores);

        }while(!strcmp(flores, "flores")== 0);

        if(strcmp(flores, "flores")== 0){

        printf("\n\n-DOBBY: Sii!!, me encantan los jazmines, con esto podre hacer la pocion magica\n que necesito.\n");
        printf("-CARO: Bien dobby ya tenes lo que querias, ahora decime mas sobre lo que tenes.\n");
        printf("-DOBBY: Hiciste un buen trabajo, pero no es sencillo.. deberas seguir una serie de pasos para finalizar.\n\n");
        system("pause\n\n\n");

  // ---------------------------------------------------------------------------------------

          do{

        system("color 3");
        system("CLS");
        printf(">>>> COMIENZO DEL RETO <<<<\n\n\n");


        printf("::: RETO 1 :::\n\n");

        printf("Aunque me enganie y me diga que no, siempre estas tu detras de mi mejor yo\n aunque no soy pa ti que soy pa contigo,_______________\n\n");

        printf("::RESPUESTA: ");
        fflush(stdin);
        gets(retoUno);

        if(!strcmp(retoUno, "el mundo es tan redondo como el piercing de tu ombligo")==0){
            printf("\n:::INCORRECTO:::\n\n");
            system("pause");

            }


        }while(!strcmp(retoUno, "el mundo es tan redondo como el piercing de tu ombligo")==0);

        if(strcmp(retoUno, "el mundo es tan redondo como el piercing de tu ombligo")==0){

            printf("\n:::CORRECTO:::\n\n");
            system("pause");

 // ---------------------------------------------------------------------------------------

        do{


        system("color 3");
        system("CLS");
        printf(">>>> COMIENZO DEL RETO <<<<\n\n\n");


        printf("::: RETO 2 :::\n\n");

        printf("HARRY STYLES BIRTHDAY?\n\n");

        printf("[1]- 5 DE MARZO\n");
        printf("[2]- 19 DE ENERO\n");
        printf("[3]- 13 DE FEBRERO\n");
        printf("[4]- 1 DE FEBRERO\n\n");

        printf("ELEJI UNA OPCION: ");
        fflush(stdin);
        scanf("%d", &harryCumple);

        if(harryCumple!=4){
            printf("\n:::INCORRECTO:::\n\n");
            system("pause");
        }


        }while(!(harryCumple == 4));

        if(harryCumple == 4){
            printf("\n:::CORRECTO:::\n\n");
            system("pause");

 // ---------------------------------------------------------------------------------------

        do{

        system("color 3");
        system("CLS");
        printf(">>>> COMIENZO DEL RETO <<<<\n\n\n");

        printf("::: RETO 3 :::\n\n");

        printf("COMPLETA LA FRASE\n\n");

        printf("Para un ninio de su edad es considerado y amable pero el quiere ser tal\n como _______\n\n");

        printf("::RESPUESTA: ");
        gets(vincent);


        }while(!strcmp(vincent, "vincent price")==0);

        if(strcmp(vincent, "vincent price")==0){

            printf("\nCORRECTO\n\n");
            system("pause");

 // ---------------------------------------------------------------------------------------

        do{

        system("color 3");
        system("CLS");
        printf(">>>> COMIENZO DEL RETO <<<<\n\n\n");

        printf("::: RETO 4 :::\n\n");

        printf("Que hay detras de la puerta que coraline le pide a la madre que le abra?\n\n");

        printf("::RESPUESTA: ");
        gets(ladrillos);


        }while(!strcmp(ladrillos, "ladrillos")==0);


        if(strcmp(ladrillos, "ladrillos")==0){

            printf("\nCORRECTO\n\n");
            system("pause");

 // ---------------------------------------------------------------------------------------

        do{

        system("color 3");
        system("CLS");
        printf(">>>> COMIENZO DEL RETO <<<<\n\n\n");

        printf("::: RETO 5 :::\n\n");

        printf("TITANIC TEST\n\n");

        printf("Cuantos anios estaba por cumplir rose cuando cuenta la historia?\n\n");

        printf("[1]- 99\n");
        printf("[2]- 100\n");
        printf("[3]- 101\n");
        printf("[4]- 110\n\n");

        printf("ELEGI UNA OPCION: ");
        scanf("%d", &rose);




        }while(!(rose == 3));

        if(rose==3){
            printf("\nCORRECTO\n\n");
            system("pause");

 // ---------------------------------------------------------------------------------------

        do{

        system("color 3");
        system("CLS");
        printf(">>>> COMIENZO DEL RETO <<<<\n\n\n");

        printf("::: RETO 6 :::\n\n");

        printf("Donde se reunen los chicos en el ultimo capitulo de friends?\n\n");

        printf("[1]- En el apartamento vacio de monica\n");
        printf("[2]- En central perk\n");
        printf("[3]- En la nueva casa de monica y chandler\n");
        printf("[4]- En el aeropuerto\n\n");

        printf("ELEGI UNA OPCION: ");
        fflush(stdin);
        scanf("%d", &rejunte);



        }while(!(rejunte ==2 ));

        if(rejunte ==2){

            printf("\nCORRECTO\n\n");
            system("pause");

// ---------------------------------------------------------------------------------------

         do{

        system("color 3");
        system("CLS");
        printf(">>>> COMIENZO DEL RETO <<<<\n\n\n");

        printf("::: RETO 7 :::\n\n");

        printf("Que nombre le queria poner Phoebe al bebe de Ross y Rachel si fuese ninio?\n\n");

        printf("RESPUESTA: ");
        gets(bebe);



        }while(!strcmp(bebe, "phoebo")==0);

        if(strcmp(bebe, "phoebo")==0){

            printf("\nCORRECTO\n\n");
            system("pause");

 // ---------------------------------------------------------------------------------------

         do{

        system("color 3");
        system("CLS");
        printf(">>>> COMIENZO DEL RETO <<<<\n\n\n");

        printf("::: RETO 8 :::\n\n");

        printf("Monica clasifica sus toallas, Cuantas categorias tiene?\n\n");

        printf("[1]- 11\n");
        printf("[2]- 5\n");
        printf("[3]- 15\n");
        printf("[4]- 10\n\n");

        printf("ELEGI UNA OPCION: ");
        fflush(stdin);
        scanf("%d", &toalla);


        }while(!(toalla==1));

        if(toalla == 1){

            printf("\nCORRECTO\n\n");
            system("pause");

  // ---------------------------------------------------------------------------------------

         do{

        system("color 9f");
        system("CLS");
        printf("-DOBBY: Excelente, finalizaste el reto\n");
        printf("-DOBBY: Aca tenes lo prometido..\n\n");
        printf("::: [...] DOBBY TE DA UNA EXTRANIA LLAVE NEGRA CON UN BOTON EN LA PUNTA Y DESAPARECE\n\n");
        printf("-CARO: Mm para que mierda quiero esta llave, la voy a guardar por las dudas..\n\n");

        printf("::: CAMINAS TRANQUILAMENTE POR LOS PASILLOS HASTA QUE TE CAES POR ACCIDENTE.. :::\n\n");
        printf("::: CUANDO DESPERTAS NO ESTAS MAS EN HOGWARTS, ESTAS EN EL\n PISO DE ABAJO DE UN CASTILLO Y ARRIBA SE ESCUCHA UNA VOZ QUE DICE.. :::\n\n");
        printf("Tu ganas.. entonces la princesa si despertara de su mortal suenio.. pero solo con un ________\n\n");
        printf("::RESPUESTA: ");
        gets(beso);




        }while(!strcmp(beso, "beso de amor verdadero")==0);

        if(strcmp(beso, "beso de amor verdadero")==0){

            printf("\nCORRECTO!!\n\n");
            system("pause");

// ---------------------------------------------------------------------------------------

        do{

        system("color 0f");
        system("CLS");

        printf(">>> RECORRES EL CASTILLO LIBREMENTE, TE SENTIS PERDIDA.. <<<\n\n");
        printf("::: BUSCAS ALGO QUE TE PUEDA SERVIR.. :::\n\n");
        printf("::: ENTRE VARIAS COSAS ENCONTRASTE EL PAPEL QUE LOS WEASLEY HABIAN TIRADO\n\n");
        printf("-CARO: Este papel no tiene nada escrito, no sirve para nada.\n\n");
        printf("QUE LE DIRIAS AL PAPEL?: ");
        gets(mapa);

        }while(!strcmp(mapa, "juro solemnemente que mis intenciones no son buenas")==0);

        if(strcmp(mapa, "juro solemnemente que mis intenciones no son buenas")==0){

            printf("\n\n::: DE REPENTE EL PAPEL MUESTRA UNA ESPECIE DE MAPA MAGICO :::\n\n");

            printf("-CARO: Perfecto, esto me va a ayudar a merodear por el castillo\n\n");
            printf("::: EL MAPA MARCA UNA X ROJA, TU CURIOSIDAD TE LLEVA HACIA AHI :::\n\n");

            system("pause");

 // ---------------------------------------------------------------------------------------

          do{

        system("color 0f");
        system("CLS");

        printf(">>> LLEGAS A LA X ROJA Y ENCONTRAS UNA PUERTA MISTERIOSA <<<\n\n");
        printf("-CARO: Que puerta tan grande y antigua.. parece que no abre\n\n");
        printf("::: EMPEZAS A BUSCAR EN TU INVENTARIO :::\n\n");
        printf("::: ENTRE VARIAS COSAS TENES: :::\n\n");

        printf("[1]- Tijeras\n");
        printf("[2]- Mapa\n");
        printf("[3]- Espejo\n");
        printf("[4]- Piedra filosofal\n");
        printf("[5]- Llave negra con boton en la punta\n");
        printf("[6]- Sube\n");
        printf("[7]- Labial\n");
        printf("[8]- Bufanda\n\n");

        printf("ELEGI UNA OPCION: ");
        fflush(stdin);
        scanf("%d", &negra);


        }while(!(negra == 5));

        if(negra == 5){
            printf("\nPARECE QUE LA LLAVE SIRVE Y ABRIS LA PUERTA..\n\n");
            system("pause");

// ---------------------------------------------------------------------------------------

          do{

        system("color F0");
        system("CLS");

         printf(">>> APARECES EN UNA HABITACION TOTALMENTE BLANCA <<<\n\n");
         printf("::: NO HAY NADA PARA VER MAS QUE BLANCO Y SOLO BLANCO.. :::\n\n");
         printf("::: HAY UNA NOTA COLGANDO EN EL MEDIO DE LA NADA :::\n\n");
         printf("::: LA NOTA DICE: ABRI EL PLACARD DE TU HABITACION :::\n\n");

         printf("::: ESCRIBI 'TRAVEZURA REALIZADA' PARA FINALIZAR :::\n\n");
         printf("::RESPUESTA: ");

         gets(travezura);



        }while(!strcmp(travezura, "travezura realizada")==0);




        }




        }







        }























        // DESPUES DE ACEPTAR EL RETO VENDRIAN UNA SERIE DE PUZZLES ( FRASES DE SERIES, CANCIONES, ALGUNOS CALCULOS MATEMATICOS, COSAS DE PELICULAR )

        // SI GANA EL RETO, LE DAS LA LLAVE NEGRA DE BOTON ( LUEGO SERVIRA DE ALGO... [ VA A SER PARA ABRIR EL PORTAL ] - MIRAR EL INVENTARIO PARA USAR LA LLAVE

        // FALTA MAPA MERODEADOR ( LA FRASE FAMOSA )

        }





































        }



























        }




    }







































        } // SI ELIJE CASA DE HOGWARTS ENTRA EN RAVENCLAW








}








}









}









}




}




}




}




}






        } // SI EL NIVEL 6 o BOSQUE ES CORRECTO ENTRA AL NIVEL 7










        } // SI EL NIVEL 5 ES CORRECTO ENTRA AL NIVEL 6 O INGRESO AL BOSQUE






}







} // SI EL NIVEL 4 ES CORRECTO ENTRA AL NIVEL 5




        }     // SI EL NIVEL 3 ES CORRECTO ENTRA AL NIVEL 4


}       // SI EL NIVEL 2 ES CORRECTO ENTRA AL NIVEL 3




}       // SI EL NIVEL 1 ES CORRECTO ENTRA AL NIVEL 2




}       // SI PONE 'S' PARA SEGUIR COMIENZA EL JUEGO



}



    return 0;


}     // FIN DEL MAIN
