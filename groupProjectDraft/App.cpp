#include "App.h"



App::App()
{
	students = new List<Student>();
	AddStudent();
}


App::~App()
{
}

void App::AddStudent()
{
	Node<Student>* temp = new Node<Student>;
	students->AddNode(temp);
}
void App::DeleteStudent()
{
}

void App::run()
{
	for (int i = 0; i < students->length; i++)
	{
		students->PrintList();
	}
}
