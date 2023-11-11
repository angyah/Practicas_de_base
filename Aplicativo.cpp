#include <iostream> 
#include <fstream>
using namespace std;

class Usuario{
public:	

string nombre;
string apellido;
string Nusuario; 
int edad;

void mostrarPerfil() {
    cout<<"Nombre:" << nombre <<endl; 
    cout<<"Apellido:" << apellido<<endl;
    cout<<"Edad:" << edad << "años" <<endl;   
}
};

int main(){
	//crear un objeto de la clase US
	Usuario usuario;
	
	//obtener la informacion del usuario 
	cout<<"ingresa el nombre:";
    getline(cin, usuario.nombre);
    
    cout<<"ingresa el apellido:";
    getline(cin, usuario.apellido);
    
    cout<<"ingresa la edad:";
    cin>>usuario.edad;
    
    //mostrar el perfil del usuario
    cout<<"\nPerfil del usuario:\n";
    usuario.mostrarPerfil();
	
	//crear o abrir un archivo de texto para escribir el perfil del usuario 
	ofstream archivo ("Perfil_Usuario.txt");
	//verificar si el archivo se abrio correctamente 
	if(archivo.is_open()) {
		//escribir la informacion del usuario en el archivo 
	archivo<< "Nombre:"<< usuario.nombre<<endl;
	archivo<< "Apellido:"<<usuario.apellido<<endl;
	archivo<< "Edad:"<<usuario.edad<<"años"<<endl;
	
	//cerrar el archivo
	archivo.close();
	
	cout<<"\nPerfil del usuario guardado en 'perfil_usuario.txt'.\n";
	}
	
	return 0;
	
}
