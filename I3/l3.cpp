#ifdef _WIN32
#define _CRT_sECURE_NO_DEPRECATE
#endif

// Inclusión de cabeceras estándar de C
#include <stdio.h> // Entrada y salida estándar
#include <string.h> // Funciones para manipular cadenas
#include <stdbool.h> // Tipos de datos booleanos

// Inclusión de cabeceras de C++
#include <iostream>   // Entrada y salida estándar en C++
#include <string>     // Clase de cadenas en C++
#include <cstring>    // Funciones de manipulación de cadenas en C++
#include <iomanip>    // Manipulación de entrada/salida, como setw
#include <limits>     // Límites numéricos y limpieza del búfer de entrada





// Definición de la estructura Estudiante
struct Estudiante {
	int Matricula;
	char Nombre[50];
	char ApellidoPaterno[50];
	char ApellidoMaterno[50];
	char Carrera[50];
	char Correo[50];
	int Telefono;
	bool valido;

};




// Función para ingresar datos de un estudiante
struct Estudiante AltaEstudiante() {
	struct Estudiante estudiante;
	std::cout << "Matricula: ";
	std::cin >> estudiante.Matricula;
	std::cout << "Nombre: ";
	std::cin >> estudiante.Nombre;
	std::cout << "Apellido Paterno: ";
	std::cin >> estudiante.ApellidoPaterno;
	std::cout << "Apellido Materno: ";
	std::cin >> estudiante.ApellidoMaterno;
	std::cout << "Carrera: ";
	std::cin >> estudiante.Carrera;
	std::cout << "Correo Electronico: ";
	std::cin >> estudiante.Correo;
	std::cout << "Telefono (sin espacios): ";
	std::cin >> estudiante.Telefono;

	std::cout << std::endl;
	std::cout << "Alta del estudiante completa, Gracias!" << std::endl;

	estudiante.valido = true;
	return estudiante;
}






// Función para imprimir los datos de un estudiante
void imprimirEstudiante(struct Estudiante estudiante);


// Función para buscar un estudiante
void BusquedaEstudiante(struct Estudiante estudiante[], int opcionBusqueda);


// Función para marcar un estudiante como eliminado
struct Estudiante EliminarEstudiante() {
	struct Estudiante estudiante;
	estudiante.valido = false;
    return estudiante;

}



// Función principal
int main() {
	int opcion, posicion = 0, matriculaBaja, opcionBusqueda, i, matriculaModificacion, modificar;
	char eliminar;

	struct Estudiante estudiante[20];

    // Menú principal
	do {
		std::cout << "\n\t\tMenu Principal\n";
		std::cout << "1. Alta de estudiantes\n";
		std::cout << "2. Baja de estudiantes\n";
		std::cout << "3. Modificaciones de estudiantes\n";
		std::cout << "4. Mostrar todos\n";
		std::cout << "5. Busqueda de estudiantes\n";
		std::cout << "6. Salir\n";

		std::cout << "Introduce cualquier opcion: ";
		std::cin >> opcion;


		switch (opcion) {
		case 1:
			std::cout << "\n \t \t Alta de estudiantes\n";
			estudiante[posicion] = AltaEstudiante();
			std::cout << "El estudiante ha sido dado de alta exitosamente. Sus datos han sido guardados en el registro " << posicion << std::endl;
			posicion++;
			break;

		case 2:
			std::cout << "\n \t \t Baja de estudiantes\n";
			std::cout << "Ingresa la matricula del estudiante que deseas dar de baja: ";
			std::cin >> matriculaBaja;
			for (i = 0; i < posicion; i++) {
				if (estudiante[i].Matricula == matriculaBaja) {
					std::cout << "YA ENCONTRAMOS AL ESTUDIANTE" << std::endl;
					imprimirEstudiante(estudiante[i]);
					std::cout << "Deseas eliminar la informacion del estudiante? (s/n)" << std::endl;
					std::cin >> eliminar;
					if (eliminar == 's' || eliminar == 'S') {
						std::cout << "Ni modo" << std::endl;
						estudiante[i] = EliminarEstudiante();
						std::cout << "LISTO!!, Estudiante dado de baja" << std::endl;
					}
					else if (eliminar == 'n' || eliminar == 'N') {
						std::cout << "Muy bien, no lo eliminaremos" << std::endl;
					}
					break;
				}
			}
			if (i == posicion) {
				std::cout << "Estudiante no encontrado" << std::endl;
			}
			break;


        case 3:
            std::cout << "\n \t \t Modificaciones de estudiantes\n";
            std::cout << "Ingresa la matricula del estudiante que deseas modificar: ";
            std::cin >> matriculaModificacion;
            for (i = 0; i < posicion; i++) {
                if (estudiante[i].Matricula == matriculaModificacion) {
                    std::cout << "YA ENCONTRAMOS AL ESTUDIANTE" << std::endl;
                    imprimirEstudiante(estudiante[i]);
                    std::cout << "Deseas modificar la informacion del estudiante? (1 Para si/ 2 Para no)" << std::endl;
                    std::cin >> modificar;
                    if (modificar == 2) {
                        std::cout << "Muy bien, no lo modificaremos" << std::endl;
                    }
                    else if (modificar == 1) {
                        std::cout << "Favor de introducir los nuevos datos del estudiante" << std::endl;
                        std::cout << "Nombre: ";
                        std::cin >> estudiante[i].Nombre;
                        std::cout << "Apellido Paterno: ";
                        std::cin >> estudiante[i].ApellidoPaterno;
                        std::cout << "Apellido Materno: ";
                        std::cin >> estudiante[i].ApellidoMaterno;
                        std::cout << "Carrera: ";
                        std::cin >> estudiante[i].Carrera;
                        std::cout << "Correo Electronico: ";
                        std::cin >> estudiante[i].Correo;
                        std::cout << "Telefono (sin espacios): ";
                        std::cin >> estudiante[i].Telefono;
                        std::cout << std::endl;
                        std::cout << "Los datos han sido modificados!" << std::endl;
                    }
                    break;
                }
            }
            if (i == posicion) {
                std::cout << "Estudiante no encontrado" << std::endl;
            }
            break;

        case 4:
            std::cout << "\n \t \t Mostrar Todos\n";
            for (i = 0; i < posicion; i++) {
                if (estudiante[i].valido) {
                    imprimirEstudiante(estudiante[i]);
                }
            }
            break;

        case 5:
            std::cout << "\n \t \t Busqueda de estudiantes\n";
            std::cout << "Indica como buscar al estudiante" << std::endl;
            std::cout << "1. Matricula" << std::endl;
            std::cout << "2. Nombre" << std::endl;
            std::cout << "3. Apellido Paterno" << std::endl;
            std::cout << "4. Apellido Materno" << std::endl;
            std::cout << "Elige un numero: ";
            std::cin >> opcionBusqueda;
            BusquedaEstudiante(estudiante, opcionBusqueda);
            break;

        case 6:
            std::cout << "\nSaliendo del programa..." << std::endl;
            break;

        default:
            std::cout << "Opcion no valida, intenta de nuevo" << std::endl;
            break;
        }

        // Limpiar el buffer de entrada después de leer enteros
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    } while (opcion != 6);

    return 0;
}




