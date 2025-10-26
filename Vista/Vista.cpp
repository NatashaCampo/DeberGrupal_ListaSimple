#include "Vista.h"
#include <iostream>

int Vista::pedirValor() {
    int val;
    std::cout << "Introduce valor: ";
    std::cin >> val;
    return val;
}
void Vista::mostrarMensaje(const char* msg) {
    std::cout << msg << std::endl;
}
