#pragma once


using namespace std;

template <class t>

class arraystack
{

	t* data;
	int topP;
	int space;
	//int index;

public:



		arraystack(int size = 21);
	void push(t item);
	t getElement(int index);
	int length();
	~arraystack();
	/*bool remove(int index);*/
	int search(const t& target);
	


};

template <class t>
arraystack <t> ::arraystack(int size)
{

	data = new t[size];
	space = size;
	topP = 0;
	//index = 0;
}

template <class t>
arraystack <t> :: ~arraystack()

{
	if (data != nullptr) {

		delete[] data;
		data = nullptr;
		space = 0;
	}


}


template <class t>
void arraystack <t> :: push(t item)
{

	// if top posistion value is the same a space value return nothing

	if (topP == space)
	{
		return ;
	}

	else {
		data[topP] = item; 
		topP++;

	}
}




template <class t>
int arraystack <t> ::length() {

// returns top posistion

	return topP;

}



template <class t>
t arraystack <t> ::getElement( int index) {

// if the index value is greater then or equals to zero and the index value is still less then the top posistion return what index is

	if (index >= 0 && index < topP) {

		return index;
	}



}
//
//template <class t>
//bool arraystack <t> ::remove(int index) {
//
//	if (index < [0]) {
//
//		return false;
//	}
//
//	else {
//		delete target data;
//		space--;
//	}
//
//
//}

template <class t>
int arraystack <t> ::search(const t& target) {


// for each iteration of the loop if i equals the target return what i is.

	for (int i = 0; i < topP; ++i) {
		if (data[i] == target) {
			return i;
		}

	
	}

	return -1;

}

