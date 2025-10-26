#include "Cola.h"
#include <iostream>

Cola::Cola() : cabeza(nullptr) {}

Cola::~Cola() { liberarRec(cabeza); }

void Cola::liberarRec(Nodo* nodo) {
    if(nodo){
        liberarRec(nodo->getSiguiente());
        delete nodo;
    }
}

Nodo* Cola::insertarColaRec(Nodo* nodo, int valor){
    if(!nodo) return new Nodo(valor);
    nodo->setSiguiente(insertarColaRec(nodo->getSiguiente(), valor));
    return nodo;
}

int Cola::InsertarCola(int valor){
    cabeza = insertarColaRec(cabeza, valor);
    return 1;
}

Nodo* Cola::insertarCabezaRec(Nodo* nodo, int valor){
    Nodo* nuevo = new Nodo(valor);
    nuevo->setSiguiente(nodo);
    return nuevo;
}

int Cola::InsertarCabeza(int valor){
    cabeza = insertarCabezaRec(cabeza, valor);
    return 1;
}

Nodo* Cola::eliminarColaRec(Nodo* nodo, int valor, bool& eliminado){
    if(!nodo) return nullptr;
    if(nodo->getDato() == valor){
        eliminado = true;
        Nodo* tmp = nodo->getSiguiente();
        delete nodo;
        return tmp;
    }
    nodo->setSiguiente(eliminarColaRec(nodo->getSiguiente(), valor, eliminado));
    return nodo;
}

int Cola::EliminarCola(int valor){
    bool eliminado = false;
    cabeza = eliminarColaRec(cabeza, valor, eliminado);
    return eliminado ? 1 : 0;
}

Nodo* Cola::eliminarCabezaRec(Nodo* nodo, int valor, bool& eliminado){
    if(!nodo) return nullptr;
    if(nodo->getDato() == valor){
        eliminado = true;
        Nodo* tmp = nodo->getSiguiente();
        delete nodo;
        return tmp;
    }
    nodo->setSiguiente(eliminarCabezaRec(nodo->getSiguiente(), valor, eliminado));
    return nodo;
}

int Cola::EliminarCabeza(int valor){
    bool eliminado = false;
    cabeza = eliminarCabezaRec(cabeza, valor, eliminado);
    return eliminado ? 1 : 0;
}

void Cola::imprimirRec(Nodo* nodo) const {
    if(!nodo){ std::cout << std::endl; return; }
    std::cout << nodo->getDato() << " ";
    imprimirRec(nodo->getSiguiente());
}

int Cola::Imprimir(int){
    imprimirRec(cabeza);
    return 1;
}

bool Cola::buscarRec(Nodo* nodo, int valor) const{
    if(!nodo) return false;
    if(nodo->getDato() == valor) return true;
    return buscarRec(nodo->getSiguiente(), valor);
}

int Cola::Buscar(int valor){
    return buscarRec(cabeza, valor) ? 1 : 0;
}
