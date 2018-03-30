#include "StudentList.h"
#include <string>
struct student
{
	std::string name;
	std::string major;
	float grades;
	int id;
	int gradYear;
};
struct Node
{
	Node *prev;
	student data;
	Node *next;
};
class linklist
{
private:
	Node * head, *tail; //declaring the first node in the linked list and making it private
public:
	template<typename T>
	linked_list(T)
	{
		head = NULL;
		tail = NULL; //setting both the head and tail of the linked list to null
	}

	void add_node(int n)
	{
		Node *nodee = new Node; //create temporary node
		nodee->next = NULL; //set it to null

		if (head == NULL)
		{
			head = nodee;
			tail = nodee; //assign it to the first node if its empty 
		}
		else
		{
			tail->next = nodee;
			tail = tail->next; //if the first node isn't empty assigns to next node (need to ask about this part)
		}
		
	}
	void delete_node(int n)
	{

	}
	void go_back()
	{

	}
	void runThrough() {
		tail = tail->next; //iterates through the linked list from the start
	}
	student getData() {
		return tail->data; //returns the data in the linked list
	}
	void print() {
		if (head) {
			tail = head;
		}
		while (tail) {
			std::cout << getData() << std::endl;
			runThrough(); //calls runThrough function and prints it
		}
	}
};

void add_node(int n)
{
}
