/***********************************************************************
 * Module:  Procesos.h
 * Author:  User
 * Modified: viernes, 24 de octubre de 2025 10:12:02
 * Purpose: Declaration of the class Procesos
 ***********************************************************************/

#if !defined(__Class_Diagram_2_Procesos_h)
#define __Class_Diagram_2_Procesos_h

class Procesos
{
public:
   virtual int EliminarCola(int valor)=0;
   virtual int InsertarCola(int valor)=0;
   virtual int Buscar(int valor)=0;
   virtual int Imprimir(int valor)=0;
   virtual int InsertarCabeza(int valor)=0;
   virtual int EliminarCabeza(int valor)=0;

protected:
private:

};

#endif