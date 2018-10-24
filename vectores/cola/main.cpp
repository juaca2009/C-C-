#include"cola.h"
#include"cola.cpp"
int main(){
	cola<int> col;
	col.insertar_cola(1);
	col.insertar_cola(2);
	col.insertar_cola(4);
	col.insertar_cola(3);
	col.mostrar_cola();
	col.eliminar_cola();
	col.mostrar_cola();
	while(col.tamano_cola() != 0){
		col.eliminar_cola();
	}
	return 0;
}