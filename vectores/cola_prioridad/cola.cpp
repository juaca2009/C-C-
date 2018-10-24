#include"cola.h"
#include"proceso.h"
#include<vector>
#include <stdio.h>
#include<iostream>
using namespace std;

int cola::tamano_cola(){
	return cola.size();
}

void cola::mostrar_cola(proceso &p){
	p.mostrarse();
}

void cola::insertar_cola(proceso &p){
	vector<proceso>::iterator it;
	if(tamano_cola() == 0){
		cola.push_back(p);
	}
	else{
		for(it = cola.begin(); it != cola.end(); it++){
			if(p.get_prioridad() > (*it).get_prioridad()){
				cola.insert(it,p);
				break;
			}
		}
	}
}

void cola::eliminar_cola(){
	cola.erase(cola.begin());
}

proceso cola::primer(){
	return cola[0];
}