#include "Cliente.cpp"
#include<iostream>
#include<string>

using namespace std;

main(){
	string nit, nombres,apellidos,direccion;
	int telefono;
	
	cout<<"Ingrese Nit: ";
	cin>>nit;
	cout<<"Ingrese Nombres: ";
	cin>>nombres;
	cout<<"Ingrese Apellidos: ";
	cin>>apellidos;
	cout<<"Ingrese Direccion: ";
	cin>>direccion;
	cout<<"Ingrese telefono: ";
	cin>>telefono;
	//instanciar un objeto
	Cliente obj = Cliente(nombres,apellidos,direccion,telefono,nit);
	obj.mostrar();
}


//https://git-scm.com/ instalar esto para la otra clase
//youtu.be/dFXEsKs32Yo todo esto en java


