#include <iostream>

using namespace std;


void ordenamientoPorSeleccion(int arr[], int n) {

	for (int i = 0; i < n - 1; i++) {
		int min_idx = i;
		for (int j = i + 1; j < n; j++) {
			if (arr[j] < arr[min_idx]) {
				min_idx = j;
			}
		}

		int temp = arr[min_idx];
		arr[min_idx] = arr[i];
		arr[i] = temp;
	}
}

void ordenamientoPorInsercion(int arr[], string arrST[], int n) {

	for (int i = 1; i < n; i++) {

		int key = arr[i];
		int j = i - 1;
			
		while (j >= 0 && arr[j] > key) {
			arr[j + 1] = arr[j];
			swap(arrST[j], arrST[j + 1]);
			j--;
		}

		arr[j + 1] = key;

	}
}

void burbujayseleccion(int arr[], int n) {

	for (int i = 0; i < n - 1; i++) {
		int min_idx = i;
		for (int j = 0; j < n - i - 1; j++) { //Combinado
			if (arr[j] > arr[j + 1]) { //Combinado
				// Aca se realiza el intercambio de elementos si no estan ordenados
				int temp = arr[min_idx];
				arr[min_idx] = arr[i];
				arr[i] = temp;
			}
		}
	}
}

int busquedaLineal(int arr[], int tamano, int valorBuscado) {
	for (int i = 0; i < tamano; i++) {
		if (arr[i] == valorBuscado) {
			return i; // Se encontró el valor, devuelve el índice
		}
	}
	return -1; // No se encontró el valor
}

int busquedaBinaria(int arreglo[], int inicio, int fin, int valorBuscado) {
	if (inicio <= fin) {
		int medio = inicio + (fin - inicio) / 2;

		if (arreglo[medio] == valorBuscado) {
			return medio;//Se encontró el valor, devuelve el indice
		}
		if (arreglo[medio] > valorBuscado) {
			return busquedaBinaria(arreglo, inicio, medio - 1, valorBuscado);//Buscar en la mitad inferior
		}
		return busquedaBinaria(arreglo, medio + 1, fin, valorBuscado);//
		//Buscar en la mitad superior

	}
	return -1;//No se encontró el valor
}

//--------------------------------------------------------------------------------

//Ejercicio 1
void ordenamientoSeleccionNumerico(int arr[], int tamanio) {

	int arrCopia[10]{};

	for (int i = 0; i < tamanio; i++) {

		arrCopia[i] = arr[i];

	}

	ordenamientoPorSeleccion(arrCopia, tamanio);

	cout << "\n\tValores ordenados\n";
	for (int i = 0; i < tamanio; i++) {

		cout << arrCopia[i] << " ";

	}

	cout << endl;
}

//ejercicio 3
void ordenamientoCombinado(int arr[], int tamanio) {

	int arrCopia[10]{};

	for (int i = 0; i < tamanio; i++) {

		arrCopia[i] = arr[i];

	}

	burbujayseleccion(arrCopia, tamanio);
	for (int i = 0; i < tamanio; i++) {

		cout << arrCopia[i] << " ";
	}

}

//Ejercicio 4
void busquedaLinealNumerico(int arr[], int tamanio) {

	int valor = 0;

	cout << "\n\tBusqueda de un elemento";
	cout << "\nIngrese el valor que quiere buscar: ";
	cin >> valor;

	int resultado = busquedaLineal(arr, tamanio, valor);

	if (resultado != -1) {
		cout << "El valor " << valor << " se encuentra en el indice " << resultado + 1 << endl;
	}
	else {
		cout << "El valor " << valor << " no se encuentra en el arreglo" << endl;
	}


}

