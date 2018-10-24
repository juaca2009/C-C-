#ifndef __JUGADOR_H
#define __JUGADOR_H
#include <stdio.h>
#include"nave.h"
#include"tablero.h"
#include"lista_naves.h"
class jugador{
	protected:
		int cantidad_barcos;
	public:
		void iniciar();
		void coordenada();
		void comparar(int x, int y, naves nav);
};
	
#endif