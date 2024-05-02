#include<iostream>
#include<stack>
#include<time.h>
using namespace std;
int main(){
	stack<int> pila;
	int tamanio=10;
	string texto;
	//ingreso de datos
	srand(time(NULL));
	for(int i=1; i<=tamanio;i++){
		pila.push(i);
	};
	//numero de elementos de pila
	cout<<"Tamanio: "<<pila.size()<<" ";
	//ultimo elmento
	cout<<"Ultimo elemento: "<<pila.top()<<endl;
	pila.pop();
	//numero de elementos de pila
	cout<<"Tamanio: "<<pila.size()<<" ";
	//ultimo elmento
	cout<<"Ultimo elemento: "<<pila.top()<<endl;
	texto=(pila.empty())?" Verdadero ":" Falso ";
	cout<<"Pila vacia?: "<<texto<<endl;	
	while(!pila.empty()){
		cout<<pila.top()<<" ";
		pila.pop();
	};
	cout<<"\nTamanio: "<<pila.size()<<" ";
	return 0;
}