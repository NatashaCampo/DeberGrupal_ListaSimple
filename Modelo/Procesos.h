/***********************************************************************
 * Module:  Procesos.h
 * Author:  User
 * Modified: viernes, 24 de octubre de 2025 10:12:02
 * Purpose: Declaration of the class Procesos
 ***********************************************************************/

#pragma once

class Procesos {
public:
    virtual int EliminarCola(int valor) = 0;
    virtual int InsertarCola(int valor) = 0;
    virtual int Buscar(int valor) = 0;
    virtual int Imprimir(int dummy) = 0;  // dummy por compatibilidad
    virtual int InsertarCabeza(int valor) = 0;
    virtual int EliminarCabeza(int valor) = 0;
    virtual ~Procesos() {}
};
