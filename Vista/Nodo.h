/***********************************************************************
 * Module:  Nodo.h
 * Author:  User
 * Modified: viernes, 24 de octubre de 2025 10:12:02
 * Purpose: Declaration of the class Nodo
 ***********************************************************************/

#if !defined(__Class_Diagram_2_Nodo_h)
#define __Class_Diagram_2_Nodo_h

class Nodo
{
public:
   int getDato(void);
   void setDato(int newDato);
   Nodo();
   ~Nodo();

protected:
private:
   int Dato;


};

#endif