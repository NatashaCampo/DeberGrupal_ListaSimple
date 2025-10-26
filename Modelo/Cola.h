#pragma once
#include "Procesos.h"
#include "Nodo.h"

class Cola : public Procesos {
private:
    Nodo* cabeza;
    void imprimirRec(Nodo* nodo) const;
    bool buscarRec(Nodo* nodo, int valor) const;
    Nodo* insertarColaRec(Nodo* nodo, int valor);
    Nodo* eliminarColaRec(Nodo* nodo, int valor, bool& eliminado);
    Nodo* insertarCabezaRec(Nodo* nodo, int valor);
    Nodo* eliminarCabezaRec(Nodo* nodo, int valor, bool& eliminado);
    void liberarRec(Nodo* nodo);

public:
    Cola();
    ~Cola();

    int EliminarCola(int valor) override;
    int InsertarCola(int valor) override;
    int Buscar(int valor) override;
    int Imprimir(int dummy) override;
    int InsertarCabeza(int valor) override;
    int EliminarCabeza(int valor) override;
};
