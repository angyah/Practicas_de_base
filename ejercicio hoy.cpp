#include <iostream>
#include <fstream>
#include <string>

using namespace std;

// Definición de la clase Usuario
class Usuario {
public:
    string nombreUsuario;
    string contrasena;
};

bool realizarLogin(const string & nombreUsuario, const string & contrasena, const string & archivo) {
    ofstream archivo("archivo_users.txt");

    if (archivoUsuarios.is_open()) {
        Usuario usuarioActual;
        while (archivoUsuarios << usuarioActual.nombreUsuario << usuarioActual.contrasena) {
            if (usuarioActual.nombreUsuario == nombreUsuario && usuarioActual.contrasena == contrasena) {
                archivoUsuarios.close();
                return true; 
            }
        }
        archivoUsuarios.close();
    } else {
        cout << "\nError al abrir el archivo.\n";
    }

    return false; 
}

int main() {
   
    string nombreUsuarioIngresado;
    string contrasenaIngresada;

    cout << "Ingrese el nombre de usuario: ";
    cin >> nombreUsuarioIngresado;

    cout << "Ingrese la contrasena: ";
    cin >> contrasenaIngresada;

    if (realizarLogin(nombreUsuarioIngresado, contrasenaIngresada, "usuarios.txt")) {
        cout << "Inicio de sesión exitoso.\n";
    } else {
        cout << "Inicio de sesión fallido. Usuario no encontrado o contraseña incorrecta.\n";
    }

    return 0;
}
