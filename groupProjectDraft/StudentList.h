#include <string>
#include <iostream>


#ifndef STUDENTLIST_H
#define STUDENTLIST_H
struct student{};
struct Node{};
template<class T>
class linklist 
{
	void add_node(student dat);
	void delete_node(student dat);
	void go_back();
	void runThrough();
	student getData();
	void print();
};

#endif