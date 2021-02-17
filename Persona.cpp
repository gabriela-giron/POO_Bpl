#include<iostream>
#include<string>

using namespace std;

class Persona{
	//atributos
	protected : string nombres, apellidos, direccion;
				int telefono;
	//constructor(metodo especial, se llama igual que la clase, puede no tener nada)
	protected :
		Persona(){//clase abstracta, no deriva de nada y sirve para ser heredada	
		}
		Persona(string nom, string ape, string dir, int tel){
			nombres = nom;
			apellidos = ape;
			direccion = dir;
			telefono = tel;	
		}
	//metodos de acceso: protected(usado en otra clase), private(misma clase), public(generalizado)
	void mostrar();
};
