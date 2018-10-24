#include"fichas.h"
#include<iostream>
using namespace std;

void ficha::set_ficha(char _simbolo){
	simbolo = _simbolo;
}

void ficha::cambiar_simbolo(char sim){
	simbolo = sim;
}
char ficha::get_simbolo(){
	return simbolo;
}


	
	
	