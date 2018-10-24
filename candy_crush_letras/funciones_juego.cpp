#include<iostream>
using namespace std;
#include<time.h>
#include<stdlib.h>

struct candys{
	int tipo;
	char figura;
};

struct tableros{
	char mat[55][55];
	struct candys candy[55][55];
	int n;
};

struct juegos{
	struct tableros tablero;
	int puntaje;
	int jugadas;
};

void tamano(juegos &puntos){
	/*
	objetivo: esta funcion pide por teclado el 
	          el tamaño del tablero de juego
			  ademas lo valida.
	entradas: la estructura general (puntos).
	salidas: como salida tiene el tamaño del tablero de
	         de juego.
	*/
	int s = 1;
	while(s == 1){
		cout << "ingrese el tamano del tablero: ";
	    cin >> puntos.tablero.n;
		if(puntos.tablero.n <= 2 || puntos.tablero.n >= 55){
			cout << "tamano invalido" << endl;
		}
		else{
			s = 0;
		}
	}
}

void aumentar(juegos &puntos){
	/*
	objetivo: esta funcion aumenta la cantidad de jugadas
	          cuando se llega a ciertos puntos.
	entradas: recibe como entrada la estructura general (puntos)
	salidas: aumenta la cantidad de jugadas 
	*/
	if(puntos.puntaje >= 800){
		puntos.jugadas = puntos.jugadas + 5;
	}
}


void opciones(){
	/*
	objetivo: esta funcion imprime las ociones
	          de movimiento al usuario.
	entradas: no tiene entradas.
	salidas: imprime las opciones.
	*/
	cout << "0 - salir del juego" << endl;
	cout << "1 - mover hacia la izquierda" << endl;
	cout << "2 - mover hacia la derecha " << endl;
	cout << "3 - mover hacia abajo" << endl;
	cout << "4 - mover hacia arriba" << endl;
	cout << "eliga una opcion: ";
		
}

void entrada(int &fila, int &columna){
	/*
	objetivo: esta funcion  recibe por teclado
              dos valores enteros que have referencia 
              a la fila y la columna.			  
	entradas: fila y columna apuntan a la direccionde memoria
	          de dos variables.
	salidas: imprime las opciones.
	*/
	cout << "digite la fila: ";
	cin >> fila;
	cout << "digite la columna: ";
	cin >> columna;
}
	

void color(){
	/*
	objetivo: cambia de color el cmd de windows
	          a traves de comandos.
	entradas: no tiene entradas.
	salidas: cambia el color del cmd de windows
	*/
	system("color 0");
	system("color 1");
	system("color 2");
	system("color 3");
	system("color 4");
	system("color 5");
	system("color 6");
	system("color 7");
}

void imprimir_tablero(juegos puntos){
	/*
	objetivo: esta funcion imprime una matriz 5x5
	          que hace de tablero de juego, esta
			  funcion se usa principalmente cuando
			  ha habido un combio en la matriz.
	entradas: recibe como entrada la estructura general.
	salidas: una matriz 5x5
	*/
	for(int i = 0; i < puntos.tablero.n; i++){
		cout << "| |";
		for(int j = 0; j < puntos.tablero.n; j++){
			cout << puntos.tablero.mat[i][j] << "  ";
		}
		cout <<"| |" << endl;
	}
}

void asignar_valores(int a, int i, int j,juegos &puntos){
	/*
	objetivo: esta funcion le asigna un simbolo a una ficha
	          dependiendo de un numero aleatorio.
	entradas: recibe como entradas tres enteros y la estructura general
	salidas: asigna los simbolos a las fichas
	*/
	if(a == 0){
		puntos.tablero.candy[i][j].figura = '@'; 
		puntos.tablero.mat[i][j] = '@';
	}
	if(a == 1){
		puntos.tablero.candy[i][j].figura = '#'; 
		puntos.tablero.mat[i][j] = '#';
	}
	if(a == 2){
		puntos.tablero.candy[i][j].figura = '$'; 
		puntos.tablero.mat[i][j] = '$';
	}
	if(a == 3){
		puntos.tablero.candy[i][j].figura = '%'; 
		puntos.tablero.mat[i][j] = '%';
	}
	if(a == 4){
		puntos.tablero.candy[i][j].figura = '&'; 
		puntos.tablero.mat[i][j] = '&';
	}	
	if(a == 5){
		puntos.tablero.candy[i][j].figura = '?'; 
		puntos.tablero.mat[i][j] = '?';
	}
}

