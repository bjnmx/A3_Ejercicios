#include <iostream>
#include <string>

using namespace std;

struct Estudiante {
    string Matricula;
    string Nombre;
    string ApellidoPaterno;
    string ApellidoMaterno;
    string Carrera;
    string CorreoElectronico;
    string Telefono;
};

void altaEstudiante(Estudiante catalogo[], int& ultimoIndice) {
    cout << "Ingrese la matricula del estudiante: ";
    cin >> catalogo[ultimoIndice].Matricula;
    cout << "Ingrese el nombre: ";
    cin >> catalogo[ultimoIndice].Nombre;
    cout << "Ingrese el apellido paterno: ";
    cin >> catalogo[ultimoIndice].ApellidoPaterno;
    cout << "Ingrese el apellido materno: ";
    cin >> catalogo[ultimoIndice].ApellidoMaterno;
    cout << "Ingrese la carrera: ";
    cin >> catalogo[ultimoIndice].Carrera;
    cout << "Ingrese el correo electronico: ";
    cin >> catalogo[ultimoIndice].CorreoElectronico;
    cout << "Ingrese el telefono: ";
    cin >> catalogo[ultimoIndice].Telefono;

    ultimoIndice++;
}

void bajaEstudiante(Estudiante catalogo[], int& ultimoIndice) {
    string matriculaAEliminar;
    cout << "Ingrese la matricula del estudiante a eliminar: ";
    cin >> matriculaAEliminar;

    bool encontrado = false;
    for (int i = 0; i < ultimoIndice; i++) {
        if (catalogo[i].Matricula == matriculaAEliminar) {
            encontrado = true;
            cout << "Estudiante encontrado. Sus datos son:" << endl;
            cout << "Matricula: " << catalogo[i].Matricula << endl;
            cout << "Nombre: " << catalogo[i].Nombre << endl;
            cout << "Apellido Paterno: " << catalogo[i].ApellidoPaterno << endl;
            cout << "Apellido Materno: " << catalogo[i].ApellidoMaterno << endl;
            cout << "Carrera: " << catalogo[i].Carrera << endl;
            cout << "Correo Electronico: " << catalogo[i].CorreoElectronico << endl;
            cout << "Telefono: " << catalogo[i].Telefono << endl;

            char confirmacion;
            cout << "¿Estas seguro de que deseas eliminar al estudiante? (s/n): ";
            cin >> confirmacion;

            if (confirmacion == 's' || confirmacion == 'S') {
                for (int j = i; j < ultimoIndice - 1; j++) {
                    catalogo[j] = catalogo[j + 1];
                }
                ultimoIndice--;
                cout << "Estudiante eliminado correctamente." << endl;
            }
            else {
                cout << "Eliminacion cancelada." << endl;
            }
            break;
        }
    }

    if (!encontrado) {
        cout << "Estudiante no encontrado." << endl;
    }
}

void mostrarMenu(Estudiante catalogo[], int& ultimoIndice) {
    int opcion;
    do {
        cout << "\nMenu Principal\n";
        cout << "1. Alta de estudiantes\n";
        cout << "2. Baja de estudiantes\n";
        cout << "3. Salir\n";
        cout << "Ingrese su opcion: ";
        cin >> opcion;

        switch (opcion) {
        case 1:
            altaEstudiante(catalogo, ultimoIndice);
            break;
        case 2:
            bajaEstudiante(catalogo, ultimoIndice);
            break;
        case 3:
            cout << "Saliendo del programa..." << endl;
            break;
        default:
            cout << "Opcion invalida. Por favor, ingrese una opcion valida." << endl;
            break;
        }
    } while (opcion != 3);
}

int main() {
    const int MAX_ESTUDIANTES = 100;
    Estudiante catalogo[MAX_ESTUDIANTES];
    int ultimoIndice = 0;

    mostrarMenu(catalogo, ultimoIndice);

    return 0;
}
