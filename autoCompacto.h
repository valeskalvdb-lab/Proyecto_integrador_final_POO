/**
 * Esta clase define un objeto de tipo autoCompacto que hereda  
 * de la clase vehiculo. Representa a los autos ideales para la ciudad y 
 * añade un atributo para controlar el límite de kilometraje permitido.
 * Implementa las operaciones para calcular los kilómetros excedidos y aplicar 
 * los cargos adicionales debido a los km excedidos al precio final de la renta.
 */
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
