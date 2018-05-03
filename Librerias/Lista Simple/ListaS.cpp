#include"ListaS.h"

ListaS::ListaS() {
	_pFirst = NULL;
	_pActual = NULL;
	_cant = 0;
}

ListaS::~ListaS() {
	if (_pFirst)
		delete _pFirst;
}

void ListaS::clear() {

}

bool ListaS::pushFront(const int &data) {
	Nodo *nodo = new Nodo();		//Creo un nodo para insertar en la lista
	if (nodo) {
		nodo->setData(data);
		//copio el dato pasado como parametro
		nodo->setNext(_pFirst);
		//La propiedad _next del nodo a insertar
		//debe apuntar hacia donde apunta _pFirst.
		_pFirst = nodo;
		//El puntero _pFirst debe apuntar al nodo insertado
		_cant++;
		//Incremento de la cantidad de nodos
		return true;
	}
	else
		return false;
}

bool ListaS::pushBack(const int &data) {
	Nodo* nodo = new Nodo();
	if (nodo) {
		nodo->setData(data);
		Nodo* lastNodo = getLast();
		if (lastNodo)
			lastNodo->setNext(nodo);
		else//Si no existe ningun "ultimoNodo" Significa que la lista estaba vacia
			_pFirst = nodo;
		_cant++;
		return true;
	}
	else
		return false;
}

bool ListaS::pullFront(int &data) {
	Nodo* nodoExtract;
	if (_pFirst) {
		nodoExtract = _pFirst;
		_pFirst = _pFirst->getNext();
	}
}

bool ListaS::pullBack(int &data) {

}

bool ListaS::getFirst(int &data) {

}

bool ListaS::getNext(int &data) {

}

Nodo* ListaS::getLast() {

}

int ListaS::getCant() {
	return _cant;
}
