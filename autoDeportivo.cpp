#include <iostream>
#include "autoDeportivo.h"
using namespace std;

autoDeportivo::autoDeportivo(string _idVehiculo, string _marca, string _modelo, double _costoDia, bool _estaRentado, double _seguroCosto)
    : vehiculo(_idVehiculo, _marca, _modelo, _costoDia, _estaRentado) {
    seguroCosto = _seguroCosto;
}

autoDeportivo::autoDeportivo() 
    : vehiculo() // Primero llama al constructor por defecto del padre
{
    seguroCosto = 0.0;
}

double autoDeportivo::calcularPrecioRenta(int dias, double km, int edadConductor) {
    double precioRenta = dias * costoDia;
    precioRenta += seguroCosto;
    if (edadConductor < 25) { 
        precioRenta += 450.0; 
    }
    return precioRenta;
}

void autoDeportivo::imprimirResumen() {
    cout << "Resumen de la renta de un Auto Deportivo" << endl;
    cout << "ID Vehiculo: " << idVehiculo << endl;
    cout << "Marca: " << marca << endl;
    cout << "Modelo: " << modelo << endl;
    cout << "Costo por Dia: $" << costoDia << endl;
    cout << "Costo del Seguro: $" << seguroCosto << endl;
}