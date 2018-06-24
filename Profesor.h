#ifndef Profesor_h
#define Profesor_h
#include "Persona.h"
#include <string>

using namespace std;

class Profesor : public Persona{
	
	private:
		int codigo;
        int horasLaboratorio;
		int numArticulos;
		string area_ensenanza;
	public:
		Profesor();
		~Profesor();
		void setCodigo(int codigo);
		int getCodigo();
		void setHorasLaboratorio(int horasLaboratorio);
		int getHorasLaboratorio();
		void setNumArticulos(int numArticulos);
		int getNumArticulos();	
		void setArea_Ensenanza(string area_ensenanza);
		string getArea_Ensenanza();
};

#endif
