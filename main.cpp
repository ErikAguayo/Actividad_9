#include <iostream>
#include "Computadora.h"
#include "Laboratorio.h"

using namespace std;

int main() {
  Computadora pc01 = Computadora ("Intel", "PC_UNO", 8, 500);
  
  Computadora pc02;
  pc02.setSistema("Ryzen");
  pc02.setNombre("Erik");
  pc02.setRam(16);
  pc02.setDiscoduro(1000);
  
  Computadora pc03;
  pc03.setSistema("Ryzen");
  pc03.setNombre("Master");
  pc03.setRam(32);
  pc03.setDiscoduro(1000);
  
  Laboratorio lab;
  lab.agregarComputadora(pc01);
  lab.agregarComputadora(pc02);
  lab.agregarComputadora(pc03);
  
  
  
  //cout << pc02;
  
  Computadora pc04;
  cin >> pc04; 
  
  lab << pc04;
  lab.mostrar();	


    return 0;
}
