#include<headers/auto.h>
Auto::Auto(string c, string m, string mo, int a, float km, float p):Vehiculo(c, m, mo, a, km, p){}
void Auto::mostrar() const {
    cout << "[AUTO] ";
    Vehiculo::mostrar();
}
