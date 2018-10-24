#include"lista.cpp"
#include"nodo.h"
#include<iostream>
using namespace std;

int main(){
	int b;
	int a;
	lista<int> enteros;
	enteros.iniciar();
	enteros.insertar_lista(3);
	enteros.insertar_lista(5);
	enteros.insertar_lista(7);
	enteros.insertar_lista(1);
	enteros.mostrar();
	enteros.insertar_lista_posicion(9, 3);
	a = enteros.get_elemento(3);
	cout << a << endl;
	enteros.mostrar();
	for(int i = 0; i < enteros.longitud_lista(); i++){
		enteros.eliminar();
	}
}