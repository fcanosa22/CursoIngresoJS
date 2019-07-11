/*Debemos lograr tomar el importe por ID ,
transformarlo a entero (parseInt), luego
mostrar el importe con un aumento del 10 %
en el cuadro de texto "RESULTADO".*/

var sueldo;
var resultado;

function mostrarAumento()
{

  sueldo = document.getElementById("sueldo").value;
  sueldo = parseInt(sueldo);
  resultado = sueldo *110/100;

  document.getElementById("resultado").value = resultado;
















}
