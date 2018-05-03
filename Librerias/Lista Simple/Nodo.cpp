#include"Nodo.h"

Nodo::Nodo(){
	_data = 0;
	_next = NULL;
}

Nodo::~Nodo(){
}

void Nodo::setData(int data) {
	_data = data;
}	//Seteo el dato del nodo

void Nodo::setNext(Nodo* next) {
	_next = next;
}	//Seteo ed valor de _Next

int Nodo::getData() {
	return _data;
}	//Leo el atributo _dato

Nodo* Nodo::getNext() {
	return _next;
}	//Leo el atributo _Next