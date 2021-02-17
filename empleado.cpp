#include "Persona.cpp"
#include<iostream>
#include<string>

using namespace std;

class Empleado : Persona{
	//atributo
	private : string puesto;
			int sueldo, codigo_empleado;
	//constructor
	public :
	Empleado(){
	}		
	Empleado(string nom, string ape, string dir, int tel, int cod_emp, int s, string p) : Persona(nom,ape,dir,tel){
		codigo_empleado =  cod_emp;
		sueldo = s;
		puesto = p;
	}
	//metodo set
	void setNombres(string nom){nombres = nom;}
	void setApellidos(string ape){apellidos = ape;}
	void setDireccion(string dir){direccion = dir;}
	void setTelefono(int tel){telefono = tel;}
	void setCodigo_empleado(int cod_emp){codigo_empleado = cod_emp;}
	void setSueldo(int s){sueldo = s;}
	void setPuesto(string p){puesto = p;}
	//metodo get
	string getNombres(){return nombres;}
	string getApellidos(){return apellidos;}
	string getDireccion(){return direccion;}
	int getTelefono(){return telefono;}
	int getCodigo_empleado(){return codigo_empleado;}
	int getSueldo(){return sueldo;}
	string getPuesto(){return puesto;}
	//metodo
	void mostrarEmpleado(){
		cout<<"_____________________________________________________________________________________________________________________________________"<<endl;
		cout<<nombres<<","<<apellidos<<","<<direccion<<","<<telefono<<","<<codigo_empleado<<","<<sueldo<<","<<puesto<<endl;
	}
};




