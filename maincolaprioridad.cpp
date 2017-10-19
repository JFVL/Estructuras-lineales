#include <stdio.h>
#include <iostream>
#include <stdexcept>
#include <stdlib.h>
#include <string.h>
#include <vector>
#include "cola.h"

int main(){
	try {
	  cP<int> cp;
	  cp.adicionar(2);
	  cp.adicionar(5);
	  cp.adicionar(7);
	  cp.buscarPos(2);
	  cp.buscarPos(5);
	  cp.buscarPos(7);
	  cp.mostrar();
	  cp.eliminar();
	  cp.mostrar();
	  cP.eliminar();
	  cP.mostrar();
	}catch (const std::out_of_range &oor) {
		cout<<"No hay mas elementos en la pila"<<endl;
		}
}