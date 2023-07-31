#pragma once

#include   "listnode.h"
#include "linklist.h"

template <class T> class linklist;
template <class T> class listiterator;

template <class T>
class listiterator
{

public:
		S_list<T>* currentNode;
	S_list<T>* list;

	listiterator(linklist * 1, S_list<T>* n);

	void proceed();
	void start();
	bool isValid();

	T& item();

};

template <class T>
listiterator<T>::listiterator(linklist<T> *1, S_list<T> *n)
{
	list = l;
	currentNode = n;
}



template <class T>
bool listiterator<T>::isValid()
{
	return currentNode != nullptr;
}

template <class T>
void listiterator<T>::start()
{
	currentNode = list->head;
}

template<class T>
inline listiterator<T>::listiterator(linklist * 1, S_list<T>* n)
{
}

template <class T>
void listiterator<T>::proceed()
{
	if (currentNode == nullptr)
		return;
	currentNode = currentNode->getNext();
}

template <class T>
T& listiterator<T>::item()
{
	return currentNode->getData();
}






}