#ifndef AUTODEPORTIVO_H
#define AUTODEPORTIVO_H

#include <iostream>
#include "vehiculo.h"
using namespace std;

class autoDeportivo: public vehiculo{
    private:
        double seguroCosto;
    public:
        autoDeportivo();
        autoDeportivo(string _idVehiculo, string _marca, string _modelo, double _costoDia, bool _estaRentado, double _seguroCosto);
        double calcularPrecioRenta(int dias, double km, int edadConductor) override;
        void imprimirResumen() override;
};

#endif