#include<headers/vehiculo.h>
Vehiculo::Vehiculo(string c, string m, string mo, int a, float km, float p):codigo(c), marca(m), modelo(mo), age(a), kilometraje(km), precio(p){}
void Vehiculo::mostrar() const {
    cout<<"Vehiculo: "<<marca<<" "<<modelo<<" ("<<age<<"), "<<kilometraje<<" km - $"<<precio<<endl;
}