//ejercicio 5
void busquedaBinariaNumerico(int arr[], int tamanio) {

	int arrCopia[10]{};

	for (int i = 0; i < tamanio; i++) {

		arrCopia[i] = arr[i];

	}

	int valor = 0;

	ordenamientoPorSeleccion(arrCopia, tamanio);
	cout << "\n\tBusqueda binaria de un elemento";
	cout << "\nIngrese el valor que quiere buscar: ";
	cin >> valor;

	int resultado = busquedaBinaria(arrCopia, 0, tamanio - 1, valor);

	cout << endl;
	cout << "\tArreglo:\n";
	for (int i = 0; i < tamanio; i++) {

		cout << arrCopia[i] << " ";

	}
	cout << endl;

	if (resultado != -1) {
		cout << "El valor " << valor << " se encuentra en el indice " << resultado + 1 << endl;
	}
	else {
		cout << "El valor " << valor << " no se encuentra en el arreglo" << endl;
	}

}

//ejercicio 6
void contadorRepetidos(int arr[], int n) {

	int arrCopia[10]{};

	for (int i = 0; i < n; i++) {

		arrCopia[i] = arr[i];

	}

	ordenamientoPorSeleccion(arrCopia, n);


	int contadorRepetidos = 0, k = 0;
	int mayor = 0, mayorAux = 0;
	int guardarRepetidos[10]{};

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (arr[i] != arr[i - 1]) {
				if (arr[i] == arr[j]) {
					contadorRepetidos++;
				}
			}
		}
		if (contadorRepetidos > 1) {
			guardarRepetidos[k] = contadorRepetidos; k++;
			mayor = (mayor > contadorRepetidos) ? mayor : contadorRepetidos;
			cout << arr[i] << ": " << contadorRepetidos << endl;
		}
		contadorRepetidos = 0;
	}
}




//------------------------------------------------------------------------
void arregloDeNumeros() {

	int arregloNumerico[10]{};
	int tamanio = 10, menuOpcion = 0, repetir = 0;
	
	system("cls");
	cout << "Llene el arreglo con 10 casillas numericas" << endl;
	
	for (int i = 0; i < tamanio; i++) {
		cout << i + 1 << ". Ingrese un numero: ";
		cin >> arregloNumerico[i];
	}

		cout << "\n\tMenu de opciones";
		cout << "\n1. Ordenar en orden ascendente";
		cout << "\n2. Busqueda lineal de un elemento";
		cout << "\n3. Busqueda binaria de un elemento";
		cout << "\n4. Numeros repetidos";
		cout << "\n5. Ordenamiento basado en los enfoques de burbuja y seleccion";
		cout << "\nNumero de opcion: ";
		cin >> menuOpcion;

		switch (menuOpcion) {

		case 1:
			ordenamientoSeleccionNumerico(arregloNumerico, tamanio);
			break;
		case 2:
			busquedaLinealNumerico(arregloNumerico, tamanio);
			break;
		case 3:
			busquedaBinariaNumerico(arregloNumerico, tamanio);
			break;
		case 4:
			contadorRepetidos(arregloNumerico, tamanio);
			break;
		case 5:
			ordenamientoCombinado(arregloNumerico, tamanio);
			break;
		}
		


		
}

void arregloDeCadenas() {

	system("cls");
	string arregloCadena[10]{};
	int iniciales[10]{};
	int tamanio = 10;

	//ejercicio 2
	cout << "\tIngreso de datos\n";
	for (int i = 0; i < tamanio; i++) {

		cout << i + 1 << ". Ingrese una palabra: ";
		cin >> arregloCadena[i];
		iniciales[i] = int(arregloCadena[i][0]);

	}

	ordenamientoPorInsercion(iniciales, arregloCadena, tamanio);

	cout << "\n\tArreglo ordenado\n";
	for (int i = 0; i < tamanio; i++) {

		cout << arregloCadena[i] << endl;

	}


}

int main() {

	int opcionMenu = 0;

	cout << "\tMenu de opciones";
	cout << "\n1. Llenar un arreglo de numeros";
	cout << "\n2. Llenar un arreglo de cadenas";
	cout << "\nOpcion: "; cin >> opcionMenu;

	switch (opcionMenu) {

		case 1:
			arregloDeNumeros();
			break;
		case 2:
			arregloDeCadenas();
			break;
	}

}