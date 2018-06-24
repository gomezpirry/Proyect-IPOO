#include "Persona.h"
#include <iostream>


using namespace std;

Persona::Persona(){
	
}

Persona::~Persona(){
	
}

void Persona::setNombre(string nombre){
	this->nombre = nombre;
}

string Persona::getNombre(){
	return nombre;
}

void Persona::setApellido(string apellido){
	this->apellido = apellido;
}

string Persona::getApellido(){
	return apellido;
}
