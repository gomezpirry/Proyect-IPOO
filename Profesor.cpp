#include "Profesor.h"
#include <iostream>

Profesor::Profesor(){
	
}

Profesor::~Profesor(){
	
}

void Profesor::setCodigo(int codigo){
	this->codigo = codigo;
	
}

int Profesor::getCodigo(){
	return codigo;
}

void Profesor::setHorasLaboratorio(int horasLaboratorio){
	this->horasLaboratorio = horasLaboratorio;
}

int Profesor::getHorasLaboratorio(){
	return horasLaboratorio;
}

void Profesor::setNumArticulos(int numArticulos){
	this->numArticulos = numArticulos;
}

int Profesor::getNumArticulos(){
	return numArticulos;
}

void Profesor::setArea_Ensenanza(string area_ensenanza){
	this->area_ensenanza = area_ensenanza;
}

string Profesor::getArea_Ensenanza(){
	return area_ensenanza;
}
