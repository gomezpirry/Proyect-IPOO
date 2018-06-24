#ifndef Laboratorio_H
#define Laboratorio_H

using namespace std;

class Laboratorio {
		
		private:
		int valorArticulo;
		
		public:
		Laboratorio();
		~Laboratorio();
		void setValorArticulo();
		int getValorArticulo();
		void registrarArticulo();
		void asignarArticulo();
		void infoArticulo();
		void prestarArticulo();
		void generarMulta();
		void historialArticulo();
		void historialEstudiante();
		void tieneMulta();
};
#endif

