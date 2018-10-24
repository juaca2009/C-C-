#ifndef __UNIDAD_H
#define __UNIDAD_H
#include <stdio.h>
#include <string> 
#include<vector>
#include"proceso.h"

class unidad{
	public:
		void procesar(proceso &p);
		void sleep(unsigned int mseconds);
};

#endif