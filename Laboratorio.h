#ifndef LABORATORIO_H
#define LABORATORIO_H
#include "Computadora.h"
#include <iostream>


using namespace std;

class Laboratorio
{
	Computadora arreglo[5];
	size_t cont;
	public:
	Laboratorio();
	void agregarComputadora(const Computadora &f);
	void mostrar();
	
	friend Laboratorio& operator<<(Laboratorio &l, const Computadora &c)
	{
		
		l.agregarComputadora(c);
		
		return l;
	}
	
};

#endif
