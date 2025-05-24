#ifndef VEHICULO_H
#define VEHICULO_H
#include<iostream>
using namespace std;
class Vehiculo {
protected:
    string codigo, marca, modelo;
    int age;
    float kilometraje, precio;

public:
    Vehiculo(string c, string m, string mo, int a, float km, float p);
    virtual void mostrar() const;
    virtual ~Vehiculo() {}
};

#endif // VEHICULO_H
