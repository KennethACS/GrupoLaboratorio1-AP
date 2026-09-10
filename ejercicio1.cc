#include <iostream>

//Declarar funcion
void AgregarCalorias(int &calorias, int cant);

int main(){

    
}

void AgregarCalorias(int &calorias, int cant){
    
    calorias += cant;

}// deberá aumentar el total de calorías,modificando el valor mediante referencia.





























/*5) Salud - Calorías diarias

Una aplicación de nutrición lleva el control de las calorías de un usuario. Se requiere registrar las calorias
consumidas mediante comidas, las calorías quemadas mediante ejercicios y consultar el total de calorias
sin modificar la cuenta real.

A partir de las funciones proporcionadas, implemente las tres operaciones solicitedas, aplicando
correctamente cada mecanismo de paso de parámetros.

Funciones por implementar:

· Consultar calorías, consulta la cantidad de calorias utilizando paso por valor.
· Agregar calorías, registra las calorias de una comida, modificando el total mediante referencia.
. Quemar calorías, disminuye las calorías mediante una operación de ejercicio, modificando el
total mediante puntero.




Requisitos del sistema

· El programa deberá desarrollarse utitizando C++.
· La función main() deberá encargarse de crear y manejar el total de calorías del usuario.
· El total inicial de calorías debe ser de 2000 calorías.
. La función ConsultarCalorias(float calorias) deberá mostrar las calorías recibidas, sin
modificar el valor original.
· La función AgregarCalorias(int &calorias, int cant) deberá aumentar el total de calorías,
modificando el valor mediante referencia.
. La función QuemarCalorias(int *calorias, int cant) deberá disminuir el total de calorias,
modificando el valor mediante puntero.
· No se permiten cantidades negativas en las operaciones de agregar o quemar calorias.
· El total de calorias no puede ser menor que 0.
. Se deberán implementar validaciones mediante if para controlar las condiciones anteriores.
· Cada operación deberá mostrar un mensaje claro indicando si fue realizada correctamente o si
se produjo un error.
· El programa deberá mostrar el total de calorías antes y después de cada operación.
. El programa deberá demostrar el funcionamiento de las tres funciones utilizando datos
quemados (hardcoded) dentro de la función main() o solicitartos al usuario.*/

