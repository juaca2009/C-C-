#include"lista.h"
#include<fstream>
#include <stdio.h>
#include<iostream>
#include<string.h>
#include <cstdlib>
#include<sstream>
using namespace std;

void lista::iniciar(){
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

void lista::mostrar(){
	Nodo *actual = new Nodo();
	actual = h;
	while(actual != NULL){
		cout << actual -> dato << " ";
		actual = actual -> siguiente;
	}
	cout << endl;
}

int lista::buscar(int n){
	bool band = false;
	int pos = 0;
	Nodo *actual = new Nodo();
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

bool lista::existe(int n){
	bool band = false;
	Nodo *actual = new Nodo();
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

void lista::guardar(string nombre_archivo){
	ofstream fout(nombre_archivo.c_str());
	Nodo *actual = new Nodo();
	actual = h;
	while(actual != NULL){
		fout << actual ->dato << " ";
		actual = actual ->siguiente;
	}
}
void lista::cargar(string nombre_archivo){
	ifstream archivo;
	archivo.open(nombre_archivo.c_str(), ios::out|ios::in);
	if(archivo.is_open()){
		int a;
		cout << "se abrio el archivo con exito" << endl;
		archivo >> a;
		insertar_lista(a);
		while(!archivo.eof()){
			archivo >> a;
			insertar_lista(a);
			archivo >> a;
		}
	}
	else{
		cout << "no se pudo abrir el archivo " << endl;
	}
}
	

	