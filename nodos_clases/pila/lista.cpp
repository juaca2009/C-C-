#include"lista.h"
#include <stdio.h>
#include<iostream>
using namespace std;

void lista:: iniciar(){
	h = NULL;
}

int lista::longitud_lista(){
	Nodo *actual = new Nodo();
	actual = h;
	int cont = 0;
	while(actual != NULL){
		actual = actual -> siguiente;
		cont = cont + 1;
	}
	return cont;
}

void lista::insertar_lista(int n){
	Nodo *nuevo_nodo = new Nodo();
	Nodo *temp;
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

void lista::insertar_lista_posicion(int n, int pos){
	Nodo *nuevo_nodo = new Nodo();
	Nodo *temp;
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

void lista::eliminar(){
	Nodo *aux = h;
	h = aux->siguiente;
	delete aux;
}

void lista::eliminar2(){
	Nodo *aux = h;
	while(aux != NULL){
		aux = aux ->siguiente;
	}
	for(int i = 0; i < longitud_lista()-1; i++){
		h = h ->siguiente;
	}
	h ->siguiente = NULL;
	delete aux;
}

void lista::mostrar(){
	Nodo *actual = new Nodo();
	actual = h;
	while(actual != NULL){
		cout << actual -> dato << " ";
		actual = actual -> siguiente;
	}
	cout << endl;
}

	