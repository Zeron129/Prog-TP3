#pragma once
#include<iostream>
#include"Nodo.h"
class Nodo{
private:
	int _data;				//dato a guardar
	Nodo* _next;			//puntero al siguiente nodo
public:
	Nodo();					//Constructor por defecto
	~Nodo();				//Destructor
	void setData(int data);	//Seteo el dato del nodo
	void setNext(Nodo* next);//Seteo ed valor de _Next
	int getData();			//Leo el atributo _dato
	Nodo* getNext();		//Leo el atributo _Next
};
