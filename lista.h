#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <vector>

using namespace std;

template<class T>

class Lista : public vector <T>{
	public:
		Lista();
		Lista(lst otraLista);
		~Lista();
		push_back(T elemento);
		push_front(T elemento);
		T pop_back();
		T front();
		bool empty();
		int size();
		clear();