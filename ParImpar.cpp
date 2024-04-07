#include <stdio.h>
#include <math.h>

int main() {
    float numero; // Declaramos una variable llamada 'numero' para almacenar el número ingresado por el usuario.

    // Solicitar al usuario que ingrese un número
    printf("Ingresa un número para calcular si es Par o Impar por favor Brajan: ");
    scanf("%f", &numero); // Leer el número ingresado por el usuario y almacenarlo en la variable 'numero'.

    // Obtener la parte entera del número
    int parte_entera = (int)numero;

    // Verificar si la parte entera del número es par o impar
    if (parte_entera % 2 == 0) {
        printf("el número ingresado es %.2f -> par.\n", numero); // Si la parte entera es par, el número es considerado par.
    } else {
        printf("el número ingresado es %.2f -> impar.\n", numero); // Si la parte entera es impar, el número es considerado impar.
    }

    return 0; // Indica que el programa se ejecutó correctamente.
}
