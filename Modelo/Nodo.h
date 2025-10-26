#pragma once

class Nodo {
private:
    int dato;
    Nodo* siguiente;
public:
    Nodo(int valor);
    int getDato() const;
    void setDato(int newDato);
    Nodo* getSiguiente() const;
    void setSiguiente(Nodo* sig);
    ~Nodo();
};
