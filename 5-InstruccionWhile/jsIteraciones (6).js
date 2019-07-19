function mostrar()
{

  var contador=0;
  var acumulador = 0
  var num

  while(contador<5){
    contador++
    do{

    num= prompt("Ingrese 5 numeros")
    num= parseInt(num);

    acumulador = acumulador + num;
 }while(isNaN(num));


  }


document.getElementById('suma').value=acumulador;
document.getElementById('promedio').value=acumulador/5;

}//FIN DE LA FUNCIÓN
