#include <string>
#include "StudentList.h"
using namespace std;
//creating the a struct to hold basic information about the student with respective typenames
struct student
{
	string name;
	string major;
	float grades;
	int id;
	int gradYear;

};
/*creating the node for the linklist, two pointers one forward and one backward.
**Middle bit holding in specified data taken from the student struct.
**We will refer to pieces of the students struct through multiple pointers
*/

//Creating a class for our linklist, with functions within that will make our data easier to manipulate in the long run

	void linklist::add_node(int student)
	{
		Node *temp = new Node; //create temporary node
		temp->next = NULL; //set it to null

		if (head == NULL)
		{
			head = temp;
			tail = temp; //assign it to the first node if its empty 
		}
		else
		{
			tail->next = temp;
			tail = tail->next; //if the first node isn't empty assigns to next node (need to ask about this part)
		}
		
	}
	void linklist::delete_node(int student)
	{
		tail->prev;
		tail->next = NULL;//hoping this sets ptr to prev then sets next value to null
	}
	void go_back()
	{
		tail = tail->prev; //hopefully moves backward
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
			std::cout<< getData() << std::endl;
			runThrough(); //calls runThrough function and prints it
		}
	}
};

