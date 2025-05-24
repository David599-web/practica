#ifndef CLIENTE_H
#define CLIENTE_H
#include<iostream>
using namespace std;
class Cliente {
private:
    string dni, nombre, telefono, direccion;

public:
    Cliente(string d, string n, string t, string dir);
    void mostrar() const;
};
#endif // CLIENTE_H
