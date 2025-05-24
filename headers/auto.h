#ifndef AUTO_H
#define AUTO_H
#include <headers/vehiculo.h>
class Auto : public Vehiculo {
public:
    Auto(string c, string m, string mo, int a, float km, float p);
    void mostrar() const override;
};

#endif // AUTO_H
