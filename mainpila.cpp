#include <stdio.h>
#include <iostream>
#include <stdexcept>
#include <stdlib.h>
#include <string.h>
#include <vector>
#include "pila.h"

int main(){
	try {
	  Pila<int> p;
	  p.adicionar(2);
	  p.adicionar(5);
	  p.adicionar(7);
	  p.mostrar();
	  p.eliminar();
	  p.mostrar();
	  p.eliminar();
	  p.mostrar();
	}catch (const std::out_of_range &oor) {
		cout<<"No hay mas elementos en la pila"<<endl;
		}
}