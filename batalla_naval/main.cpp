#include <iostream>
#include "tablero.h"
#include"nave.h"
#include"portaviones.h"
#include"ship.h"
#include "tablero.cpp"
#include"nave.cpp"
#include"portaviones.cpp"
#include"ship.cpp"

int main(){
	int jugada=0;
	int comando=-1;
	int x=0;
	int y=0;
	int q=0;
	Tablero tablero;
	lista<PortaAviones> a;
	lista<Nave> b;
	PortaAviones c;
	Nave d;
	tablero.printTablero();	
	while(jugada>=0){
		int isP1=1;
		if(jugada%2==0){
			cout<<"Jugador 1: "<<endl;
			isP1=0;		
		}else{
			cout<<"Jugador 2: "<<endl;
		}
		a = tablero.getPortaAviones();
		for(int i=0; i< a.longitud_lista(); i++){
			c = a.get_elemento(i);
			if(c.getPosX()>=0 && c.getPlayer()==isP1){
				cout<<"Portavion"<<i<<endl;
			}
		}
		b = tablero.getLNaves();
		for(int i=0; i< b.longitud_lista(); i++){
			d = b.get_elemento(i);
			if(d.getPosX()>=0 && d.getPlayer()==isP1){
				cout<<"Nave"<<i<<endl;
			}
		}
		cout<<"0. mover portavion a x y q"<<endl;
		cout<<"1. mover nave a x y q"<<endl;
		cout<<"2. disparar misil a x y"<<endl;
		cout<<"3. salir"<< endl;
		cin>>comando;
		if(comando==0){
			cin >>x>>y>>q;
			tablero.movePortaAviones(q, x, y, isP1);
		}
		if(comando==1){
			cin >>x>>y>>q;
			tablero.moveNave(q, x, y, isP1);
		}
		if(comando==2){
			cin >>x>>y>>q;
			tablero.shootMisil(x, y, isP1);
		}
		if(comando==3){
			system("cls");
			break;
		}
		jugada++;
		tablero.printTablero();
	}
}
