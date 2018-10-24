#include"unidad.h"
#include"proceso.h"
#include<time.h>
#include<vector>
#include <stdio.h>
#include <string> 
#include<iostream>
using namespace std;

const int TIMESLICE=10;

void unidad::procesar(proceso &p){
	p.reducir_tiempo(TIMESLICE);
	for(int i = 0; i < TIMESLICE; i++){
		cout << "procesando tiempo: " << i + 1;
		cout << endl;
		this->sleep (4*100);
	}
	if(p.get_tiempo() == 0){
		p.set_estado("inactivo");
	}
	system("cls");
}

void unidad::sleep(unsigned int mseconds){
	clock_t goal = mseconds + clock();
    while (goal > clock());
}
