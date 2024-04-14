#include <iostream>

//funcccion para determinar si el nnumero es par o impar
bool esPar(int numero) {
    return (numero % 2 == 0);
}

int main() {
    char continuarEjecucion; //variable para almacenar respuesta de usuario
    do {
        int num;

        //solicitar al usuario que ingrese un numero 

        std::cout << "Ingrese el numero que evaluaremos ";
        std::cin >> num;

        //lamar la funcion es par para deteerminar si el numero es par oh impar 

        if (esPar(num)) {
            std::cout << "El numero " << num << " es par" << std::endl;

        }
        else {
            std::cout << "El numero " << num << " es impar" << std::endl;
        }


        //preguntar si desea continuar
        std::cout << "¿Desea continuar? ( s / n ): ";
        std::cin >> continuarEjecucion;

    } while (continuarEjecucion == 's' || continuarEjecucion == 'no');
   
    return 0;
}
