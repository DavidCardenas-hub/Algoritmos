#include<iostream>
#include<conio.h>
#include <random>
#include<string>
#include"CONTRASEÑA.h"
using namespace std;
using namespace System;
//
//
//class Contrasena {
//private:
//	int longitud;
//	char* contrasena;
//
//public:
//	// Constructor por defecto (longitud = 8)
//	Contrasena() {
//		longitud = 8;
//		contrasena = new char[longitud + 1]; // +1 para el carácter nulo
//		GenerarContraseña();
//	}
//	// Constructor con longitud personalizada
//	//Contrasena(int len) {
//	//	if (len < 1) len = 8; // Validación mínima
//	//	longitud = len;
//	//	contrasena = new char[longitud + 1];
//	//	GenerarContraseña();
//	//}
//	// Destructor para liberar memoria
//	//contraseña* C1 = new contraseña(8)
//	~Contrasena() {
//		delete[] contrasena;
//	}
//	/*Contrasena(int longitud = 8) : longitud(longitud) {
//		contrasena = new char[longitud + 1];
//		GenerarContraseña();
//	}
//
//	~Contrasena() {}*/
//	
//	// Método para verificar si la contraseña es fuerte
//	bool esSeguro() {
//		int mayusculas = 0, minusculas = 0, numeros = 0;
//
//		for (int i = 0; i < longitud; i++) {
//			if (contrasena[i] >= 'A' && contrasena[i] <= 'Z') {
//				mayusculas++;
//			}
//			else if (contrasena[i] >= 'a' && contrasena[i] <= 'z') {
//				minusculas++;
//			}
//			else if (contrasena[i] >= '0' && contrasena[i] <= '9') {
//				numeros++;
//			}
//		}
//
//		return (mayusculas > 2 && minusculas > 1 && numeros > 5);
//	}
//
//	// Método para generar una contraseña aleatoria
//	void GenerarContraseña() {
//		const char mayusculas[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
//		const char minusculas[] = "abcdefghijklmnopqrstuvwxyz";
//		const char numeros[] = "0123456789";
//		//const char especiales[] = "!@#$%^&*()";
//
//		for (int i = 0; i < longitud; i++) {
//			int tipo = rand() % 3; // 0: mayúscula, 1: minúscula, 2: número, 3: especial
//			if (tipo == 0) {
//				contrasena[i] = mayusculas[rand() % 26];
//			}
//			else if (tipo == 1) {
//				contrasena[i] = minusculas[rand() % 26];
//			}
//			else if (tipo == 2) {
//				contrasena[i] = numeros[rand() % 10];
//			}
//			//else {
//				//contrasena[i] = especiales[rand() % 10];
//			//}
//		}
//		contrasena[longitud] = '\0'; // Terminar la cadena
//	}	// Métodos get
//	char* getContrasena() {
//		return contrasena;
//	}
//
//	int getLongitud() {
//		return longitud;
//	}
//
//	// Método set para longitud
//	void setLongitud(int len) {
//		if (len < 1) len = 8; // Validación mínima
//		delete[] contrasena; // Liberar memoria anterior
//		longitud = len;
//		contrasena = new char[longitud + 1];
//		GenerarContraseña();
//	}
//};
//
//int main() {
//	srand(time(0)); // Semilla para números aleatorios
//
//	// Generar un tamaño aleatorio entre 5 y 10
//	int tamano = 5 + (rand() % 6); // 5 a 10
//	cout << "Numero de contrasenas: " << tamano << endl;
//
//	// Crear arreglo dinámico de contraseñas
//	Contrasena** contrasenas = new Contrasena * [tamano];
//	bool* esFuerte = new bool[tamano];
//
//	// Inicializar contraseñas con longitudes aleatorias entre 8 y 15
//	for (int i = 0; i < tamano; i++) {
//		int longitudAleatoria = 8 + (rand() % 8); // Longitudes entre 8 y 15
//		contrasenas[i] = new Contrasena(longitudAleatoria);
//		esFuerte[i] = contrasenas[i]->esSeguro();
//	}
//
//	// Mostrar contraseñas y si son fuertes
//	for (int i = 0; i < tamano; i++) {
//		cout << "Contrasena " << i + 1 << ": " << contrasenas[i]->getContrasena()
//			<< " : Fuerte: " << (esFuerte[i] ? "V" : "F") << endl;
//	}
//
//	 Liberar memoria
//	for (int i = 0; i < tamano; i++) {
//		delete contrasenas[i];
//	}
//	delete[] contrasenas;
//	delete[] esFuerte;
//	system("pause>0");
//	return 0;
//}
//
//

int main() {
	srand(time(0)); // Semilla para números aleatorios
	int tamaño = rand() % 5 + 6;//5-10
	cout << "NUMERO DE CONTRASEÑAS: " << tamaño << endl;

	Contraseña* contraseñas=new Contraseña[tamaño];
	bool* esFuerte = new bool[tamaño];

	// Generar contraseñas y evaluar si son fuertes
	for (int  i = 0; i < tamaño; i++)
	{
		contraseñas[i] = Contraseña(8);
		//contraseñas[i].SetLongitud(8);
		//contraseñas[i].generarContraseña(); //no es necesario
		esFuerte[i] = contraseñas[i].esSeguro();
	}
	// Mostrar resultados
	for (int i = 0; i < tamaño; i++)
	{
		cout << "Contraseña" << i + 1 << " : ";cout << contraseñas[i].GetContraseña() << " FUERTE: " << (esFuerte[i] ? "V" : "F") << endl;
	}

	
	// Liberar memoria
	delete[] contraseñas;
	delete[] esFuerte;

	system("pause>0");
	return 0;
}
