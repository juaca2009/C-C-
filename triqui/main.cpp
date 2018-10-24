#include"fichas.h"
#include"tablero.h"
#include"persona.h"
#include"maquina.h"
#include"fichas.cpp"
#include"tablero.cpp"
#include"persona.cpp"
#include"maquina.cpp"

int main(){
	tablero tab;
	persona per;
	maquina ma;
	ma.set_ficha('o');
	per.set_ficha('x');
	tab.set_tablero();
	tab.dibujarse();
	while(tab.get_tu_cucha() != 1){
		per.datos();
		per.siguiente_jugada(tab);
		ma.siguente_juego(tab);
		tab.limpiar();
		tab.verificar_horizontales();
		tab.verificar_diagonales();
		tab.verificar_verticales();
		tab.dibujarse();
	}
	tab.limpiar();
}