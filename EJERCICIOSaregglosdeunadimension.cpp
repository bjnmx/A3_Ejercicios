#include <iostream>

//funcion para llenar el arreglo de calificaciones
void llenarArreglo(double calificaciones[], int n) {
	for (int i = 0; i < n; ++i) {
		std::cout << "Ingrese calificacion " << i + 1 << ": ";
		std::cin >> calificaciones[i];

	}
}

//funcion para calcular el promedio de calificaciones
double calcularPromedio(const double calificaciones[], int n) {
	double suma = 0;
	for (int i = 0; i < n; i++) {
		suma += calificaciones[i];

	}
	return static_cast<double>(suma) / n;

}


int main() {
	int n;

	//solicitar al usuario el tamaño del arreglo
	std::cout << "¿Cuantas calificaciones ingresara? ";
	std::cin >> n;

	//crear un arreglo dinamico para almacenar calificacioes
	double* calificaciones = new double[n];

	//lamar a la funcion para rellenar arreglo 
	llenarArreglo(calificaciones, n);

	// calcular el promedio de las calificaciones
	double promedio = calcularPromedio(calificaciones, n);

	 //mostar respuesta  osea el resultado
	std::cout << "El promedio es: " << promedio << std::endl;

	//liberar la memoria  del arreglo dinamico
	delete[] calificaciones;


	return 0;

}
