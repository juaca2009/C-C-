#include "tablero.h"
#include <iostream>
#include <stdlib.h>

using namespace std;

Tablero::Tablero(){
	lPortaAviones.iniciar();
	lNaves.iniciar();
	tab=(char**)malloc(sizeof(char*)*20);
	for(int i=0; i<20; i++){
		tab[i]=(char*)malloc(sizeof(char)*20);
	}
	for(int i=0; i<20; i++){
		for(int j=0; j<20; j++){
			tab[i][j]='.';
		}
	}
	dimX=20; dimY=20;
	for(int i=0; i<7; i++){
		PortaAviones p;
		p.setPosX(i*3);
		p.setPosY(0);
		p.setPlayer(0);
		tab[i*3][0]='P';
		lPortaAviones.insertar_lista(p);
		Nave n;
		n.setPosX(i*3);
		n.setPosY(1);
		n.setPlayer(0);
		tab[i*3][1]='N';
		lNaves.insertar_lista(n);
	}
	for(int i=0; i<7; i++){
		PortaAviones p;
		p.setPosX(i*3);
		p.setPosY(18);
		p.setPlayer(1);
		tab[i*3][18]='P';
		lPortaAviones.insertar_lista(p);
		Nave n;
		n.setPosX(i*3);
		n.setPosY(19);
		n.setPlayer(1);
		tab[i*3][19]='N';
		lNaves.insertar_lista(n);
	}
}
Tablero::~Tablero(){}
lista<PortaAviones> Tablero::getPortaAviones(){return lPortaAviones;}
lista<Nave> Tablero::getLNaves(){return lNaves;}
void Tablero::addPortaAviones(PortaAviones porta){lPortaAviones.insertar_lista(porta);}
void Tablero::addNave(Nave nave){lNaves.insertar_lista(nave);}
void Tablero::movePortaAviones(int index, int x, int y, int player){
	PortaAviones a;
	a = lPortaAviones.get_elemento(index);
	int x1= a.getPosX();
	int y1= a.getPosY();
	tab[x1][y1]='.';	
	a.setPosX(x);
	a.setPosY(y);
	tab[x][y]='P';
	for(int i=0; i<lPortaAviones.longitud_lista(); i++){
		if(i!=index){
			PortaAviones buff=lPortaAviones.get_elemento(i);
			if(buff.getPlayer()!=player && buff.getPosX()==x && buff.getPosY()){
				cout<<"Colision"<<endl;
				buff.setPosX(-1);
				buff.setPosY(-1);
			}
		}else{
			cout<<"Movida exitosa"<<endl;
		}
	}
	for(int i=0; i<lNaves.longitud_lista(); i++){
		if(i!=index){
			Nave buff=lNaves.get_elemento(i);
			if(buff.getPlayer()!=player && buff.getPosX()==x && buff.getPosY()){
				cout<<"Colision"<<endl;
				buff.setPosX(-1);
				buff.setPosY(-1);
			}
		}else{
			cout<<"Movida exitosa"<<endl;
		}
	}
}
void Tablero::moveNave(int index, int x, int y, int player){
	Nave a;
	a = lNaves.get_elemento(index);
	int x1=a.getPosX();
	int y1=a.getPosY();
	tab[x1][y1]='.';
	a.setPosX(x);
	a.setPosY(y);
	tab[x][y]='N';
	for(int i=0; i<lNaves.longitud_lista(); i++){
		if(i!=index){
			Nave buff=lNaves.get_elemento(i);
			if(buff.getPlayer()!=player && buff.getPosX()==x && buff.getPosY()){
				cout<<"Colision"<<endl;
				buff.setPosX(-1);
				buff.setPosY(-1);
			}
		}else{
			cout<<"Movida exitosa"<<endl;
		}
	}
	for(int i=0; i<lPortaAviones.longitud_lista(); i++){
		if(i!=index){
			PortaAviones buff=lPortaAviones.get_elemento(i);
			if(buff.getPlayer()!=player && buff.getPosX()==x && buff.getPosY()){
				cout<<"Colision"<<endl;
				buff.setPosX(-1);
				buff.setPosY(-1);
			}
		}else{
			cout<<"Movida exitosa"<<endl;
		}
	}
}

void Tablero::shootMisil(int x, int y, int player){
	for(int i=0; i<lPortaAviones.longitud_lista(); i++){
		PortaAviones buff= lPortaAviones.get_elemento(i);		
		if(buff.getPosX()==x && buff.getPosY()==y){
			cout<<"Elemento destruido"<<endl;
			buff.setPosX(-1);
			buff.setPosY(-1);
			tab[x][y]='*';
		}
	}
	for(int i=0; i<lNaves.longitud_lista(); i++){
		Nave buff=lNaves.get_elemento(i);		
		if(buff.getPosX()==x && buff.getPosY()==y){
			cout<<"Elemento destruido"<<endl;
			buff.setPosX(-1);
			buff.setPosY(-1);
			tab[x][y]='*';
		}
	}
}

void Tablero::printTablero(){
	for(int i=0; i<20; i++){
		for(int j=0; j<20; j++){
			cout<<tab[i][j] << " ";
		}
		cout<<endl;
	}	
}
