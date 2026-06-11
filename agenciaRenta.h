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