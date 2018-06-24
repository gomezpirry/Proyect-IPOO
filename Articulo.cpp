#include "Articulo.h"
#include <iostream>

using namespace std;

Articulo::Articulo(){
	
}

Articulo::~Articulo(){
	
}

void Articulo::setNombre(string nombre){
	this->nombre = nombre;
}

string Articulo::getNombre(){
	return nombre;
}

void Articulo::setMarca(string marca){
	this->marca = marca;
}

string Articulo::getMarca(){
	return marca;
}

void Articulo::setIdArticulo(int idArticulo){
	this->idArticulo = idArticulo;
}

int Articulo::getIdArticulo(){
	return idArticulo;
}

void Articulo::setDeprecio(int deprecio){
	this->deprecio = deprecio;
}

int Articulo::getDeprecio(){
	return deprecio;
}

void Articulo::isActivo(){
	int opcion;
	cout<<"Escribe 1 si esta activo, de lo contrario escribe 2\n";
	cin>>opcion;
	
	if (opcion == 1){
		activo = true;
	}
	else if(opcion == 2){
		activo = false;
    }else {
    	cout<<"Opcion no valida\n";
	}
}

bool Articulo::thisActivo(){
	return activo;
}



