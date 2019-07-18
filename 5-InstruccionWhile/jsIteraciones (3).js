function mostrar(){

  var error = false
  var clave
  var contador = 0;


   do{
    clave = prompt("Ingrese la clave");
    contador++

    if(contador == 4){
      error= true;
      break;

    }

  }while(clave!="utn750");

  if(error){
    alert("Su usuario se bloqueo por intentar mas de 4 veces");
  }else{
    alert("Exito");

  }

 }







 //FIN DE LA FUNCIÓN
