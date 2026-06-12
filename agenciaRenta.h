/**
 * Esta clase define un objeto de tipo agenciaRenta que actúa como la clase
 * administradora de todo el sistema. Contiene flotas para cada categoría de auto 
 * usando vectores almacenamiento (para no tener un n limitado de autos que se puedan insertar).
 * Provee las operaciones necesarias para dar de alta vehículos, buscar y mostrar los autos 
 * disponibles, y gestionar renta y devolución (procesando los cálculos de pago).
 */
#ifndef AGENCIARENTA_H
#define AGENCIARENTA_H

#include <iostream>
#include <vector>
#include <string>
#include "vehiculo.h"

using namespace std;

class agenciaRenta {
    private:
    vector<vehiculo*> flotaCompactos;
    vector<vehiculo*> flotaSUVs;
    vector<vehiculo*> flotaDeportivos;

    bool intentarRentar(vector<vehiculo*>& flota, const string& id);
    bool intentarDevolver(vector<vehiculo*>& flota, const string& id, int dias, double km, int edadConductor);

    public:
    ~agenciaRenta();
    void agregarCompacto(vehiculo* v);
    void agregarSUV(vehiculo* v);
    void agregarDeportivo(vehiculo* v);
    void vehiculosDisponibles();
    void rentarVehiculo(string id);
    void devolverVehiculo(string id, int dias, double km, int edadConductor);
};

#endif
