#ifndef __COLA_H
#define __COLA_H
#include <stdio.h>
#include<vector>
#include"proceso.h"

class cola{
	private:
		std::vector<proceso> cola;
	public:
		int tamano_cola();
		void mostrar_cola(proceso &p);
		void insertar_cola(proceso &p);
		void eliminar_cola();
		proceso primer();
};
#endif