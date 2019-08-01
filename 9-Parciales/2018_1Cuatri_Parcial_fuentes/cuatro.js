function mostrar()
{
  var num1;
  var num2;
  var suma;
  


  num1 = prompt("Ingrese el primer numero");
  num1 = parseInt(num1);

  num2 = prompt("Ingrese el segundo numero");
  num2 = parseInt(num2);

  if(num1==num2){
    alert("Tus numeros son iguales: " +num1+ " y " +num2)

  }else if(num1>num2){
    alert("La resta es: " +(num1-num2));

  }else{
    alert("La suma es: "+(num1+num2));

  }
  suma = num1+num2;
  

  if(suma>10){
    alert("La suma es: " +suma+ " y supero los 10");
    
    
  }


  

 

  
}
