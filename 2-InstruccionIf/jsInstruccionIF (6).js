function mostrar()
{
//tomo la edad
var edad;

edad = document.getElementById("edad").value;

if(edad>=17){
  alert("Usted es mayor");

   }else{

     if(edad>=13){
       alert("Usted es adolescente");

    }else{
      alert("Usted es menor");

    }
   }


}//FIN DE LA FUNCIÓN
