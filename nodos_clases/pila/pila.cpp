#include"pila.h"
#include <stdio.h>
#include<iostream>
using namespace std;

void pila::iniciar_pila(){
	iniciar();
}

void pila::insertar_pila(int n){
	if(longitud_lista() == 0){
		insertar_lista(n);
	}
	else{
		insertar_lista_posicion(n, 1);
	}
}

void pila::eliminar_pila(){
	eliminar();
}

void pila::mostrar_pila(){
	mostrar();
}