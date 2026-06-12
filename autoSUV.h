/**
 * Esta clase define un objeto de tipo autoSUV que hereda  
 * de la clase vehiculo. Representa a los vehículos familiares
 * y añade atributos booleanos para identificar si el modelo cuenta con 
 * tracción 4x4 o una fila de asientos extra. Suma cargos fijos al precio
 * base de la renta en caso de cumplir con estas características.
 */
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
    autoSUV(string _idVehiculo, string _marca, string _modelo, double _costoDia, bool _estaRentado, bool _tiene4x4, bool _filaExtra);
    double calcularPrecioRenta(int dias, double km, int edadConductor) override;
    void imprimirResumen() override;
};

#endif
