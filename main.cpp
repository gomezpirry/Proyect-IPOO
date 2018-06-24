#include <iostream>
#include <stdlib.h>
#include <fstream>
#include "Articulo.h"
#include "Estudiante.h"
#include "Laboratorio.h"
#include "Persona.h"
#include "Profesor.h"

Articulo art = Articulo();
Estudiante est = Estudiante();
Laboratorio labo = Laboratorio();
Persona per = Persona();
Profesor prof = Profesor();

using namespace std;

void lectura(){
	ifstream articulo;
	string texto;
	
	articulo.open("articulos.txt", ios::in);
	
	if(articulo.fail()){
		cout<<"\nNo se pudo abrir el archivo";
		exit(1);
	}
	
	while(!articulo.eof()){
		getline(articulo,texto);
		cout<<texto<<endl;
	}
	
	articulo.close();
	
	
}

void registrar(){
	string nombre;
	string marca;
	int deprecio;
	int idArticulo;
	art.setIdArticulo(0);
	art.setNombre("N.E");
	art.setMarca("N.E");
	art.setDeprecio(0);
	cout<<"\nPor favor escriba el id del articulo: ";cin>>idArticulo;
	art.setIdArticulo(idArticulo);
	cout<<"\nPor favor escriba el nombre del articulo: ";cin>>nombre;
	art.setNombre(nombre);
	cout<<"\nPor favor escriba la marca del articulo: ";cin>>marca;
	art.setMarca(marca);
	cout<<"\nPor favor escriba el deprecio del articulo: ";cin>>deprecio;
	art.setDeprecio(deprecio);
	art.isActivo();
	
	ofstream articulos;
	
	articulos.open("articulos.txt", ios::app);
	if(articulos.fail()){
		cout<<"\nNo se pudo abrir el archivo";
		exit(1);
	}
	
	articulos<<"\n"<<art.getIdArticulo()<<"\t"<<art.getNombre()<<"\t"<<art.getMarca()<<"\t"<<art.getDeprecio()<<"\t"<<art.thisActivo()<<"\n";
	
	articulos.close();
}

void login(){
	string usuario_ingreso = " ";
	string usuario = "admin";
	string clave_ingreso = " ";
	string clave = "admin";
	bool ingreso = false;
	
	do{
	
	cout<<"\nIngrese el usuario: ";cin>>usuario_ingreso;
	cout<<"\nIngrese la clave: ";cin>>clave_ingreso;
	
	if (usuario_ingreso == usuario && clave_ingreso == clave){
		ingreso = true;
		
		cout<<"\nHas iniciado sesion correctamente\n";
	}
	else{
		"\nContraseña o Usuario incorrecto";
		ingreso = false;
		
		system("cls");
	}
}while (ingreso == false);
	
}

void menu1(){
	cout<<"\t\t***********************************\n";
	cout<<"\t\t*\tSistema de registro            *\n";
	cout<<"\t\t***********************************\n";
	login();

}

void menu2(){
	cout<<"\t\t***********************************\n";
	cout<<"\t\t*\tSistema de registro                *\n";
	cout<<"\t\t***********************************\n";
	cout<<"\t\t*\t1)Prestar Articulos                *\n";
	cout<<"\t\t*\t2)Informacion Articulos            *\n";
	cout<<"\t\t*\t3)Ingresar Articulos               *\n";
	cout<<"\t\t*\t4)Salir                            *\n";
	cout<<"\t\t***********************************\n";
}

void escogerOpcion(){
	int opcion;
	int opc;
	int codigo;
	int i = 0;
	int idArticulo;
	string nombre;
	string apellido;
	ofstream ocuProf;
	ofstream ocuEst;
	
	
	cout<<"Por favor escoja una opcion: ";cin>>opcion;
	switch(opcion){
		case 1: 
		        cout<<"\nSi eres profesor, digita 1. Si eres estudiante digita 2: ";cin>>opc;	
				if (opc == 1){
					cout<<"\nEscriba su nombre: ";cin>>nombre;
					cout<<"\nEscriba su apellido:";cin>>apellido;
					cout<<"\nEscriba su codigo: ";cin>>codigo;
					cout<<"\nEscriba el id del articulo: ";cin>>idArticulo;
					prof.setNombre(nombre);
					prof.setApellido(apellido);
					prof.setCodigo(codigo);	
				    ocuProf<<prof.getNombre()<<" "<<prof.getApellido()<<"\t"<<prof.getCodigo()<<"\t"<<idArticulo;
				
				}else if(opc == 2){
					cout<<"\nEscriba su nombre: ";cin>>nombre;
					cout<<"\nEscriba su codigo: ";cin>>codigo;
					est.setNombre(nombre);
					est.setCodigo(codigo);
					est.setNumArticulos(i++);
				}else{
					cout<<"Opcion no valida";
				}
				break;
		case 2 : lectura();
				 break;
				 
		case 3 : registrar();
		         break;	
				
		case 4 : exit(1);
				 break;
		default : cout<<"La opcion ingresada, no es valida";
				  break;
	}
	
}

int main(int argc, char** argv) {
	ofstream texto;
	char msg [10] = "";
	
	menu1();
	system("pause");
	system("cls");
	do{
	menu2();
	escogerOpcion();
	cin.get();
	cout<<"Si desea continuar escriba 'C' .Para salir presiona enter";
	cin.getline(msg,10);
    }while(msg != "C" || msg != "c");
	return 0;
}
