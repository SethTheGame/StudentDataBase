#pragma once
#ifndef ghaul_H
#define ghaul_H

#include <iostream>

#include <string>

template<typename T>
struct Node
{
	T data;
	Node* next;

};

template<typename T>
class List
{
private:
	Node<T>* head;
	Node<T>* curr;
	Node<T>* temp;



public: //This is where the functions go
	List<T>::List();
	void List<T>::AddNode(Node<T>* addData);
	void List<T>::DeleteNode(Node<T>* delData);
	void List<T>::PrintList();
	int length;

};

template<typename T>
List<T>::List() {
	head = NULL;
	curr = NULL;
	temp = NULL;

}

template<typename T>
void List<T>::AddNode(Node<T>* addData) {

	addData->next = NULL;
	//below basically makes it so if the mode is pointing to some sort of object, it means we have some sort of list intact
	if (head != NULL) {
		curr = head;
		while (curr->next != NULL) {
			curr = curr->next;
		}
		curr->next = addData;
	}
	else //if we don't have the list, just makes n the front(head will point to n)
	{
		head = addData;
	}
	length++;

}

template<typename T>
void List<T>::DeleteNode(Node<T>* delData) {
	temp = head;
	curr = head;
	while (curr != NULL && curr->data != delData) {
		temp = curr;
		curr = curr->next;
	}
	if (curr == NULL) {
		std::cout << delData << "was not in the list\n";
		delete delPtr;
	}
	else {
		delPtr = curr;
		curr = curr->next;
		temp->next = curr;
		if (delPtr == head)
		{
			head = head->next;
			temp = NULL;
		}
		delete delPtr;
		std::cout << "The value " << delData << "was deleted\n";
		length--;
	}
}

template<typename T>
void List<T>::PrintList() {
	curr = head;
	while (curr != NULL) {
		std::cout << curr->data.name << std::endl;
		curr = curr->next;
	}
}

#endif;#pragma once
