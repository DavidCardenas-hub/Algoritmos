#pragma once
#include <random>
#include<string>
using namespace std;
using namespace System;
class Contrase�a {
private:
	int longitud;
	string contrasena;
public:
	//constructor por defecto
	Contrase�a() {
		longitud = 8;
		contrasena.resize(longitud);// Reservar espacio para la cadena
		generarContrase�a();
	}
	//constructor con longitud personalizada
	Contrase�a(int Longitud) {
		longitud = Longitud;
		if (longitud < 1)longitud = 8;
		contrasena.resize(longitud);// Reservar espacio para la cadena
		generarContrase�a();
	}
	~Contrase�a() {}//destructor

	bool esSeguro() {
		int mayusculas = 0, minusculas = 0, numeros = 0;

		for (int i = 0; i < longitud; i++) {
			if (contrasena[i] >= 'A' && contrasena[i] <= 'Z') {
				mayusculas++;
			}
			else if (contrasena[i] >= 'a' && contrasena[i] <= 'z') {
				minusculas++;
			}
			else if (contrasena[i] >= '0' && contrasena[i] <= '9') {
				numeros++;
			}
		}

		return (mayusculas > 2 && minusculas > 1 && numeros > 5);
	}
	void generarContrase�a() {
		const char mayusculas[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
		const char minusculas[] = "abcdefghijklmnopqrstuvwxyz";
		const char numeros[] = "0123456789";
		Random r;
		
		for (int i = 0; i < longitud; i++)
		{
			int tipo = rand() % 3; // 0: may�sculas, 1: min�sculas, 2: n�meros
			if (tipo == 0) {
				contrasena[i] = mayusculas[rand() % 26];
			}
			else if (tipo == 1) {
				contrasena[i] = minusculas[rand() % 26];
			}
			else {
				contrasena[i] = numeros[rand() % 10];
			}
		}
	}


	void SetLongitud(int Longitud) {
		if (Longitud < 1)Longitud = 8;
		longitud = Longitud;
		contrasena.resize(longitud);
		generarContrase�a();
	}
	int Getlongitud() {
		return longitud;
	}
	string GetContrase�a() {
		return contrasena;
	}


};
