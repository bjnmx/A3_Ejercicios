#include <iostream>

const int MAX_FILAS = 10;
const int MAX_COLUMNAS = 10;

// Funcion para llenar una matriz
void llenarMatriz(int matriz[][MAX_COLUMNAS], int filas, int columnas) {
    for (int i = 0; i < filas; ++i) {
        for (int j = 0; j < columnas; ++j) {
            std::cout << "Ingrese el valor de a" << i + 1 << j + 1 << ": ";
            std::cin >> matriz[i][j];
        }
    }
}

// Funcion para sumar dos matrices
void sumarMatrices(const int matrizA[][MAX_COLUMNAS], const int matrizB[][MAX_COLUMNAS], int matrizResultado[][MAX_COLUMNAS], int filas, int columnas) {
    for (int i = 0; i < filas; ++i) {
        for (int j = 0; j < columnas; ++j) {
            matrizResultado[i][j] = matrizA[i][j] + matrizB[i][j];
        }
    }
}

// Funcion para mostrar una matriz
void mostrarMatriz(const int matriz[][MAX_COLUMNAS], int filas, int columnas) {
    for (int i = 0; i < filas; ++i) {
        for (int j = 0; j < columnas; ++j) {
            std::cout << "C" << i + 1 << j + 1 << " = " << matriz[i][j] << std::endl;
        }
    }
}

int main() {
    int filas, columnas;

    // Solicitar al usuario el tamano de las matrices
    std::cout << "Ingrese el numero de filas: ";
    std::cin >> filas;
    std::cout << "Ingrese el numero de columnas: ";
    std::cin >> columnas;

    // Crear las matrices A y B
    int matrizA[MAX_FILAS][MAX_COLUMNAS], matrizB[MAX_FILAS][MAX_COLUMNAS], matrizC[MAX_FILAS][MAX_COLUMNAS];

    // Llenar la matriz A
    std::cout << "\nMatriz A\n";
    llenarMatriz(matrizA, filas, columnas);

    // Llenar la matriz B
    std::cout << "\nMatriz B\n";
    llenarMatriz(matrizB, filas, columnas);

    // Sumar las matrices A y B
    sumarMatrices(matrizA, matrizB, matrizC, filas, columnas);

    // Mostrar el resultado de la suma
    std::cout << "\nMatriz C = Matriz A + Matriz B\n";
    mostrarMatriz(matrizC, filas, columnas);

    return 0;
}
