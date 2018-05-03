#pragma once
#include<iostream>
#include"Nodo.h"
class ListaS {
private:
	Nodo * _pFirst;
	//Puntero al Primer nodo de la lista (NULL si la lista esta vacia)
	Nodo * _pActual;
	//Puntero al nodo leido (por getFirst o getNext)
	int _cant;	//Cantidad de Nodos en lista
	Nodo* getLast();
	//Metodo devuelve el puntero al ultimo nodo
public:
	ListaS();
	~ListaS();
	void clear();
	bool pushFront(const int &data);	//Inserta un nodo por delante de la lista
	bool pushBack(const int &data);		//Inserta un nodo por detras de la lista
	bool pullFront(int &data);			//Extrae un dato por delante de la lista
	bool pullBack(int &data);			//Extrae un dato por detras de la lista
	bool getFirst(int &data);			//Devuelve el primer dato
	bool getNext(int &data);			//Devuelve el siguiente dato
	Nodo* getLast();					//Devuelve un puntero al ultimo nodo
	int getCant();						//devuelve la cantidad de nodos que tiene la lista
};
