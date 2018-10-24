#include"proceso.h"
#include<vector>
#include <stdio.h>
#include <string> 
#include<iostream>
using namespace std;

void proceso::set_proceso(int _id, int _prioridad, string st, int t){
	id = _id;
	prioridad = _prioridad;
	estado = st;
	tiempo = t;
}

string proceso::get_estado(){
	return estado;
}

void proceso::set_estado(string e){
	estado = e;
}

int proceso::get_tiempo(){
	return tiempo;
}

int proceso::get_prioridad(){
	return prioridad;
}

void proceso::reducir_tiempo(int t){
	tiempo = tiempo - t;
}

void proceso::mostrarse(){
	cout << id <<"\t"<< estado <<"\t"<< tiempo <<"\t"<< prioridad << endl;
}
