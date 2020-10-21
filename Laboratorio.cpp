#include "Laboratorio.h"
#include <iostream>


Laboratorio::Laboratorio()
{
    cont = 0;
}

void Laboratorio::agregarComputadora(const Computadora &f)
{
    if (cont < 5) {
        arreglo[cont] = f;
        cont++;
    }
    else {
        cout << "No hay mas espacio" << endl;
    }
}

void Laboratorio::mostrar()
{
	cout << left;
	cout << setw(10) << "Sistema";
	cout << setw(10) << "Nombre";
	cout << setw(10) << "Ram";
	cout << setw(8) << "Discoduro" <<endl;
    for (size_t i = 0; i < cont; i++) {
       Computadora &f = arreglo[i];
       cout << f;
	   //cout << "Sistema: " << f.getSistema() << endl;
        //cout << "Nombre: " << f.getNombre() << endl;
        //cout << "Ram: " << f.getRam() << endl;
        //cout << "Disco Duro: " << f.getDiscoduro() << endl;
        //cout << endl;
    }
}
