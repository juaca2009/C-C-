#include"cola.h"
#include<vector>
#include <stdio.h>
#include<iostream>
using namespace std;

template<class T>
int cola<T>::tamano_cola(){
	return cola.size();
}

template<class T>
void cola<T>::mostrar_cola(){
	cout << "[";
	for(int i = 0; i < tamano_cola(); i++){
		cout << (i > 0 ? "," : "") << cola[i];
	}
	cout << "]";
}

template<class T>
void cola<T>::insertar_cola(T elem){
	if(tamano_cola() == 0){
		cola.push_back(elem);
	}
	else{
		cola.insert(cola.end(), elem);
	}
}

template<class T>
void cola<T>::eliminar_cola(){
	cola.erase(cola.begin());
}