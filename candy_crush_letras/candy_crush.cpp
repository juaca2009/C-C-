#include"funciones_juego.cpp"

int main(){
	struct juegos puntos;
	inicio(puntos);
	bool funcionamiento = true;
	int opcion;
	while(funcionamiento == true && puntos.jugadas != 0){
		opciones();
		cin >> opcion;
		switch(opcion){
			case 0:{
				funcionamiento = false;
				break;
			}
			case 1:{
				int fila, columna;
				entrada(fila, columna);
				if(columna < 1){
					cout << "no puedes mover este elemento hacia la izquierda" << endl;
					puntos.jugadas = puntos.jugadas - 1;
					break;
				}
				cambiar_izquierda(fila, columna, puntos);
				juego(puntos);
				break;
			}
			case 2:{
				int fila, columna;
				entrada(fila, columna);
				if(columna > puntos.tablero.n - 2){
					cout << "no puedes mover este elemento hacia la derecha" << endl;
					puntos.jugadas = puntos.jugadas - 1;
					break;
				}
				cambiar_derecha(fila, columna, puntos);
				juego(puntos);
				break;
			}
			case 3:{
				int fila, columna;
				entrada(fila, columna);
				if(fila > puntos.tablero.n - 2){
					cout << "no puedes mover este elemento hacia abajo" << endl;
					puntos.jugadas = puntos.jugadas - 1;
					break;
				}
				cambiar_abajo(fila, columna, puntos);
				juego(puntos);
				break;
			}
			case 4:{
				int fila, columna;
				entrada(fila, columna);
				if(fila < 1){
					cout << "no puedes mover este elemento hacia arriba" << endl;
					puntos.jugadas = puntos.jugadas - 1;
					break;
				}
				cambiar_arriba(fila, columna, puntos);
				juego(puntos);
				break;
			}
		}
	}
	fin(puntos);
}

	