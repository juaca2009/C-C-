#ifndef __MAQUINA_H__
#define __MAQUINA_H__
#include"tablero.h"
#include"fichas.h"

class maquina : public ficha{
	public:
		void siguente_juego(tablero &tb);
};
#endif