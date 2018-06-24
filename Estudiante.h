#ifndef Estudiante_h
#define Estudiante_h
#include "Persona.h"
using namespace std;

class Estudiante : public Persona{
	private:
		int codigo;
		int horasLaboratorio;
		int numArticulos;
		string carrera;
	public:
		Estudiante();
		~Estudiante();
		void setCodigo(int codigo);
		int getCodigo();
		void setHorasLaboratorio(int horaLaboratorio);
		int getHorasLaboratorio();
		void setNumArticulos(int numArticulos);
		int getNumArticulos();
		void setCarrera(string carrera);
		string getCarrera();
};
#endif
