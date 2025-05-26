#include<iostream>
#include<conio.h>
#include <random>
#include<string>
#include"CONTRASE�A.h"
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
//		contrasena = new char[longitud + 1]; // +1 para el car�cter nulo
//		GenerarContrase�a();
//	}
//	// Constructor con longitud personalizada
//	//Contrasena(int len) {
//	//	if (len < 1) len = 8; // Validaci�n m�nima
//	//	longitud = len;
//	//	contrasena = new char[longitud + 1];
//	//	GenerarContrase�a();
//	//}
//	// Destructor para liberar memoria
//	//contrase�a* C1 = new contrase�a(8)
//	~Contrasena() {
//		delete[] contrasena;
//	}
//	/*Contrasena(int longitud = 8) : longitud(longitud) {
//		contrasena = new char[longitud + 1];
//		GenerarContrase�a();
//	}
//
//	~Contrasena() {}*/
//	
//	// M�todo para verificar si la contrase�a es fuerte
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
//	// M�todo para generar una contrase�a aleatoria
//	void GenerarContrase�a() {
//		const char mayusculas[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
//		const char minusculas[] = "abcdefghijklmnopqrstuvwxyz";
//		const char numeros[] = "0123456789";
//		//const char especiales[] = "!@#$%^&*()";
//
//		for (int i = 0; i < longitud; i++) {
//			int tipo = rand() % 3; // 0: may�scula, 1: min�scula, 2: n�mero, 3: especial
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
//	}	// M�todos get
//	char* getContrasena() {
//		return contrasena;
//	}
//
//	int getLongitud() {
//		return longitud;
//	}
//
//	// M�todo set para longitud
//	void setLongitud(int len) {
//		if (len < 1) len = 8; // Validaci�n m�nima
//		delete[] contrasena; // Liberar memoria anterior
//		longitud = len;
//		contrasena = new char[longitud + 1];
//		GenerarContrase�a();
//	}
//};
//
//int main() {
//	srand(time(0)); // Semilla para n�meros aleatorios
//
//	// Generar un tama�o aleatorio entre 5 y 10
//	int tamano = 5 + (rand() % 6); // 5 a 10
//	cout << "Numero de contrasenas: " << tamano << endl;
//
//	// Crear arreglo din�mico de contrase�as
//	Contrasena** contrasenas = new Contrasena * [tamano];
//	bool* esFuerte = new bool[tamano];
//
//	// Inicializar contrase�as con longitudes aleatorias entre 8 y 15
//	for (int i = 0; i < tamano; i++) {
//		int longitudAleatoria = 8 + (rand() % 8); // Longitudes entre 8 y 15
//		contrasenas[i] = new Contrasena(longitudAleatoria);
//		esFuerte[i] = contrasenas[i]->esSeguro();
//	}
//
//	// Mostrar contrase�as y si son fuertes
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
	srand(time(0)); // Semilla para n�meros aleatorios
	int tama�o = rand() % 5 + 6;//5-10
	cout << "NUMERO DE CONTRASE�AS: " << tama�o << endl;

	Contrase�a* contrase�as=new Contrase�a[tama�o];
	bool* esFuerte = new bool[tama�o];

	// Generar contrase�as y evaluar si son fuertes
	for (int  i = 0; i < tama�o; i++)
	{
		contrase�as[i] = Contrase�a(8);
		//contrase�as[i].SetLongitud(8);
		//contrase�as[i].generarContrase�a(); //no es necesario
		esFuerte[i] = contrase�as[i].esSeguro();
	}
	// Mostrar resultados
	for (int i = 0; i < tama�o; i++)
	{
		cout << "Contrase�a" << i + 1 << " : ";cout << contrase�as[i].GetContrase�a() << " FUERTE: " << (esFuerte[i] ? "V" : "F") << endl;
	}

	
	// Liberar memoria
	delete[] contrase�as;
	delete[] esFuerte;

	system("pause>0");
	return 0;
}
