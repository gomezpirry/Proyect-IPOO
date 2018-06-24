#include "Laboratorio.h"
#include <iostream>

using namespace std;

Laboratorio::Laboratorio(){
	
}

Laboratorio::~Laboratorio(){
	
}

void Laboratorio::setValorArticulo(){
		cout<<"Escriba el valor del Articulo"<<endl;
		cin>>valorArticulo;
}

int Laboratorio::getValorArticulo(){
	return valorArticulo;
}

void Laboratorio::registrarArticulo(){
	bool terminado = false;
	int opcion;
	do{
		cout<<"\t\t***********************************\n";
		cout<<"\t\t*****Registro de articulos\t\t*****\n";
		cout<<"\t\t***********************************\n";
		cout<<"\t\t*\tOpciones:\t\t*\n";
		cout<<"\t\t*\t1)Registrar Articulo\t*\n";
		cout<<"\t\t*\t2)Salir del registro\t*\n";
		cout<<"\t\t***********************************\n";
		
		if (opcion == 1){
			cout<<"\t\tBienvenido al registro de articulos\n";
		}else if(opcion == 2){
			terminado = true;
		}else cout<<"\t\tError : Opcion no valida\n";
		
	}while(terminado == false);
}

void Laboratorio::asignarArticulo(){
	
}

void Laboratorio::infoArticulo(){
	cout<<"\tSistema de informacion de articulos\n";
}

void Laboratorio::prestarArticulo(){
    
}

void Laboratorio::generarMulta(){
	
}

void Laboratorio::historialArticulo(){
	
}

void Laboratorio::historialEstudiante(){
	
}

void Laboratorio::tieneMulta(){
	
}



