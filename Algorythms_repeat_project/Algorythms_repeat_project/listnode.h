#pragma once


template <class T>
class S_list
{
	T data;
	S_list<T>* next;
	
public:

	S_list(T data);
	void insertAfter(T data);
	T& getData();
	S_list<T>* getNext();
	void setNext(S_list<T>* next);

};

template <class T>
S_list<T>::S_list(T data)
{

	this->data = data;
	this->next = nullptr;

}
template <class T>{

}

template<class T>
inline S_list<T>::S_list(t data)
{
}
