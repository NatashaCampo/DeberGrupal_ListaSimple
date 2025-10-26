#pragma once
#include "../Modelo/Cola.h"
#include "../Vista/Vista.h"

class Controlador {
private:
    Cola cola;
    Vista vista;
public:
    void menu();
};
