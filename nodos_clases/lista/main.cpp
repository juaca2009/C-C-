#include"lista.cpp"
#include<iostream>
using namespace std;

int main(){
	int b;
	lista enteros;
	enteros.iniciar();
	enteros.cargar("lista.txt");
	enteros.mostrar();
	enteros.insertar_lista_posicion(9, 4);
	enteros.mostrar();
	enteros.guardar("guardado.txt");
	for(int i = 0; i < enteros.longitud_lista(); i++){
		enteros.eliminar();
	}
}