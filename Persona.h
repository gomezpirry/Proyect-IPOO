#ifndef Persona_h
#define Persona_h
#include <string>
#include <iostream>

using namespace std;

class Persona {
	private:
		string nombre;
		string apellido;
	public:
		Persona();
		~Persona();
		void setNombre(string nombre);
		string getNombre();
		void setApellido(string apellido);
		string getApellido();
};

#endif 
