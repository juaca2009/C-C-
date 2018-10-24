#include"persona.h"
#include"tablero.h"
#include"fichas.h"

void maquina::siguente_juego(tablero &tb){
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			if(tb.get_sim(i,j) == '0'){
				tb.modificar(i,j,get_simbolo());
				break;
			}
		}
		break;
	}
}