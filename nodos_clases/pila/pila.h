#ifndef __PILA_H
#define __PILA_H
#include"lista.h"
#include"lista.cpp"
#include <stdio.h>

class pila : public lista{
	public:
		void iniciar_pila();
		void insertar_pila(int n);
		void eliminar_pila();
		void mostrar_pila();
};		
#endif