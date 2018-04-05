#pragma once
#include "ghaul.h"

struct Student
{
	std::string name;

	Student() {
		std::cout << "Enter name: ";
		getline(std::cin, this->name);
	}
};

class App
{

public:
	App();
	~App();

	List<Student>* students;

	void AddStudent();
	void DeleteStudent();

	void run();
};

#pragma once
