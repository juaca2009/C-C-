#include"cola.cpp"
#include"proceso.cpp"
#include<vector>
#include <stdio.h>
#include<iostream>
using namespace std;

int main(){
	cola col;
	proceso p1,p2,p3,p4;
	p1.set_proceso(112, 2, "activo", 500);
	p2.set_proceso(344, 4, "activo", 500);
	p3.set_proceso(567, 6, "activo", 500);
	p4.set_proceso(896, 8, "activo", 500);
	
	col.insertar_cola(p1);
	col.insertar_cola(p2);
	col.insertar_cola(p3);
	col.insertar_cola(p4);
	
	col.mostrar_cola(p1);
	col.mostrar_cola(p2);
	col.mostrar_cola(p3);
	col.mostrar_cola(p4);
	
	while(col.tamano_cola() != 0){
		col.eliminar_cola();
	}
}

	