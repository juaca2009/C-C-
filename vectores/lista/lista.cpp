#include"lista.h"
#include<list>
#include <stdio.h>
#include<iostream>
using namespace std;

template<class T>
void lista<T>::insertar_atras(T elem){
	lista.insert(lista.end(), elem);
}

template<class T>
void lista<T>::insertar_adelante(T elem){
	lista.insert(lista.begin(), elem);
}

template<class T>
void lista<T>::eliminar(){
	lista.pop_back();
}

template<class T>
T lista<T>::ultimo(){
	return lista.back();
}

template<class T>
T lista<T>::primero(){
	return lista.begin();
}

template<class T>
int lista<T>::tamano(){
	return lista.size();
}

template<class T>
bool lista<T>::vacio(){
	if(lista.size() == 0){
		return true;
	}
	else{
		return false;
	}
}

template<class T>
void lista<T>::mostrar(){
	 lista<T>::iterator it;
	cout << "[";
	for(it = lista.front(); it != lista.end(); it++){
		cout << *it << " ";
	}
	cout << "]" << endl;
}
	