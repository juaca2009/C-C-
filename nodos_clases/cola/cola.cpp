#include"cola.h"
#include <stdio.h>
#include<iostream>
using namespace std;

void cola::iniciar_cola(){
	iniciar();
}

void cola::insertar_cola(int n){
	if(longitud_lista() == 0){
		insertar_lista(n);
	}
	else{
		insertar_lista(n);
	}
}

void cola::eliminar_cola(){
	eliminar();
}

void cola::mostrar_cola(){
	mostrar();
}