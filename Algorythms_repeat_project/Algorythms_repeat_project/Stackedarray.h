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

	//defined the templates so they can be used in the .cpp

		arraystack(int size = 21);
	void push(t item);
	void pop();
	t getElement(int index);
	int length();
	~arraystack();
	bool remove(int index);
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

//removes all data from the array

template <class t>
arraystack <t> :: ~arraystack()

{

		delete[] data;
		data = nullptr;

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


//pops out value out of array

template <class t>
void arraystack <t> :: pop()
{
	if (topP > 0) {
		topP--;
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

template <class t>
bool arraystack <t> ::remove(int index) {

	// if index is more than or equal to zero and index is less than top posistion, if data equals then index it is on pop it out of the array

	if (index >= 0 && index < topP) {

		for (int i = 0; i < topP; ++i) {

			if (data[i] == index) {
	//			data[i].pop(index);
			}
		}
		topP--;
		return true;


	}

	return false;

}

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

