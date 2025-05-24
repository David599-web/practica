#include<headers/riew.h>
int main() {
    vector<Vehiculo*> vehiculos;
    vector<Cliente> clientes;

    int opcion;
    do {
        cout << "--- MENU ---"<<endl;
        cout << "1. Registrar Vehiculo"<<endl;
        cout << "2. Registrar Cliente"<<endl;
        cout << "3. Consultar Registros"<<endl;
        cout << "4. Salir"<<endl;
        cout << "Seleccione una opcion: ";
        cin >> opcion;
        switch (opcion) {
        case 1:
            registrarVehiculo(vehiculos);
            break;
        case 2:
            registrarCliente(clientes);
            break;
        case 3:
            consultarRegistros(vehiculos, clientes);
            break;
        case 4:
            cout << "Fin del programa...";
            break;
        default:
            cout << "Opcion invalida."<<endl;
        }
    } while (opcion != 4);
    return 0;
}
