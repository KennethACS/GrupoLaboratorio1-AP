#include <iostream>

struct Metabolismo
{
    int calorias; //variable contabilizadora de calorias
}metabolismo;

//funciones
void ConsultarCalorias(int calorias); //paso por copia, no modifica el valor original
void AgregarCalorias(int &calorias, int cant);

int main(){
    metabolismo.calorias = 350; //inicializar una variable con un valor
    std::cout<<"Se ha inicializado el numero de calorias en: "<<metabolismo.calorias<<std::endl;

    ConsultarCalorias(metabolismo.calorias);
}

void ConsultarCalorias(int calorias){ //paso por copia, no modifica el valor original

    std::cout<<"El numero de calorias actuales es: "<<calorias<<std::endl;
}

void AgregarCalorias(int &calorias, int cant)
{

    if (cant < 0)
    {
        std::cout << "Error: No se pueden agregar calorias negativas" << std::endl;
    }

    calorias += cant;
}