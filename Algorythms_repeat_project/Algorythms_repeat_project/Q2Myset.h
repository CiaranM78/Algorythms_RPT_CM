#pragma once
#include <string>
#include "Stackedarray.h"

using namespace std;

template <class t>

class Myset
{
	t* data;
	int topPset;
	int space;

public:

	int ifexcists(const t& target);
	Myset(int size  = 10);
	~Myset();
	void push(t item);
	void pop();
	t top();
};


template <class t>
 Myset <t> ::Myset(int size) {

	data = new t[size];
	topPset = 0;

}

 template <class t>
 Myset <t> :: ~Myset()

 {
	 if (data != nullptr) {

		 delete[] data;
		 data = nullptr;
		 space = 0;
	 }


 }

 template <class t>
 t Myset<t> ::top()
 {
	 if (topPset > 0) {

		 return data[topPset - 1];
	 }


 }

 template <class t>
 void Myset <t> ::push(t item)
 {

	 // if top posistion value is the same a space value return nothing

	 if (topPset == space)
	 {
		 return;
	 }

	 else {
		 data[topPset] = item;
		 topPset++;

	 }
 }

 template <class t>
 void Myset<t> ::pop()
 {
	 if (topPset > 0) {
		 topPset--;
	 }



 }



template <class t>
int Myset <t> ::ifexcists( const t& target) {

	for (int i = 0; i < topPset; ++i) {
		if (data[i] == target) {
			target.push ;


		}

		if (target != data [i]) {
		
			cout << "no simular values";
		}

	}

	return -1;

}
