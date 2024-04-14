#include <iostream>
#include <string>

// Definicion del tipo de datos struct para representar un estudiante
struct Estudiante {
    int matricula;
    std::string nombre;
    std::string carrera;
    double promedio;
    std::string direccion;
};

// Funcion para capturar los datos de un estudiante
void capturarDatos(Estudiante& estudiante) {
    std::cout << "Ingrese la matricula del estudiante: ";
    std::cin >> estudiante.matricula;

    std::cin.ignore(); // Limpiar el buffer del teclado

    std::cout << "Ingrese el nombre del estudiante: ";
    std::getline(std::cin, estudiante.nombre);

    std::cout << "Ingrese la carrera del estudiante: ";
    std::getline(std::cin, estudiante.carrera);

    std::cout << "Ingrese el promedio del estudiante: ";
    std::cin >> estudiante.promedio;

    std::cin.ignore(); // Limpiar el buffer del teclado

    std::cout << "Ingrese la direccion del estudiante: ";
    std::getline(std::cin, estudiante.direccion);
}

// Funcion para mostrar los datos de un estudiante
void mostrarDatos(const Estudiante& estudiante) {
    std::cout << "La matricula del estudiante es: " << estudiante.matricula << std::endl;
    std::cout << "El nombre del estudiante es: " << estudiante.nombre << std::endl;
    std::cout << "La carrera del estudiante es: " << estudiante.carrera << std::endl;
    std::cout << "El promedio del estudiante es: " << estudiante.promedio << std::endl;
    std::cout << "La direccion del estudiante es: " << estudiante.direccion << std::endl;
}

int main() {
    // Crear una instancia del tipo struct Estudiante
    Estudiante estudiante;

    // Capturar los datos del estudiante
    capturarDatos(estudiante);

    // Mostrar los datos del estudiante
    mostrarDatos(estudiante);

    return 0;
}
