#pragma once
#include "listiterator.h"
#include "listnode.h"

template <class T>
class S_list
{
public:

	listnode<T>* head, * tail;

	S_list();

	void append(T data);
	void prepend(T data);
	void removeHead();
	void removeTail();
	void remove(listiterator<T> iterator);
	void insert(listiterator<T> iterator, T data);
	listiterator<T> getIterator();
	~S_list();
};

template <class T>
void S_list<T>::remove(listiterator<T> iterator);
{
	if (iterator.current








}

template<class T>
inline S_list<T>::~S_list()
{
}
