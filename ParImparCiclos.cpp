#include <stdio.h>
#include <stdlib.h>

int main() {
    float numero; // Cambiamos el tipo de datos a float para admitir decimales
    char entrada[50];
    int esValido;

    while (1) { // Bucle externo para continuar solicitando números
        do {
            printf("Ingresa un número Brajan: ");
            fgets(entrada, sizeof(entrada), stdin);

            if (sscanf(entrada, "%f", &numero) == 1) { // Cambiamos %d por %f para leer números decimales
                esValido = 1;
            } else {
                printf("Error: No ingresaste un número válido. Inténtalo de nuevo.\n");
                esValido = 0;
            }
        } while (!esValido); // Continuar preguntando mientras la entrada no sea válida

        // Verificar si el número es par o impar
        if ((int)numero % 2 == 0) { // Convertimos el número a entero antes de comprobar la paridad
            printf("%.2f es un número par.\n", numero);
        } else {
            printf("%.2f es un número impar.\n", numero);
        }

        // Preguntar al usuario si desea continuar
        printf("¿Deseas ingresar otro número? (S/N): ");
        fgets(entrada, sizeof(entrada), stdin);
        if (entrada[0] != 'S' && entrada[0] != 's') {
            break; // Salir del bucle externo si la respuesta no es 'S' o 's'
        }
    }

    return 0;
}
