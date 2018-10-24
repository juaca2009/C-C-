#include"fichas.h"
#include<iostream>
using namespace std;

void tablero::set_tablero(){
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			matriz[i][j].set_ficha('0');
		}
	}
}

void tablero::dibujarse(){
	for(int i = 0; i < 3; i++){
		cout << "| |";
		for(int j = 0; j < 3; j++){
			cout << matriz[i][j].get_simbolo() << "  ";
		}
		cout <<"| |" << endl;
	}
}

void tablero::limpiar(){
	system("cls");
}

char tablero::get_sim(int fil, int col){
	return matriz[fil][col].get_simbolo();
}

void tablero::verificar_horizontales(){
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			if(i <= 0){
				if((matriz[i][j].get_simbolo() == 'x' || matriz[i][j].get_simbolo() == 'o' ) && matriz[i][j].get_simbolo() == matriz[i + 1][j].get_simbolo() && matriz[i][j].get_simbolo() == matriz[i + 2][j].get_simbolo()){
					tu_cucha = 1;
				}
			}
		}
	}
}

void tablero::verificar_verticales(){
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			if(j <= 0){
				if((matriz[i][j].get_simbolo() == 'x' || matriz[i][j].get_simbolo() == 'o' ) && matriz[i][j].get_simbolo() == matriz[i][j+1].get_simbolo() && matriz[i][j].get_simbolo() == matriz[i][j+2].get_simbolo()){
					tu_cucha = 1;
				}
			}
		}
	}
}

void tablero::verificar_diagonales(){
	if((matriz[0][0].get_simbolo() == 'x' || matriz[0][0].get_simbolo() == 'o' )&& matriz[0][0].get_simbolo() == matriz[0+1][0+1].get_simbolo() && matriz[0][0].get_simbolo() == matriz[0+2][0+2].get_simbolo()){
		tu_cucha = 1;
	}
	
	if((matriz[2][2].get_simbolo() == 'x' || matriz[2][2].get_simbolo() == 'o' )&& matriz[2][2].get_simbolo() == matriz[2-1][2-1].get_simbolo() && matriz[2][2].get_simbolo() == matriz[2-2][2-2].get_simbolo()){
		tu_cucha = 1;
	}
}

void tablero::modificar(int fil, int col, char sim){
	matriz[fil][col].set_ficha(sim);
}

int tablero::get_tu_cucha(){
	return tu_cucha;
}
