#pragma once


using namespace std;

template <class t>

class arraystack
{

	t* data;
	int topP;
	int space;

public:
		arraystack(int size = 21);
	void push(t item);
	t top();
	void pop();
	int count();
	//void print();
	bool isEmpty();
	~arraystack();


};

template <class t>
arraystack <t> ::arraystack(int size)
{

	data = new t[size];
	space = size;
	topP = 0;

}

//template <class T>
//void arraystack<T>::print()
//{
//	for (int i = 0; i < topP; i++)
//	{
//		if (i != 0)
//		{
//			cout << ", ";
//		}
//		cout << data[i];
//	}
//	cout << endl;
//}

template <class t>
void arraystack <t> :: push(t item)
{
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
t arraystack <t> ::top()
{

	if (topP > 0)
	{
		return data[topP - 1];
	}
	return 0;

}

template <class t>
void arraystack <t> ::pop()
{

	if (topP > 0)
	{
		topP--;
	}
		

}

template <class t>
int arraystack <t> ::count() {

	return topP;

}

template <class T>
bool arraystack<T>::isEmpty()
{
	if (topP == 0) {

	
	}

	if (topP != 0) {

		cout << "data presant";

	}
}

template <class t>
arraystack <t> :: ~arraystack()
{
	delete[] data;
	data = nullptr;
 }