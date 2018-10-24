#ifndef __LISTA_H
#define __LISTA_H
#include <stdio.h>
#include<list>


template<class T>
class lista{
	private:
		std::list<T> lista;
	public:
		void insertar_atras(T elem);
		void insertar_adelante(T elem);
		void eliminar();
		void mostrar();
		T ultimo();
		T primero();
		int tamano();
		bool vacio();
};
#endif