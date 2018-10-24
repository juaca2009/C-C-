#ifndef __NODO_H
#define __NODO_H
#include <stdio.h>

template<class dat>

class Nodo{
	public:
		dat dato;
		Nodo<dat> *siguiente;
};
#endif