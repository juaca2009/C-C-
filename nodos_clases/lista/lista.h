#ifndef __LISTA_H
#define __LISTA_H
#include"nodo.h"
#include <stdio.h>
#include<fstream>
#include<string.h>
#include <cstdlib>
#include<sstream>
using namespace std;

class lista{
	protected:
		Nodo *h;
	public:
		void iniciar();
		int longitud_lista();
		void insertar_lista(int n);
		void insertar_lista_posicion(int n, int pos);
		int buscar(int n);
		bool existe(int n);
		void eliminar();
		void mostrar();
		void guardar(string nombre_arcivo);
		void cargar(string nombre_archivo);
};
#endif