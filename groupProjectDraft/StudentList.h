#include <string>
#include <iostream>


#ifndef STUDENTLIST_H
#define STUDENTLIST_H

class linklist
	{
	private:
		typedef struct Node
		{

			int student, data;
			Node *next;
		};
		typedef struct Node* nodePtr;
		nodePtr head;
		nodePtr tail;
		nodePtr prev;
		
		//declaring the first node in the linked list and making it private
	public:
		linklist()
		{
			head = NULL;
			tail = NULL; 
			prev = NULL;
		}

	void add_node(int student);
	void delete_node(int student);
	void go_back();
	void runThrough();
	student getData();
	void PrintList();
};

#endif