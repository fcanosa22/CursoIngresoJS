function mostrar()
{

 var num;

  do{

 num = prompt("Ingrese numero");
 num = parseInt(num);

 if(num<0 || num>9){
alert("Este numero no esta entre 0 y 9");

 }

 }while(num<0 || num>9);

  document.getElementById("Numero").value = num;




}//FIN DE LA FUNCIÓN

