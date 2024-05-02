#include<iostream>
#include<stack>
#include<time.h>
using namespace std;
//persona.h
class Persona{
	private:
		string nombre;
		int edad;
	public:
		//Constructores
		Persona();	
		//ingreso - set
		void setNombre(string nombre);
		void setEdad(int edad);
		//obtener - get
		string getNombre();
		int getEdad();
		//otros metodos
		string obtenerDatos();
};
//persona.cpp
Persona::Persona(){
	nombre="S/N";
	edad=0;
};
//ingreso - set
void Persona::setNombre(string nombre){
	this->nombre=nombre;
};
void Persona::setEdad(int edad){
	this->edad=edad;
};
//obtener - get
string Persona::getNombre(){
	return nombre;
};
int Persona::getEdad(){
	return edad;
};
//otros metodos
string Persona::obtenerDatos(){
	return (getNombre()+" "+to_string(getEdad()));
};
//librerias.h
void menu();
void ingresoDatos(stack<Persona> &pila);
void obtenerDatos(stack<Persona> &pila);
int main(){
	stack<Persona> pila;

	int op;
	system("color 97");
	do{
		system("cls");
		menu();	
		cin>>op;
		switch(op){
			case 1:
				system("cls");
				ingresoDatos(pila);
				system("pause");
				break;
			case 2:
				system("cls");
				cout<<"****** Datos Pila ******\n";
				obtenerDatos(pila);
				system("pause");
				break;
			case 3:
				system("cls");
				cout<<"\tFin de Programa\n";
				system("pause");
				break;
			default:
				cout<<"\tError\n";
				system("pause");
				break;			
		}
	}while(op!=3);
	return 0;
};
//librerias.cpp
void menu(){
	cout<<"1.- Ingreso de Datos\n";
	cout<<"2.- Obtener de Datos\n";
	cout<<"3.- Salir\n";
	cout<<"Ingrese una Opcion: ";
};
void ingresoDatos(stack<Persona> &pila){
	string nombre;
	int edad;
	Persona persona;
	cout<<"Ingrese el nombre: ";
	getline(cin>>ws,nombre);
	srand(time(NULL));
	edad=0+rand()%(101);
	cout<<"Edad: "<<edad<<endl;
	//guardar los datos en el objeto
	persona.setNombre(nombre);
	persona.setEdad(edad);
	//guardar el objeto en la pila
	pila.push(persona);
};
void obtenerDatos(stack<Persona> &pila){
	if(pila.size()>0){
		while(!pila.empty()){
			cout<<pila.top().getNombre()<<" "<<pila.top().getEdad()<<endl;
			pila.pop();
		}
	}else{
		cout<<"\tPila Vacia !!!!!!!!!!!\n";
	}
};