#include <iostream>
#include "Item.h"
#include "Jugador.h"
#include "Bomba.h"
#include <vector>
#include <string>
using namespace std;

void BomberMan();
void imprimirMatriz(Item***, int,int);
void liberarMatriz(Item***&, int&);

int main() {
	vector<Jugador*> player;
	Jugador* jug;

	int opcion;

	do{
		cout<<"Bienvenido a Attax"<<endl;
		cout<<"1.- Jugar Bomberman"<<endl;
		cout<<"2.- Salir"<<endl;
		cin>> opcion;

		switch(opcion) {
			case 1:{
				string nombre;
				string estado;
				string controlador;

				cout<<"Ingrese Nombre de Jugador:"<<endl;
				cin>> nombre;
				cout<<"Ingrese estado de jugador: "<<endl;
				cin>> estado;
				cout<<"Ingrese Controlador(player o bot): "<<endl;
				cin>> controlador;

				jug = new Jugador(nombre,estado,controlador);
				player.push_back(jug);



				break;
			}
			case 2:
				cout<<"TENGA BUEN DIA!"<<endl;	
		}
	}while(opcion != 2);
	
}

void BomberMan() {
	int sizeh = 11;
	int sizev = 13;
	int x, y, x2, y2;
	bool gameover = false;
	int opn;	

	Item*** mainmatrix = new Item**[sizeh];
	for(int i = 0; i < sizeh; i++) {
		mainmatrix[i] = new Item*[sizev];
		for(int j = 0; j < sizev; j++) {
			mainmatrix[i][j] = new Item();
		}
	}

	/*for(int i = 0; i < sizeh; i++) {
		for(int j = 0; j < sizev; j++) {
			mainmatrix[i][j] = ' ';
		}
	}*/

	imprimirMatriz(mainmatrix,sizeh,sizev);

}

void imprimirMatriz(Item*** matrix, int sizeh, int sizev) {
	for(int i = 0; i < sizeh; i++) {
		for(int j = 0; j < sizev; j++) {
			if(matrix[i][j] == NULL) {
				cout<<"["<<" ]"<<endl;
			}else{
				cout<<"["<<matrix[i][j] -> toString()<<"]";

			}
		}
		cout<<endl;
	}
}

void liberarMatriz(Item***& matrix, int& size) {
	if(matrix != NULL) {
		for(int i = 0; i < size; i++) {
			delete[] matrix[i];
		        matrix[i] = NULL;	
		}

		delete[] matrix;
		matrix = NULL;
		size = 0;
	}
}