void iniciar_tablero(juegos &puntos){
	/*
	objetivo: la funcion crea numeros aleatoreos que
	          depues son usados para crear los simbolos, siendo 
			  esta el tablero de juego.
	entradas: recibe como entrada la estructura general.
	salidas: imprime una matriz 5x5 que hara de tablero de juego.
	*/
	srand(time(NULL));
	for(int i = 0; i < puntos.tablero.n; i++){
		for(int j = 0; j < puntos.tablero.n; j++){
			puntos.tablero.candy[i][j].tipo = rand()%5;
			asignar_valores(puntos.tablero.candy[i][j].tipo, i, j, puntos);
		}
	}
    imprimir_tablero(puntos);
}

void cambiar_izquierda(int fila, int columna, juegos &puntos){
	/*
	objetivo: esta funcion cambia de posicion
	         (izquierda) un elemento de la matriz 
	         previamente seleccionado.
	entradas(enteras): 
			  fila: hace referencia a una fila
			        de la matriz.
			   columna: hace referencia a una columna
			        de la matriz.
			   recibe como entrada la estructura general.
	salidas: intercambia los valores de la matriz
	         previamente seleccionados.
	*/
	char temp;
	char temp_2;
	temp = puntos.tablero.mat[fila][columna - 1];
	temp_2 = puntos.tablero.mat[fila][columna];
	puntos.tablero.mat[fila][columna - 1] = temp_2;
	puntos.tablero.mat[fila][columna] = temp;
}

void cambiar_derecha(int fila, int columna, juegos &puntos){
	/*
	objetivo: esta funcion cambia de posicion
	         (derecha) un elemento de la matriz 
	         previamente seleccionado.
	entradas(enteras): 
			  fila: hace referencia a una fila
			        de la matriz.
			   columna: hace referencia a una columna
			        de la matriz.
			   recibe como entrada la estructura general.
	salidas: intercambia los valores de la matriz
	         previamente seleccionados.
	*/
	char temp;
	char temp_2;
	temp = puntos.tablero.mat[fila][columna + 1];
	temp_2 = puntos.tablero.mat[fila][columna];
	puntos.tablero.mat[fila][columna + 1] = temp_2;
	puntos.tablero.mat[fila][columna] = temp;
}

void cambiar_abajo(int fila, int columna, juegos &puntos){
	/*
	objetivo: esta funcion cambia de posicion
	         (abajo) un elemento de la matriz 
	         previamente seleccionado.
	entradas(enteras): 
			  fila: hace referencia a una fila
			        de la matriz.
			   columna: hace referencia a una columna
			        de la matriz.
			   recibe como entrada la estructura general.
	salidas: intercambia los valores de la matriz
	         previamente seleccionados.
	*/
	char temp;
	char temp_2;
	temp = puntos.tablero.mat[fila + 1][columna];
	temp_2 = puntos.tablero.mat[fila][columna];
	puntos.tablero.mat[fila + 1][columna] = temp_2;
	puntos.tablero.mat[fila][columna] = temp;
}

void cambiar_arriba(int fila, int columna, juegos &puntos){
	/*
	objetivo: esta funcion cambia de posicion
	         (arriba) un elemento de la matriz 
	         previamente seleccionado.
	entradas(enteras): 
			  fila: hace referencia a una fila
			        de la matriz.
			   columna: hace referencia a una columna
			        de la matriz.
			   recibe como entrada la estructura general.
	salidas: intercambia los valores de la matriz
	         previamente seleccionados.
	*/
	char temp;
	char temp_2;
	temp = puntos.tablero.mat[fila - 1][columna];
	temp_2 = puntos.tablero.mat[fila][columna];
	puntos.tablero.mat[fila - 1][columna] = temp_2;
	puntos.tablero.mat[fila][columna] = temp;
}

