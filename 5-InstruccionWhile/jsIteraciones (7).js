function mostrar()
{

	var contador=0;
	var acumulador=0;
  var respuesta = "si"
  var num;

  while(respuesta=="si"){
    contador++
    num = prompt("Ingrese numeros");
    num = parseInt(num);
    acumulador += num;
    respuesta = prompt("Desea seguir?");

  }


document.getElementById('suma').value=acumulador;
document.getElementById('promedio').value=acumulador/contador;

}//FIN DE LA FUNCIÓN



//while(true){
 //do{
 //num= prompt();
 //if(num==NaN){
  //  break;
 //  }
  // num=parseInt(num)
 //  }while(isNaN(num));
  // if(num==null){
  //   break;
  // }
 //}

