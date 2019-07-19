function mostrar()
{

var sexo;
var error = false;
var contador = 0;




 do{

sexo= prompt("ingrese f ó m .");
contador++

if(contador==3){
error = true
break;

}

}while(sexo!="f" && sexo!="m");


document.getElementById('Sexo').value=sexo;


}//FIN DE LA FUNCIÓN
