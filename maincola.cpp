#include <stdio.h>
#include <iostream>
#include <stdexcept>
#include <stdlib.h>
#include <string.h>
#include <vector>
#include "cola.h"

int main(){
	try {
	  c<int> c;
	  c.adicionar(2);
	  c.adicionar(5);
	  c.adicionar(7);
	  c.mostrar();
	  c.eliminar();
	  c.mostrar();
	  c.eliminar();
	  c.mostrar();
	}catch (const std::out_of_range &oor) {
		cout<<"No hay mas elementos en la pila"<<endl;
		}
}