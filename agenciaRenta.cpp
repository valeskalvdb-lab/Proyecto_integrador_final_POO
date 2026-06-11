#include "agenciaRenta.h"
#include "vehiculo.h"
#include "autoCompacto.h"
#include "autoSUV.h"
#include "autoDeportivo.h"
#include <iostream>

using namespace std;

agenciaRenta::~agenciaRenta() {
    for (vehiculo* v : flotaCompactos) delete v;
    for (vehiculo* v : flotaSUVs) delete v;
    for (vehiculo* v : flotaDeportivos) delete v;
}

void agenciaRenta::agregarCompacto(vehiculo* v) { flotaCompactos.push_back(v); }
void agenciaRenta::agregarSUV(vehiculo* v) { flotaSUVs.push_back(v); }
void agenciaRenta::agregarDeportivo(vehiculo* v) { flotaDeportivos.push_back(v); }

void agenciaRenta::vehiculosDisponibles() {
    cout << "Vehiculos disponibles para la renta:" << endl;
    bool hayDisponibles = false;

    if (!flotaCompactos.empty()) {
        cout << "\nCompactos disponibles:" << endl;
        for (vehiculo* v : flotaCompactos) {
            if (!v->getEstaRentado()) { v->imprimirResumen(); cout << endl; hayDisponibles = true; }
        }
    }
    if (!flotaSUVs.empty()) {
        cout << "\nSUVs disponibles:" << endl;
        for (vehiculo* v : flotaSUVs) {
            if (!v->getEstaRentado()) { v->imprimirResumen(); cout << endl; hayDisponibles = true; }
        }
    }
    if (!flotaDeportivos.empty()) {
        cout << "\nDeportivos disponibles:" << endl;
        for (vehiculo* v : flotaDeportivos) {
            if (!v->getEstaRentado()) { v->imprimirResumen(); cout << endl; hayDisponibles = true; }
        }
    }
    if (!hayDisponibles) { cout << "  No hay vehiculos disponibles en este momento." << endl; }
}

bool agenciaRenta::intentarRentar(vector<vehiculo*>& flota, const string& id) {
    for (vehiculo* v : flota) {
        if (v->getIdVehiculo() == id) {
            if (!v->getEstaRentado()) {
                v->setEstaRentado(true);
                cout << "\n=== Vehiculo rentado ===" << endl;
                v->imprimirResumen();
                cout << "\nEstado: Rentado correctamente." << endl;
            }
            else {
                cout << "El vehiculo con ID '" << id << "' ya esta rentado." << endl;
            }
            return true;
        }
    }
    return false;
}

void agenciaRenta::rentarVehiculo(string id) {
    if (intentarRentar(flotaCompactos, id)) return;
    if (intentarRentar(flotaSUVs, id)) return;
    if (intentarRentar(flotaDeportivos, id)) return;
    cout << "No se encontro un vehiculo con ID '" << id << "'." << endl;
}

bool agenciaRenta::intentarDevolver(vector<vehiculo*>& flota, const string& id, int dias, double km, int edadConductor) {
    for (vehiculo* v : flota) {
        if (v->getIdVehiculo() == id) {
            if (v->getEstaRentado()) {
                double precioTotal = v->calcularPrecioRenta(dias, km, edadConductor);
                v->setEstaRentado(false);
                cout << "\n=== Devolucion de Vehiculo ===" << endl;
                v->imprimirResumen();
                cout << "\nDias de renta: " << dias << endl;
                cout << "Kilometros recorridos: " << km << endl;
                cout << "Precio total a pagar: $" << precioTotal << endl;
                cout << "Vehiculo devuelto correctamente." << endl;
            }
            else {
                cout << "El vehiculo con ID '" << id << "' no estaba rentado." << endl;
            }
            return true;
        }
    }
    return false;
}

void agenciaRenta::devolverVehiculo(string id, int dias, double km, int edadConductor) {
    if (intentarDevolver(flotaCompactos, id, dias, km, edadConductor)) return;
    if (intentarDevolver(flotaSUVs, id, dias, km, edadConductor)) return;
    if (intentarDevolver(flotaDeportivos, id, dias, km, edadConductor)) return;
    cout << "No se encontro un vehiculo con ID '" << id << "'." << endl;
}
