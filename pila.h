#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <vector>

using namespace std;

template<class T>

class Pila : public vector <T>{
	public:
		Pila();
		~Pila();
  void adicionar (T elem);
  void mostrar();
  T eliminar();
  };
template <class T>
 Pila <T>::adicionar (T elem) {
 	this->push_back(elem);
}
template <class T>
void Pila <T>::mostrar() {
	int n = size ();
	for (int i=0; i<n; i++){
		cout<< this->at(i) << ", ";
	cout << endl;
	}
}
template <class T>
T Pila::eliminar() {
	int posUltimo = this->size () - 1;
	T elem = this->at (posUltimo);
	this->pop_back();
	return elem;
}
