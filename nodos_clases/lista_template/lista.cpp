#include"lista.h"
#include <stdio.h>
#include<iostream>
using namespace std;

template<class dato>
void lista<dato>:: iniciar(){
	h = NULL;
}

template<class dato>
int lista<dato>::longitud_lista(){
	Nodo<dato> *actual = new Nodo<dato>();
	actual = h;
	int cont = 0;
	while(actual != NULL){
		actual = actual -> siguiente;
		cont = cont + 1;
	}
	return cont;
}

template<class dato>
void lista<dato>::insertar_lista(dato n){
	Nodo<dato> *nuevo_nodo = new Nodo<dato>();
	Nodo<dato> *temp;
	nuevo_nodo->dato = n;
	nuevo_nodo->siguiente = NULL;
	if(h == NULL){
		h = nuevo_nodo;
	}
	else{
		temp = h;
		while(temp->siguiente != NULL){
			temp = temp->siguiente;
		}
		temp->siguiente = nuevo_nodo;
	}
}

template<class dato>
void lista<dato>::insertar_lista_posicion(dato n, int pos){
	Nodo<dato> *nuevo_nodo = new Nodo<dato>();
	Nodo<dato> *temp;
	nuevo_nodo->dato = n;
	nuevo_nodo->siguiente = NULL;
	if((pos >= 1) && (pos <= longitud_lista())){
		if(pos == 1){
			nuevo_nodo->siguiente = h;
			h = nuevo_nodo;
		}
		else{
			temp = h;
			for(int i = 0; i < pos - 2; i++){
				temp = temp->siguiente;
			}
			nuevo_nodo->siguiente = temp->siguiente;
			temp->siguiente = nuevo_nodo;
		}
	}
}

template<class dato>
void lista<dato>::eliminar(){
	Nodo<dato> *aux = h;
	h = aux->siguiente;
	delete aux;
}

template<class dato>
void lista<dato>::mostrar(){
	Nodo<dato> *actual = new Nodo<dato>();
	actual = h;
	while(actual != NULL){
		cout << actual -> dato << " ";
		actual = actual -> siguiente;
	}
	cout << endl;
}

template<class dato>
int lista<dato>::buscar(dato n){
	bool band = false;
	int pos = 0;
	Nodo<dato> *actual = new Nodo<dato>();
	actual = h;
	while(actual != NULL){
		if(actual ->dato == n){
			band = true;
			return pos;
		}
		actual = actual ->siguiente;
		pos = pos + 1;
	}
	if(band = false){
		return -1;
	}
}

template<class dato>
bool lista<dato>::existe(dato n){
	bool band = false;
	Nodo<dato> *actual = new Nodo<dato>();
	actual = h;
	while(actual != NULL){
		if(actual ->dato == n){
			band = true;
			return true;
		}
		actual = actual ->siguiente;
	}
	if(band = false){
		return false;
	}
}

template<class dato>
dato lista<dato>::get_elemento(int pos){
	Nodo<dato> *aux = new Nodo<dato>();
	aux = h;
	int cont = 0;
	while(cont < pos){
		aux = aux ->siguiente;
		cont = cont + 1;
	}
	return aux ->dato;
}
