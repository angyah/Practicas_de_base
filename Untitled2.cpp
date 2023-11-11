#include <iostream>
using namespace std;
int main(){
	float nota1,nota2,nota3,nota4,nota5,promedio;
	cout<<"Digita tu primera nota"<<endl;
	cin>>nota1;
	cout<<"Digita tu segunda nota"<<endl;
	cin>>nota2;
	cout<<"Digita tu tercera nota"<<endl;
	cin>>nota3;
	cout<<"Digita tu cuarta nota"<<endl;
	cin>>nota4;
	cout<<"Digita tu quinta nota"<<endl;
	cin>>nota5,
	promedio= nota1+nota2+nota3+nota4+nota5/5;
	if(promedio>=7){
		cout<<"Esta aprobado";
	}
	else{
		cout<<"Estas reprobado";
	}
	
}
