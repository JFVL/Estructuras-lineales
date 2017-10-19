#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <vector>

using namespace std;

template <class T> 

class colaPrioridad : public vector <T>{
	public:
		void adicionar (T elem);
		T eliminar ();
		int buscarPos(T elem);
		void intercambiar(pos);
};

template <class T>
void colaPrioridad <T>::adicionar (T elem) {
	this->push_back (elem);
}

template <class T>
T colaPrioridad <T>::eliminar () {
      int posUltimo = this->size () - 1;
      T elemento = this->at (posUltimo);
      this->pop_back();
      return elemento;


template <class T>
int colaPrioridad <T>:: buscarPos (T elem) {
	for (int i = 0; i < size(); i++)
	{
		if(vector[i]== elem){
			return vector[i];
		}
	}
}

template <class T>
void colaPrioridad <T>::intercambiar (pos) {
	this->elem.swap(elem1);
}