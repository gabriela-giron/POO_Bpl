#include "Empleado.cpp"
#include<iostream>
#include<string>

using namespace std;

main(){
	string nombres,apellidos,direccion,puesto;
	int telefono, codigo_empleado, sueldo;
	
	cout<<"Ingrese Nombres: ";
	cin>>nombres;
	cout<<"Ingrese Apellidos: ";
	cin>>apellidos;
	cout<<"Ingrese Direccion: ";
	cin>>direccion;
	cout<<"Ingrese telefono: ";
	cin>>telefono; 
	cout<<"Ingrese su codigo de empleado: ";
	cin>>codigo_empleado;
	cout<<"Ingrese sueldo: Q";
	cin>>sueldo;
	cout<<"Ingrese puesto: ";
	cin>>puesto;
	//instanciar un objeto
	Empleado obj = Empleado(nombres,apellidos,direccion,telefono,codigo_empleado,sueldo,puesto);
	obj.mostrarEmpleado();
}
