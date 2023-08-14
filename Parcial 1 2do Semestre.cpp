#include <iostream>
using namespace std;
void seleccion(int arr[], int n)

{
	for (int i = 0; i < n - 1; i++) {
		int min_idx = i;
		for (int j = i + 1; j < n; j++) {
			if (arr[j] < arr[min_idx])
				min_idx = j;
		}
		// Intercambiar el elemento mínimo encontrado con el
		//primer elemento no ordenado
		int temp = arr[min_idx];
		arr[min_idx] = arr[i];
		arr[i] = temp;
	}
}

int busquedaLineal(int arreglo[], int tamano, int valorBuscado) {
	for (int i = 0; i < tamano; i++) {
		if (arreglo[i] == valorBuscado) {
			return i; // Se encontró el valor, devuelve el índice
		}
	}
	return 99999; // No se encontró el valor
}

int busquedaBinaria(int arreglo[], int inicio, int fin, int valorBuscado) {
	if (inicio <= fin) {
		int medio = inicio + (fin - inicio) / 2;
		if (arreglo[medio] == valorBuscado) {
			return medio; // Se encontró el valor, devuelve el índice
		}
		else if (arreglo[medio] > valorBuscado) {
			return busquedaBinaria(arreglo, inicio, medio - 1, valorBuscado); // Buscar en la mitad inferior
		}
		return busquedaBinaria(arreglo, medio + 1, fin, valorBuscado); // Buscar en la mitad superior
	}
	return -1; // No se encontró el valor
}




int main()
{
	int opcionesmen;
	int contadordat = 0;
	string strarr1, strarr2, strarr3, strarr4, strarr5, strarr6, strarr7, strarr8, strarr9, strarr10;
	int arrn1, arrn2, arrn3, arrn4, arrn5, arrn6, arrn7, arrn8, arrn9, arrn10;
	cout << "Llene el arreglo con 10 casillas numericas: " << endl;
	cout << "Ingrese su primer numero: " << endl;
	cin >> arrn1;
	cout << "Ingrese su segundo numero: " << endl;
	cin >> arrn2;
	cout << "Ingrese su tercer numero: " << endl;
	cin >> arrn3;
	cout << "Ingrese su cuarto numero: " << endl;
	cin >> arrn4;
	cout << "Ingrese su quinto numero: " << endl;
	cin >> arrn5;
	cout << "Ingrese su sexto numero: " << endl;
	cin >> arrn6;
	cout << "Ingrese su septimo numero:" << endl;
	cin >> arrn7;
	cout << "Ingrese su octavo numero " << endl;
	cin >> arrn8;
	cout << "Ingrese su noveno numero " << endl;
	cin >> arrn9;
	cout << "Ingrese su decimo numero " << endl;
	cin >> arrn10;
	cout << "Llene el arreglo con 10 casillas de cadena: " << endl;
	cout << "Ingrese su primer dato: " << endl;
	cin >> strarr1;
	cout << "Ingrese su segundo dato: " << endl;
	cin >> strarr2;
	cout << "Ingrese su tercer dato: " << endl;
	cin >> strarr3;
	cout << "Ingrese su cuarto dato: " << endl;
	cin >> strarr4;
	cout << "Ingrese su quinto dato: " << endl;
	cin >> strarr5;
	cout << "Ingrese su sexto dato: " << endl;
	cin >> strarr6;
	cout << "Ingrese su septimo dato:" << endl;
	cin >> strarr7;
	cout << "Ingrese su octavo dato: " << endl;
	cin >> strarr8;
	cout << "Ingrese su noveno dato: " << endl;
	cin >> strarr9;
	cout << "Ingrese su decimo dato: " << endl;
	cin >> strarr10;
	cout << "Sus datos son:  " << endl;
	cout << "Numericos:  " << arrn1 << arrn2 << arrn3 << arrn4 << arrn5 << arrn6 << arrn7 << arrn8 << arrn9 << arrn10 << endl;
	cout << "Cadena de texto:  " << strarr1 << strarr2 << strarr3 << strarr4 << strarr5 << strarr6 << strarr7 << strarr8 << strarr9 << strarr10;


	cout << "Seleccione una opcion de que quiere hacer  " ;
	cout << "1. Orenar numeros ";
	cout << "6. Odenar datos todas ocurrencias ";

	cin >> opcionesmen;



	if (opcionesmen == 1)
	{

		int arr[] = { arrn1, arrn2, arrn3, arrn4, arrn5, arrn6, arrn7, arrn8, arrn9, arrn10 };
		int n = sizeof(arr) / sizeof(arr[0]);
		seleccion(arr, n);
		cout << "Arreglo ordenado de forma Ascendente: \n" << endl;
		for (int i = 0; i < n; i++)
			cout << arr[i] << " " << endl;
		system("Pause");



	}

	if (opcionesmen == 6)
	{

		cout << "6. Odenar datos todas ocurrencias ";


	}
	

}
