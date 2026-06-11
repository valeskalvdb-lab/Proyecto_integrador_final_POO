#include "autoCompacto.h"
#include <iostream>
using namespace std;

autoCompacto::autoCompacto(string _idVehiculo, string _marca, string _modelo, double _costoDia, bool _estaRentado, int _kmLimite)
    : vehiculo(_idVehiculo, _marca, _modelo, _costoDia, _estaRentado) {
    kmLimite = _kmLimite;
}

autoCompacto::autoCompacto() 
    : vehiculo() // Primero llama al constructor por defecto del padre
{
    kmLimite = 0;
}
double autoCompacto::calcularKmExtras(double kmRecorridos) {
    if (kmRecorridos > kmLimite) { return kmRecorridos - kmLimite; }
    return 0.0;
}

double autoCompacto::calcularPrecioRenta(int dias, double kmRecorridos, int edadConductor) {
    double precioRenta = dias * costoDia;
    double kmExcedidos = calcularKmExtras(kmRecorridos);
    precioRenta += (kmExcedidos * 5.0);
    return precioRenta;
}

void autoCompacto::imprimirResumen() {
    cout << "Resumen de la renta de un Auto Compacto" << endl;
    cout << "ID Vehiculo: " << idVehiculo << endl;
    cout << "Marca: " << marca << endl;
    cout << "Modelo: " << modelo << endl;
    cout << "Costo por Dia: $" << costoDia << endl;
    cout << "Limite de kilometraje: " << kmLimite << " km" << endl;
}