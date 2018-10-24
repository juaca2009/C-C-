#ifndef __COLA_H
#define __COLA_H
#include <stdio.h>
#include<list>
#include"proceso.h"

class cola{
	private:
		std::list<proceso> cola;
	public:
		int tamano_cola();
		void mostrar_cola();
		void insertar_cola(proceso &p);
		void eliminar_cola();
		proceso primer();
};
#endif