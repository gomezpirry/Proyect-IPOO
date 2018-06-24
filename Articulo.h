#ifndef Articulo_h
#define Articulo_h
#include <string>

using namespace std;

class Articulo {
	
	private:
		string nombre;
		string marca;
		int    idArticulo;
		int    deprecio;
		bool   activo;
	public:
		Articulo();
		virtual ~Articulo();
		void setNombre(string nombre);
		string getNombre();
		void setMarca(string marca);
		string getMarca();
		void setIdArticulo(int idArticulo);
		int getIdArticulo();
		void setDeprecio(int deprecio);
		int getDeprecio();
		void isActivo();
		bool thisActivo();
};


#endif 
