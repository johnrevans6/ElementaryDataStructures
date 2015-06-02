#include "Stack.h"
#include <iostream>
using namespace std;

Stack::Stack()
{
	head = NULL;
}

Stack::~Stack()
{
	for (; head != NULL; head = head->next)
	{
		nodeptr tmp = head;
		head = tmp->next;
		delete tmp;
	}
}

void Stack::push(int num)
{
	nodeptr tmp = new Node();
	tmp->data = num;

	tmp->next = head;
	head = tmp;
}

nodeptr Stack::pop()
{
	if (!isempty())
	{
		nodeptr tmp = head;
		head = head->next;

		return tmp;
	}

	return NULL;
}

int Stack::top()
{
	return head->data;
}

bool Stack::isempty()
{
	return head == NULL;
}