#include"pila.cpp"
#include<iostream>
#include <stdio.h>
using namespace std;

int main(){
	pila pil;
	pil.iniciar_pila();
	pil.insertar_pila(2);
	pil.insertar_pila(4);
	pil.insertar_pila(3);
	pil.insertar_pila(6);
	pil.mostrar_pila();
	pil.eliminar_pila();
	pil.mostrar_pila();
	for(int i = 0; i < pil.longitud_lista(); i++){
		pil.eliminar_pila();
	}
}
	
	