#include<headers/riew.h>
#include<headers/auto.h>

void registrarVehiculo(vector<Vehiculo*>& vehiculos) {
    string codigo, marca, modelo;
    int age;
    float km, precio;

    cout << "Codigo: ";
    getline(cin, codigo);
    cout << "Marca: ";
    getline(cin, marca);
    cout << "Modelo: ";
    getline(cin, modelo);
    cout << "Age: ";
    cin >> age;
    cout << "Kilometraje: ";
    cin >> km;
    cout << "Precio: ";
    cin >> precio;
    Vehiculo* v = new Auto(codigo, marca, modelo, age, km, precio);
    vehiculos.push_back(v);
    cout << "Vehiculo registrado correctamente.\n";
}

void registrarCliente(vector<Cliente>& clientes) {
    string dni, nombre, telefono, direccion;

    cout << "DNI: "; getline(cin, dni);
    cout << "Nombre: "; getline(cin, nombre);
    cout << "Telefono: "; getline(cin, telefono);
    cout << "Direccion: "; getline(cin, direccion);

    Cliente c(dni, nombre, telefono, direccion);
    clientes.push_back(c);
    cout << "Cliente registrado correctamente.\n";
}

void consultarRegistros(const vector<Vehiculo*>& vehiculos, const vector<Cliente>& clientes){
    cout << "\n--- Vehiculos Registrados ---\n";
    if (vehiculos.empty()) {
        cout << "No hay vehículos registrados.\n";
    } else {
        for (const auto& v : vehiculos)
            v->mostrar();
    }

    cout << "\n--- Clientes Registrados ---\n";
    if (clientes.empty()) {
        cout << "No hay clientes registrados.\n";
    } else {
        for (const auto& c : clientes)
            c.mostrar();
    }
}
