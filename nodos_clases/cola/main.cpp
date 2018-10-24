#include"cola.cpp"
#include<iostream>
#include <stdio.h>
using namespace std;

int main(){
	cola col;
	col.iniciar_cola();
	col.insertar_cola(2);
	col.insertar_cola(4);
	col.insertar_cola(3);
	col.insertar_cola(6);
	col.mostrar_cola();
	col.eliminar_cola();
	col.mostrar_cola();
	for(int i = 0; i < col.longitud_lista(); i++){
		col.eliminar_cola();
	}
}