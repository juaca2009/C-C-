#ifndef __PROCESO_H
#define __PROCESO_H
#include <stdio.h>
#include<vector>
#include <string>
using namespace std; 

class proceso{
	protected:
		int id;
		string estado;
		int tiempo;
		int prioridad;
	public:
		void set_proceso(int _id, int _prioridad, string st, int t);
		string get_estado();
		void set_estado(string e);
		int get_tiempo();
		int get_prioridad();
		void reducir_tiempo(int t);
		void mostrarse();
};



#endif