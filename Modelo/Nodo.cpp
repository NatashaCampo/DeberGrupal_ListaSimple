#include "Nodo.h"

Nodo::Nodo(int valor) : dato(valor), siguiente(nullptr) {}
int Nodo::getDato() const { return dato; }
void Nodo::setDato(int newDato) { dato = newDato; }
Nodo* Nodo::getSiguiente() const { return siguiente; }
void Nodo::setSiguiente(Nodo* sig) { siguiente = sig; }
Nodo::~Nodo() {}
