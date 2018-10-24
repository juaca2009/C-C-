#ifndef __LISTA_H
#define __LISTA_H
#include"nodo.h"
#include <stdio.h>

template<class dato>

class lista{
	protected:
		Nodo<dato> *h;
	public:
		void iniciar();
		int longitud_lista();
		void insertar_lista(dato n);
		void insertar_lista_posicion(dato n, int pos);
		int buscar(dato n);
		bool existe(dato n);
		void eliminar();
		void mostrar();
		dato get_elemento(int pos);
};
#endif