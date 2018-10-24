#ifndef __COLA_H
#define __COLA_H
#include"lista.h"
#include"lista.cpp"
#include <stdio.h>

class cola : public lista{
	public:
		void iniciar_cola();
		void insertar_cola(int n);
		void eliminar_cola();
		void mostrar_cola();
};
#endif