// Función para buscar un estudiante según diferentes criterios
void BusquedaEstudiante(struct Estudiante estudiante[], int opcionBusqueda) {
    int matriculaBusqueda, i;
    char nombreBusqueda[50], apellidopaternoBusqueda[50], apellidomaternoBusqueda[50];

    switch (opcionBusqueda) {
    case 1:
        std::cout << "\n\t\t\t Busqueda por Matricula\n";
        std::cout << "Ingresa la matricula que buscas: ";
        std::cin >> matriculaBusqueda;
        for (i = 0; i < 20; i++) {
            if (estudiante[i].Matricula == matriculaBusqueda && estudiante[i].valido) {
                std::cout << "\nYA ENCONTRAMOS AL ESTUDIANTE" << std::endl;
                imprimirEstudiante(estudiante[i]);
                return;
            }
        }
        std::cout << "Estudiante no encontrado" << std::endl;
        break;

    case 2:
        std::cout << "\n\t\t\t Busqueda por Nombre\n";
        std::cout << "Ingresa el nombre que buscas: ";
        std::cin >> nombreBusqueda;
        for (i = 0; i < 20; i++) {
            if (strcmp(estudiante[i].Nombre, nombreBusqueda) == 0 && estudiante[i].valido) {
                std::cout << "\nYA ENCONTRAMOS AL ESTUDIANTE" << std::endl;
                imprimirEstudiante(estudiante[i]);
                return;
            }
        }
        std::cout << "Estudiante no encontrado" << std::endl;
        break;

    case 3:
        std::cout << "\n\t\t\t Busqueda por Apellido Paterno\n";
        std::cout << "Ingresa el apellido paterno que buscas: ";
        std::cin >> apellidopaternoBusqueda;
        for (i = 0; i < 20; i++) {
            if (strcmp(estudiante[i].ApellidoPaterno, apellidopaternoBusqueda) == 0 && estudiante[i].valido) {
                std::cout << "\nYA ENCONTRAMOS AL ESTUDIANTE" << std::endl;
                imprimirEstudiante(estudiante[i]);
                return;
            }
        }
        std::cout << "Estudiante no encontrado" << std::endl;
        break;

    case 4:
        std::cout << "\n\t\t\t Busqueda por Apellido Materno\n";
        std::cout << "Ingresa el apellido materno que buscas: ";
        std::cin >> apellidomaternoBusqueda;
        for (i = 0; i < 20; i++) {
            if (strcmp(estudiante[i].ApellidoMaterno, apellidomaternoBusqueda) == 0 && estudiante[i].valido) {
                std::cout << "\nYA ENCONTRAMOS AL ESTUDIANTE" << std::endl;
                imprimirEstudiante(estudiante[i]);
                return;
            }
        }
        std::cout << "Estudiante no encontrado" << std::endl;
        break;

    default:
        std::cout << "Error Busqueda" << std::endl;
        break;
    }
}





// Función para imprimir los datos de un estudiante
void imprimirEstudiante(struct Estudiante estudiante) {
    std::cout << "Matricula: " << estudiante.Matricula << std::endl;
    std::cout << "Nombre: " << estudiante.Nombre << std::endl;
    std::cout << "Apellido Paterno: " << estudiante.ApellidoPaterno << std::endl;
    std::cout << "Apellido Materno: " << estudiante.ApellidoMaterno << std::endl;
    std::cout << "Carrera: " << estudiante.Carrera << std::endl;
    std::cout << "Correo Electronico: " << estudiante.Correo << std::endl;
    std::cout << "Telefono: " << estudiante.Telefono << std::endl;
    std::cout << std::endl;
}

