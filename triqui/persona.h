#ifndef __PERSONA_H__
#define __PERSONA_H__
#include"tablero.h"
#include"fichas.h"

class persona : public ficha{
	private:
		int fila;
		int columna;
	public:
		void datos();
		int get_fila();
		int get_columna();
		void siguiente_jugada(tablero &tb);
};
#endif