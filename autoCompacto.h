#ifndef AUTOCOMPACTO_H
#define AUTOCOMPACTO_H

#include <iostream>
#include "vehiculo.h"

using namespace std;

class autoCompacto : public vehiculo {
private:
    int kmLimite;
public:
    autoCompacto();
    autoCompacto(string _idVehiculo, string _marca, string _modelo, double _costoDia, bool _estaRentado, int _kmLimite);
    double calcularKmExtras(double kmRecorridos);
    double calcularPrecioRenta(int dias, double km, int edadConductor) override;
    void imprimirResumen() override;
};

#endif