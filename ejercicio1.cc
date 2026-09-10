#include <iostream>

// Declarar funcion
void AgregarCalorias(int &calorias, int cant);

int main()
{
}

void AgregarCalorias(int &calorias, int cant)
{

    if (cant < 0)
    {
        std::cout << "Error: No se pueden agregar calorias negativas" << std::endl;
    }

    calorias += cant;
}