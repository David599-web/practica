#ifndef RIEW_H
#define RIEW_H
#include<headers/vehiculo.h>
#include<headers/cliente.h>
#include<vector>
void registrarVehiculo(vector<Vehiculo*>& vehiculos);
void registrarCliente(vector<Cliente>& clientes);
void consultarRegistros(const vector<Vehiculo*>& vehiculos, const vector<Cliente>& clientes);

#endif // RIEW_H
