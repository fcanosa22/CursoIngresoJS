function mostrar()
{
  var numeros;
  var negativos = 0;
  var respuesta = "si";
  var contNeg = 0;
  var positivos = 0
  var contPos = 0;
  var contCeros = 0;
  var contPares = 0;
  var promedioPos= 0;

  do{
    do{


    numeros = prompt("Ingrese numeros");
    numeros = parseInt(numeros);

    while(isNaN(numeros)); // Valida que sean numeros (IMPORTANTE)

    if(numeros<0){
      negativos = numeros + negativos
      contNeg++

    }else if(num<0){
      positivos = numeros + positivos
      contPos++

    }else{
      contCeros++
     }

     if(num% 2==0){
       contPares++
     }
     respuesta = confirm("Quiere continuar?");

    }while(respuesta);

    if(contPos==0){
      promedioPos =

    }else{
      promedioPos = contPos++ / positivos;
    }
  } // FALTA TERMINAR!!

  document.write("Suma de negativos: " +negativos);
  document.write("<br>Suma de positivos: " +positivos);





}//FIN DE LA FUNCIÓN


// ESTA FORMA ES MAS CORTA, FALTA VALIDAD SI ES NAN Y VERIFICAR!
function mostrar()

  var respuesta="si";
	var negativos = 0;
  var positivos = 0;
	var contNeg = 0;
	var contPos = 0;
	var contCeros = 0;
	var contPares = 0;


    while(respuesta!="no"){

		numero = parseInt(prompt("Ingrese un numero"));

		if (numero < 0){
			negativos = negativos + numero;
			contNeg++;
		}else if(numero > 0){
			positivos = positivos + numero;
			contPos++;
		}else{
			contCeros++;
		}

		if(numero % 2 || numero==0)
			contPares++;

		respuesta = prompt("¿Quiere continuar?");
	}

	document.write("La suma de los negativos es: " + negativos);
	document.write("<br>La suma de los positivos es: " + positivos);
	document.write("<br>La cantidad de los positivos es: " + contPos);
	document.write("<br>La cantidad de los negativos es: " + contNeg);
	document.write("<br>La cantidad de los ceros es: " + contCeros);
	document.write("<br>La cantidad de los pares es: " + contPares);
	document.write("<br>El promedio de los positivos es: " + (positivos / contPos));
	document.write("<br>El promedio de los negativos es: " + (negativos / contNeg));
	document.write("<br>La diferencia entre los positivos y negativos es: " + (positivos - negativos));




}//FIN DE LA FUNCIÓN]