void reemplazar(int fila, int columna, int n_fila, int n_columna, int nn_fila, int nn_columna, juegos &puntos){
	/*
	objetivo: esta funcion reemplaza con nuevo valores
	          los elemntos de la matriz que reciba como
			  paremetro.
	entradas(enteras): 
	          fila: hace referencia a una fila
			        de la matriz.
			  columna: hace referencia a una columna
			        de la matriz.
			  n_fila:hace referencia a una fila
			        de la matriz.
			  n_columna: hace referencia a una columna
			        de la matriz.
			  nn_fila:hace referencia a una fila
			        de la matriz.
			  nn_columna: hace referencia a una columna
			        de la matriz.
			  recibe como entrada la estructura general.
			  
	salidas: reemplaza los valores de los elemtos
	         de la matriz que recibe como entrada.
	*/
	srand(time(NULL));
	puntos.tablero.candy[fila][columna].tipo = rand()%5;
	puntos.tablero.candy[n_fila][n_columna].tipo = rand()%5;
	puntos.tablero.candy[nn_fila][nn_columna].tipo = rand()%5;
	asignar_valores( puntos.tablero.candy[fila][columna].tipo, fila, columna, puntos);
	asignar_valores( puntos.tablero.candy[n_fila][n_columna].tipo, n_fila, n_columna, puntos);
	asignar_valores( puntos.tablero.candy[nn_fila][nn_columna].tipo, nn_fila, nn_columna, puntos);
}	

void encontrar_trio(juegos &puntos){
	/*
	onjetivo: esta funcion  busca a los elementos 
	          que esten repetidos horizontalmente(filas) y
	          verticalmente(columnas).
	entradas: recibe como entrada la estructura general.
	salidas: como salid esta funcion muestra las posiciones
	         de las elementos repetidos (filas, columnas).
	*/
	for(int i = 0; i < puntos.tablero.n; i++){
		for(int j = 0; j < puntos.tablero.n; j++){
			if(j <= puntos.tablero.n - 3){
				if(puntos.tablero.mat[i][j] == puntos.tablero.mat[i][j + 1] && puntos.tablero.mat[i][j] == puntos.tablero.mat[i][j + 2] ){
					int fila = i;
					int columna = j;
					int n_fila = i;
					int n_columna = j + 1;
					int nn_fila = i;
					int nn_columna = j + 2;
					reemplazar(fila, columna, n_fila, n_columna, nn_fila, nn_columna, puntos);
					puntos.puntaje = puntos.puntaje + 100;
				}
			}
		}
	}
	for(int i = 0; i < puntos.tablero.n; i++){
		for(int j = 0; j < puntos.tablero.n; j++){
			if(i <= puntos.tablero.n - 3){
				if(puntos.tablero.mat[i][j] == puntos.tablero.mat[i + 1][j] && puntos.tablero.mat[i][j] == puntos.tablero.mat[i + 2][j] ){
					int fila = i;
					int columna = j;
					int n_fila = i + 1;
					int n_columna = j;
					int nn_fila = i + 2;
					int nn_columna = j;
					reemplazar(fila, columna, n_fila, n_columna, nn_fila, nn_columna, puntos);
					puntos.puntaje = puntos.puntaje + 100;
				}
			}
		}
	}
}

void juego(juegos &puntos){
	/*
	onjetivo: esta funcion  llama a las funciones principales
	          del funcionamiento del juego
	entradas: recibe como entrada la estructura general.
	salidas: como salida llama a las funciones importantes
	         del juego eh imprime los valores actualizados de
			 las variables puntaje y jugadas.
	*/
	cout << "entro";
	puntos.jugadas = puntos.jugadas - 1;
    system("cls");
	encontrar_trio(puntos);
	aumentar(puntos);
	cout <<"PUNTAJE: " << puntos.puntaje << endl;
	cout << "JUGADAS: " << puntos.jugadas << endl;
	imprimir_tablero(puntos);
	color();
}

void fin(juegos puntos){
	/*
	onjetivo: esta funcion  finalza el juego.
	entradas: recibe como entrada la estructura general.
	salidas: como salida cambia los colores he imprime el puntaje
	         final.
	*/
	system("cls");
	cout << "FIN DEL JUEGO!!" << endl;
	cout << "PUNTUACION FINAL: " << puntos.puntaje << endl;
	for(int i = 0; i < 5;i++){
		color();
	}
	system("cls");
}

void inicio(juegos &puntos){
	/*
	onjetivo: esta funcion  inicializa el juego y las 
	          variables nesesarias.
	entradas: recibe como entrada la estructura general.
	salidas: imprime las variables puntaje y jugadas ademas
	         de inicializar ciertas funciones iniciales del juego.
	*/
	tamano(puntos);
	system("cls");
	puntos.puntaje = 0;
	puntos.jugadas = 20;
	cout << "PUNTAJE: " << puntos.puntaje << endl;
	cout << "JUGADAS: " << puntos.jugadas << endl;
	iniciar_tablero(puntos);
	color();
}