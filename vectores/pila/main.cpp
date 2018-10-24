#include"pila.h"
#include"pila.cpp"

int main(){
	pila<int> pil;
	pil.insertar_pila(1);
	pil.insertar_pila(2);
	pil.insertar_pila(4);
	pil.insertar_pila(3);
	pil.mostrar_pila();
	pil.eliminar_pila();
	pil.mostrar_pila();
	while(pil.tamano_pila() != 0){
		pil.eliminar_pila();
	}
	return 0;
}