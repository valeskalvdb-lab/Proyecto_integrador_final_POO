#ifndef AUTOSUV_H
#define AUTOSUV_H

#include "vehiculo.h"
#include <iostream>
using namespace std;

class autoSUV: public vehiculo{
    private: 
    bool tiene4x4;
    bool filaExtra;
    public: 
    autoSUV();
    autoSUV(string _idVehiculo, string _marca, string _modelo, double _costoDia, bool _estaRentado, bool _tiene4x4, bool _filaExtra); //aquí me estoy olvidando de poner el tipo de dato
    double calcularPrecioRenta(int dias, double km, int edadConductor) override;
    void imprimirResumen() override;
};

#endif
