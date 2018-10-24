#ifndef __COLA_H
#define __COLA_H
#include <stdio.h>
#include<vector>

template<class T>
class cola{
	private:
		std::vector<T> cola;
	public:
		int tamano_cola();
		void mostrar_cola();
		void insertar_cola(T elem);
		void eliminar_cola();
};
#endif