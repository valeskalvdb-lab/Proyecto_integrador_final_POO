#include "vehiculo.h"
#include <iostream>
using namespace std;


//Constructor por defecto
vehiculo::vehiculo() {
    idVehiculo = "SIN_ID";
    marca = "Sin marca";
    modelo = "Sin modelo";
    costoDia = 0.0;
    estaRentado = false;
}

//Constructor
vehiculo::vehiculo(string _idVehiculo, string _marca, string _modelo, double _costoDia, bool _estaRentado) {
    idVehiculo = _idVehiculo;
    marca = _marca;
    modelo = _modelo;
    costoDia = _costoDia;
    estaRentado = _estaRentado;
}

string vehiculo::getIdVehiculo() { return idVehiculo; }
bool vehiculo::getEstaRentado() { return estaRentado; }
void vehiculo::setEstaRentado(bool _estaRentado) { estaRentado = _estaRentado; }
