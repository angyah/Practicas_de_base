#include <iostream>
#include <studio.h>
using namespace std;
int main (){
string user,pass, usuario = "sistemas", password = ""Admin01"";
	char seguir, opc;
	int multiplicacion, numero, i;
	cout<<"Bienvenido(a) por favor ingresa al sistema:"
	cin>>user;
	cout<<"ingresa tu password:"
	cin>>pass;
	if(user == usuario && pass == password){
		do{
			cout<<"Por favor Ingresa el número de la tabla a imprimir"
			cin>>numero;
			for(int i = 1;i<=10;i++){
			    multiplicacion = i*numero;
			    cout<<numero<<" x "<<i<<" = "<<multiplicacion<<endl;
				}
				cout<<"¿Quieres generar otra tablabla de multiplicar(s/n)?";
			}
			fflush(stdin);
			cin>>seguir;
		}
		while(seguir!='n');
		{
		
	else{
		cout<<"Usuario no valido, por favor contacta a soporte";
	}
	cin.get();
	return 0;
	}
		
	
	
	
}
	
	
