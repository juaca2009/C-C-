#ifndef __TABLERO_H__
#define __TABLERO_H__
#include"fichas.h"

class tablero{
	protected:
		ficha matriz[3][3];
		int tu_cucha;
	public:
		char get_sim(int fil, int col);
		void set_tablero();
		void dibujarse();
		void verificar_horizontales();
		void verificar_verticales();
		void verificar_diagonales();
		void limpiar();
		void modificar(int fil, int col, char sim);
		int get_tu_cucha();
		
};
#endif
		