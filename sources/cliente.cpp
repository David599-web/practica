#include<headers/cliente.h>

Cliente::Cliente(string d, string n, string t, string dir):dni(d), nombre(n), telefono(t), direccion(dir){}

void Cliente::mostrar() const {
    cout << "Cliente: " << nombre << " - DNI: " << dni<< ", Tel: " << telefono << ", Dir: " << direccion << std::endl;
}
