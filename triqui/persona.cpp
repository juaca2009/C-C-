#include<iostream>
#include"persona.h"
#include"tablero.h"
#include"fichas.h"
using namespace std;

void persona::datos(){
	cout << "ingrese la fila: ";
	cin >> fila;
	cout << "ingrese la columna";
	cin >> columna;
}

int persona::get_fila(){
	return fila;
}

int persona::get_columna(){
	return columna;
}

void persona::siguiente_jugada(tablero &tb){
	tb.modificar(get_fila(),get_columna(),get_simbolo());
}
	

