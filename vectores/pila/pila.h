#ifndef __PILA_H
#define __PILA_H
#include <stdio.h>
#include<vector>

template<class T>
class pila{
	private:
		std::vector<T> pila;
	public:
		int tamano_pila();
		void mostrar_pila();
		void insertar_pila(T elem);
		void eliminar_pila();
};
#endif