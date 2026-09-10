#include <iostream>
#include <windows.h>

void QuemarCalorias(int *calorias, int cant);
int main(){

    
}

void QuemarCalorias (int *calorias)
{
    //Valor quemado
    int calorias_quemadas = 50;

    //Validando que el total de calorias siga siendo mayor a cero
    //Si es mayor que cero
    if (*calorias -= calorias_quemadas >= 0)
    {
      *calorias -= calorias_quemadas;
      std::cout<< "Las calorías fueron quemadas con éxito.";
    }
    //Si es menor que cero
    else
    {
    std:: cout<<"Cantidad no válida. El total de calorías no puede ser menor que cero";
    }

} 