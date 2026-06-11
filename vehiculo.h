#ifndef VEHICULO_H
#define VEHICULO_H
#include <iostream>
using namespace std;

// Encapsulación de la clase abstracta vehículo
class vehiculo {
protected:
    string idVehiculo;
    string marca;
    string modelo;
    double costoDia;
    bool estaRentado;

public:
    // Constructores y destructor
    vehiculo();
    vehiculo(string _idVehiculo, string _marca, string _modelo, double _costoDia, bool _estaRentado);
    virtual ~vehiculo() {}

    virtual double calcularPrecioRenta(int dias, double km, int edadConductor) = 0;
    virtual void imprimirResumen() = 0;

    string getIdVehiculo();
    bool getEstaRentado();
    void setEstaRentado(bool _estaRentado);
};

#endif
