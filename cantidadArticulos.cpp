
#include <stdio.h>

int main() {
    int cantidadArticulos;
    int i;
    float total = 0.0f;
    char respuesta;

    printf("Ingrese la cantidad de articulos: ");
    scanf("%d", &cantidadArticulos);

    for (i = 1; i <= cantidadArticulos; i++) {
        int cantidad;
        float precio;

        printf("Articulo %d cantidad: ", i);
        scanf("%d", &cantidad);

        printf("Articulo %d precio: ", i);
        scanf("%f", &precio);

        total += cantidad * precio;

        printf("¿Desea ingresar otro articulo? (S/N): ");
        scanf(" %c", &respuesta); // Espacio antes del %c para evitar problemas de buffer

        if (respuesta != 'S' && respuesta != 's') {
            break; // Salir del bucle si la respuesta no es 'S' o 's'
        }
    }

    printf("Total a pagar: $%.2f\n" , total );

    return 0;
}
