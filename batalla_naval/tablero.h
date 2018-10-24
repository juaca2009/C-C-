#ifndef _TABLERO_H_
#define _TABLERO_H_

#include <string>
#include "portaviones.h"
#include "nave.h"
#include"lista.cpp"

class Tablero{
	private:
		lista<PortaAviones> lPortaAviones;
		lista<Nave> lNaves;
		char** tab;
		int dimX, dimY;
	public:
		Tablero();
		~Tablero();
		lista<PortaAviones> getPortaAviones();
		lista<Nave> getLNaves();
		void printTablero();
		void addPortaAviones(PortaAviones porta);
		void addNave(Nave nave);
		void movePortaAviones(int index, int x, int y, int player);
		void moveNave(int index, int x, int y, int player);
		void shootMisil(int x, int y, int player);
		char** getTab(){return tab;}
};

#endif
