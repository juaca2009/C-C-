#include"pila.h"
#include<vector>
#include <stdio.h>
#include<iostream>
using namespace std;

template<class T>
int pila<T>::tamano_pila(){
	return pila.size();
}

template<class T>
void pila<T>::mostrar_pila(){
	cout << "[";
	for(int i = 0; i < tamano_pila(); i++){
		cout << (i > 0 ? "," : "") << pila[i];
	}
	cout << "]";
}

template<class T>
void pila<T>::insertar_pila(T elem){
	if(tamano_pila() == 0){
		pila.push_back(elem);
	}
	else{
		pila.insert(pila.begin(), elem);
	}
}

template<class T>
void pila<T>::eliminar_pila(){
	pila.erase(pila.begin());
}
