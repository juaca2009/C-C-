#include"cola.cpp"
#include"proceso.cpp"
#include"unidad.cpp"
#include<vector>
#include <string>
#include <stdio.h>
#include<iostream>
using namespace std;

int main(){
	cola col;
	proceso pro[5];
	proceso q;
	unidad uni;
	pro[0].set_proceso(111, 1, "activo", 50);
	pro[0].mostrarse();
	pro[1].set_proceso(134, 5, "activo", 40);
	pro[1].mostrarse();
	pro[2].set_proceso(234, 8, "activo", 60);
	pro[2].mostrarse();
	pro[3].set_proceso(464, 9, "activo", 30);
	pro[3].mostrarse();
	pro[4].set_proceso(987, 30, "activo", 90);
	pro[4].mostrarse();
	for(int i = 0; i < 5; i++){
		col.insertar_cola(pro[i]);
		cout << "se inserto"<< endl;
	}
	while(col.tamano_cola() != 0){
		col.mostrar_cola();
		q = col.primer();
		col.eliminar_cola();
		uni.procesar(q);
		if(q.get_estado() == "activo"){
			col.insertar_cola(q);
		}
	}
}
		