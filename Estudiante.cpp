#include "Estudiante.h"
#include <iostream>

using namespace std;

Estudiante::Estudiante(){
	
}

Estudiante::~Estudiante(){
	
}

void Estudiante::setCodigo(int codigo){
	this->codigo = codigo;
}

int Estudiante::getCodigo(){
	return codigo;
}

void Estudiante::setHorasLaboratorio(int horasLaboratorio){
	this->horasLaboratorio = horasLaboratorio;
}

int Estudiante::getHorasLaboratorio(){
	return horasLaboratorio;
}

void Estudiante::setNumArticulos(int numArticulos){
	this->numArticulos = numArticulos;
}

int Estudiante::getNumArticulos(){
	return numArticulos;
}

void Estudiante::setCarrera(string carrera){
	this->carrera = carrera;
}

string Estudiante::getCarrera(){
	return carrera;
}
