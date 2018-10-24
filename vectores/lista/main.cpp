#include"lista.h"
#include"lista.cpp"
#include<list>
#include <stdio.h>
#include<iostream>
using namespace std;

int main(){
	lista<int> list;
	list.insertar_atras(1);
	list.insertar_atras(3);
	list.insertar_atras(5);
	list.mostrar();
	list.insertar_adelante(8);
	list.mostrar();
	list.eliminar();
	list.mostrar();
	while(list.vacio() == false){
		list.eliminar();
	}
}