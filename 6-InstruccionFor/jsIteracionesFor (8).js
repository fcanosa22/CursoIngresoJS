function mostrar()
{
var num;
var mensaje = "Es primo";

num= prompt("Ingrese numero");
num = parseInt(num);


for(var i=2; i<num ; i++){
  if(num / i==0){
    mensaje= "No es primo";
    break;
     }alert(mensaje);

}
//HAY QUE CORREGIR EL CODIGO!!!

}//FIN DE LA FUNCIÓN
