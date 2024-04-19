#include <iostream>
#include <string>
#include <cctype>    //con estas librerias usamos touper y tolower

using namespace std;

string may_min(string product, string & convertidoA) {


	int convert;

	//*cout << "Seleccione como se Imprime Cadena producto: " << end;
	cout << " " << endl;
	cout << "Menu de OPCIONES Seleciona '1 o 2' " << endl;
	cout << " " << endl;
	cout << "Para cambiar la fuente a -MAYUSCULAS- presione opcion ----> 1" << endl; cout << " " << endl;
	cout << "Para cambiar la fuente a -minuscula-  presione opcion ----> 2" << endl;
	cout << " " << endl;
	cin >> convert;

	cin.ignore(); //limpio el buffer delteclado antes de ller la dcadena oh cadena nueva 


	if (convert == 1) {
		for (char& entrada : product) {
			entrada = toupper(entrada);
		}
		convertidoA = "'MAYUSCULAS'";

	}
	else if(convert == 2) {
		for (char& entrada : product) {
			entrada = tolower(entrada);
		}
		convertidoA = "'minuscula'";

	}
		return product;
}

int main() {
	char continua;  //para seguir ingresando cadernas

	do {

	string product; 
	string convertidoA;


	cout << "Ingresa el nombre del Producto: ";
	//cin.ignore(); //limpio el buffer delteclado antes de ller la dcadena oh cadena nueva 
	getline(cin, product);

	product = may_min(product, convertidoA);

	cout << "Ingresaste: -->" << product << "..........Se ha  convertido correctamente su Producto en " << convertidoA << endl;

	cout << "¿Desea continuar cambiando otro producto? (S,N): ";
	cin >> continua;
	cin.ignore(); //limpio el buffer delteclado antes de ller la dcadena oh cadena nueva 

 	

	} while (continua == 'S' || continua == 's');
	return 0;

}



