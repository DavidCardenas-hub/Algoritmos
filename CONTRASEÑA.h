#pragma once
#include <random>
#include<string>
using namespace std;
using namespace System;
class Contraseña {
private:
	int longitud;
	string contrasena;
public:
	//constructor por defecto
	Contraseña() {
		longitud = 8;
		contrasena.resize(longitud);// Reservar espacio para la cadena
		generarContraseña();
	}
	//constructor con longitud personalizada
	Contraseña(int Longitud) {
		longitud = Longitud;
		if (longitud < 1)longitud = 8;
		contrasena.resize(longitud);// Reservar espacio para la cadena
		generarContraseña();
	}
	~Contraseña() {}//destructor

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
	void generarContraseña() {
		const char mayusculas[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
		const char minusculas[] = "abcdefghijklmnopqrstuvwxyz";
		const char numeros[] = "0123456789";
		Random r;
		
		for (int i = 0; i < longitud; i++)
		{
			int tipo = rand() % 3; // 0: mayúsculas, 1: minúsculas, 2: números
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
		generarContraseña();
	}
	int Getlongitud() {
		return longitud;
	}
	string GetContraseña() {
		return contrasena;
	}


};
