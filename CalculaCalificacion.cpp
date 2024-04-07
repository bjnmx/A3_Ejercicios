#include <stdio.h>

int main() {
    float calificacion;

    //solicitar al usuario que ingrese la calificacion 
    printf("ingresa la calificacion Profesor Brajan: ");
    scanf("%f", &calificacion);
    
    
    //verifica si la calificacion esta dentro del rango válido
    if(calificacion < 0 || calificacion > 10){
        printf("Error Fuera de Rango Intente de nuevo\n");
    } else if (calificacion == 10) {
        printf("Excelente\n");
    } else if (calificacion >= 9) {
        printf("Muy bien\n");
    } else if (calificacion >= 8) {
        printf("Bien\n");
    } else if (calificacion >= 7) {
        printf("Regular\n");
    } else {
        printf("No acreditado\n");
    }

    return 0;
}
