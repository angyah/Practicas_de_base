#include<iostream>
#include <fstream>
#include <string>

using namespace std;

class Usuario {
public:
	string nombreUsuario;
	string contrasena;
};

bool realizarLogin(const string& nombreUsuario, const string contrasena, const string& archivo) {
	ifstream archivoUsuarios(archivo);
	
	if (archivoUsuarios.is_open()){
		Usuario usuarioActual;
		while (archivoUsuario >> usuarioActual.nombreUsuario >> usuarioActual.contrasena){
			archivoUsuarios.close();
			return true; 
		}
	}
	archivoUsuarios.close();
}
