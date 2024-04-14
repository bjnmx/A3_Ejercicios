#include <iostream>
#include <string>
#include <stdio.h>   //para usar funciones como printf  que es una funcion de salida formateada en C pero esta vez usaremos algo mas flexibe en c++

// uso mas cin y cout evita menos errores  de entrada y salida ya que no realiza combinaciones de tipo de forma predeterminada 
// printf y scanf forman parte de  librerio studio.h pero por seguridad y experiencia  uso mas cin y cout .
using namespace std;

// Definición de la estructura para representar un estudiante
struct Estudiante {
    int matricula;
    string nombre;
    string apellidoPaterno;
    string apellidoMaterno;
    string carrera;
    string correoElectronico;
    string telefono;
};

int main() {
    int opcion;

    do {
        // Mostrar el menú de opciones
        cout << "Menu de opciones\n" << endl;
        cout << "1. Alta de estudiantes\n" << endl;
        cout << "2. Baja de estudiantes\n" << endl;
        cout << "3. Modificaciones de estudiantes\n" << endl;
        cout << "4. Busqueda de estudiantes\n" << endl;
        cout << "5. Salir\n" << endl;
        cout << "Seleccione una opcion entre [1...5]: \n";
        cin >> opcion;

        // Realizar la acción correspondiente a la opción seleccionada
        switch (opcion) {
        case 1: {
            // Alta de estudiantes
            Estudiante nuevoEstudiante;
            cout << "Ingrese la matricula del estudiante: \n";
            cin >> nuevoEstudiante.matricula;
            cout << "Ingrese el nombre del estudiante: \n";
            cin >> nuevoEstudiante.nombre;
            cout << "Ingrese el apellido paterno del estudiante: \n";
            cin >> nuevoEstudiante.apellidoPaterno;
            cout << "Ingrese el apellido materno del estudiante: \n";
            cin >> nuevoEstudiante.apellidoMaterno;
            cout << "Ingrese la carrera del estudiante: \n";
            cin >> nuevoEstudiante.carrera;
            cout << "Ingrese el correo electronico del estudiante: \n";
            cin >> nuevoEstudiante.correoElectronico;
            cout << "Ingrese el telefono del estudiante: \n";
            cin >> nuevoEstudiante.telefono;
            // Aquí iría el código para guardar temporalmente los datos del estudiante
            break;
        }
        case 2:
            // Baja de estudiantes
            // Aquí iría el código para eliminar un estudiante del catálogo
            break;
        case 3:
            // Modificaciones de estudiantes
            // Aquí iría el código para modificar los datos de un estudiante previamente capturado
            break;
        case 4:
            // Búsqueda de estudiantes
            // Aquí iría el código para consultar estudiantes previamente capturados
            break;
        case 5:
            // Salir del programa
            cout << "Saliendo del programa...\n" << endl;
            break;
        default:
            cout << "Opcion no valida. Por favor, seleccione una opción valida.\n" << endl;
            break;
        }

    } while (opcion != 5);

    return 0;
}
