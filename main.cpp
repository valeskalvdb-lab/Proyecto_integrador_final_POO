/*
 * Proyecto Renta de autos main
 * Lourdes Valeska Díaz Brito
 * A01714591
 * 12/06/2026
 *
 * Este es un proyecto demo para la clase TC1030.301 Programación Orientado a Objetos. 
 * Es un programa que ayuda a la persona encargada de rentar autos a visualizar la  
 * disponibilidad de los vehículos, rentar un vehículo y devolver un vehículo.
 * Este archivo contiene la función principal (main) que inicializa el sistema 
 * de renTECarros S.A. 
 */

#include <iostream>
#include <limits>
#include <string>
#include "agenciaRenta.h"
#include "autoCompacto.h"
#include "autoSUV.h"
#include "autoDeportivo.h"
#include "vehiculo.h"

using namespace std;

int main() {
    agenciaRenta renTECarros;

    vehiculo* compacto1 = new autoCompacto("COM-01", "Nissan", "March", 400.0, false, 200);
    vehiculo* compacto2 = new autoCompacto("COM-02", "Chevrolet", "Aveo", 450.0, false, 150);
    vehiculo* deportivo1 = new autoDeportivo("DEP-01", "Ford", "Mustang", 1500.0, false, 500.0);
    vehiculo* deportivo2 = new autoDeportivo("DEP-02", "Porsche", "911 Carrera", 3500.0, false, 1200.0);
    vehiculo* deportivo3 = new autoDeportivo("DEP-03", "Ferrari", "F40", 200000.0, false, 400000);
    vehiculo* suv1 = new autoSUV("SUV-01", "Toyota", "RAV4", 900.0, false, true, false);
    vehiculo* suv2 = new autoSUV("SUV-02", "Honda", "Pilot", 1200.0, false, true, true);

    renTECarros.agregarCompacto(compacto1);
    renTECarros.agregarCompacto(compacto2);
    renTECarros.agregarDeportivo(deportivo1);
    renTECarros.agregarDeportivo(deportivo2);
    renTECarros.agregarDeportivo(deportivo3);
    renTECarros.agregarSUV(suv1);
    renTECarros.agregarSUV(suv2);

    int opcion = 0;
    string idElegido;
    int diasRenta;
    double kmRecorridos;
    int edadCliente;

    do {
        cout << "\n==================================================" << endl;
        cout << "         BIENVENIDO A RENTECARROS S.A.           " << endl;
        cout << "==================================================" << endl;
        cout << "Seleccione una opcion del 1 al 4" << endl;
        cout << "1. Ver vehiculos disponibles" << endl;
        cout << "2. Rentar un vehiculo" << endl;
        cout << "3. Devolver un vehiculo (Calcular Costo)" << endl;
        cout << "4. Salir del sistema" << endl;
        cout << "==================================================" << endl;
        cin >> opcion;

        if (opcion == 1) {
            cout << "\n--- CATALOGO DE DISPONIBLES ---" << endl;
            renTECarros.vehiculosDisponibles();
        }
        else if (opcion == 2) { // <- CORREGIDO: Tenías 'opcion == 1' repetido aquí
            cout << "\n--- RENTAR VEHICULO ---" << endl;
            cout << "Ingresa el ID del vehiculo que deseas rentar: ";
            cin >> idElegido;
            renTECarros.rentarVehiculo(idElegido);
        }
        else if (opcion == 3) {
            cout << "Ingresa el ID del vehiculo que vas a devolver: ";
            cin >> idElegido;
            cout << "Ingresa los dias que se uso el vehiculo: ";
            cin >> diasRenta;
            cout << "Ingresa los kilometros recorridos totales: ";
            cin >> kmRecorridos;
            cout << "Ingresa la edad del conductor que lo rento: ";
            cin >> edadCliente;

            renTECarros.devolverVehiculo(idElegido, diasRenta, kmRecorridos, edadCliente);
        }
        else if (opcion == 4) {
            cout << "\n¡Gracias por utilizar el sistema! Saliendo..." << endl;
        }
        else {
            cout << "\nOpcion invalida. Por favor, intenta de nuevo." << endl;
        }

    } while (opcion != 4);

    return 0;
}
