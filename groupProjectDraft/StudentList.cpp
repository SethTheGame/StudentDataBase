#include <string>

//creating the a struct to hold basic information about the student with respective typenames
struct student
{
	std::string name;
	std::string major;
	float grades;
	int id;
	int gradYear;

};
/*creating the node for the linklist, two pointers one forward and one backward.
**Middle bit holding in specified data taken from the student struct.
**We will refer to pieces of the students struct through multiple pointers
*/

//Creating a class for our linklist, with functions within that will make our data easier to manipulate in the long run
template<class T>
class linklist 
{
private:
	struct Node
	{
		Node *prev;
		student data;
		Node *next;
	};
	Node * head, *tail; //declaring the first node in the linked list and making it private
public:
	template<typename T> //typename declared as T for ease, basically representing any type that is interpreted
	linked_list(T)
	{
		head = NULL;
		tail = NULL; //setting both the head and tail of the linked list to null
	}

	void add_node(student dat)
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
	void delete_node(student dat)
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

