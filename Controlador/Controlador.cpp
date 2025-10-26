#include "Controlador.h"
#include <iostream>

void Controlador::menu(){
    int opcion, val;
    do {
        std::cout << "1. Insertar Cola\n2. Insertar Cabeza\n3. Eliminar Cola\n4. Eliminar Cabeza\n5. Buscar\n6. Imprimir\n0. Salir\n";
        std::cin >> opcion;
        switch(opcion){
            case 1:
                val = vista.pedirValor();
                cola.InsertarCola(val);
                break;
            case 2:
                val = vista.pedirValor();
                cola.InsertarCabeza(val);
                break;
            case 3:
                val = vista.pedirValor();
                cola.EliminarCola(val);
                break;
            case 4:
                val = vista.pedirValor();
                cola.EliminarCabeza(val);
                break;
            case 5:
                val = vista.pedirValor();
                vista.mostrarMensaje(cola.Buscar(val) ? "Encontrado" : "No encontrado");
                break;
            case 6:
                std::cout << "Lista: ";
                cola.Imprimir(0);
                break;
            case 0:
                break;
            default:
                vista.mostrarMensaje("Opción inválida");
        }
    } while(opcion != 0);
}
