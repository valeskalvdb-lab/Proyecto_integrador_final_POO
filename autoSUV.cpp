#include "autoSUV.h"
#include <iostream>
using namespace std;

autoSUV::autoSUV(string _idVehiculo, string _marca, string _modelo, double _costoDia, bool _estaRentado, bool _tiene4x4, bool _filaExtra)
    : vehiculo(_idVehiculo, _marca, _modelo, _costoDia, _estaRentado) {
    tiene4x4 = _tiene4x4;
    filaExtra = _filaExtra;
}

autoSUV::autoSUV() 
    : vehiculo() // Primero llama al constructor por defecto del padre
{
    tiene4x4 = false;
    filaExtra = false;
}

double autoSUV::calcularPrecioRenta(int dias, double kmRecorridos, int edadConductor) {
    double precioRenta = dias * costoDia; // Funciona porque costoDia ahora es protected
    if (tiene4x4) { precioRenta += 1200.0; }
    if (filaExtra) { precioRenta += 600.0; }
    return precioRenta;
}

void autoSUV::imprimirResumen() {
    cout << "Resumen de la renta de un Auto SUV" << endl;
    cout << "ID Vehiculo: " << idVehiculo << endl;
    cout << "Marca: " << marca << endl;
    cout << "Modelo: " << modelo << endl;
    cout << "Tiene 4X4: " << (tiene4x4 ? "Si" : "No") << endl;
    cout << "Tiene una fila extra: " << (filaExtra ? "Si" : "No") << endl;
    cout << "Costo por Dia: $" << costoDia << endl;
}