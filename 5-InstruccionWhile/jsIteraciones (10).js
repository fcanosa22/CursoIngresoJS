function mostrar()
{

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




}//FIN DE LA FUNCIÓN
