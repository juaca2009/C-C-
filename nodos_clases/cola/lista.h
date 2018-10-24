#ifndef __LISTA_H
#define __LISTA_H
#include"nodo.h"
#include <stdio.h>

class lista{
	protected:
		Nodo *h;
	public:
		void iniciar();
		int longitud_lista();
		void insertar_lista(int n);
		void insertar_lista_posicion(int n, int pos);
		void eliminar();
		void eliminar2();
		void mostrar();
		Nodo get();
};
#endif