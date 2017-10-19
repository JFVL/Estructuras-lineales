#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <vector>

using namespace std;

<template class><typename T>

class cola : public vector <T>{
  public:
    void adicionar(T elemento);
    void mostrar(elemento);
    T eliminar();
};
template <class T>
  	void Cola <T>::adicionar (T elemento) {
      	this->push_back(elemento);
}
template <class T>    
void Cola <T>::mostrar () {
    	for (int  i = 0; i < size(); i++) {
        cout << this->at(i) << endl;
      }
    }
template <class T>
T Cola <T>::eliminar () {
      int posUltimo = this->size () - 1;
      T elemento = this->at (posUltimo);
      this->pop_back();
      return elemento;

      }
    }
  }