/*Debemos lograr tomar Los numeros por ID ,
transformarlos a enteros (parseInt),realizar la operación correcta y
mostrar el resulto por medio de "ALERT"
ej.: "la Resta es 750"*/

var num1;
var num2;

function sumar()
{

  num1 = document.getElementById("numeroUno").value; // Tomo los datos por ID
  num2 = document.getElementById("numeroDos").value;

  num1 = parseInt(num1); // Convierto a numero entero por parseInt
  num2 = parseInt(num2);

  alert("La suma es: " +(num1 + num2)); // Muestro por mensaje de alert el resultado


}

function restar()
{

  num1 = document.getElementById("numeroUno").value;
  num2 = document.getElementById("numeroDos").value;

  num1 = parseInt(num1);
  num2 = parseInt(num2);

  alert("La resta es: " +(num1 - num2));

}

function multiplicar()
{

  num1 = document.getElementById("numeroUno").value;
  num2 = document.getElementById("numeroDos").value;

  num1 = parseInt(num1);
  num2 = parseInt(num2);

  alert("La multiplicacion es: " +(num1 * num2));

}

function dividir()
{

  num1 = document.getElementById("numeroUno").value;
  num2 = document.getElementById("numeroDos").value;

  num1 = parseInt(num1);
  num2 = parseInt(num2);

  alert("La division es: " +(num1 / num2));


}

