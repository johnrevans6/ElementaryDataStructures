#include "Queue.h"
#include <iostream>
using namespace std;

Queue::Queue()
{
	head = NULL;
	tail = head;
}

Queue::~Queue()
{
	for (; head != NULL; head = head->next)
	{
		nodeptr tmp = head;
		head = head->next;
		delete tmp;
	}
	delete tail;
}

void Queue::push(int num)
{
	

	if (isempty())
	{
		head = new Node();
		head->data = num;		
		tail = head;
		return;
	}

	nodeptr tmp = new Node();
		
	tmp->data = num;		
	tail->next = tmp;
	tail = tmp;

	
}

nodeptr Queue::pop()
{
	if (!isempty())
	{
		nodeptr tmp = head;
		head = head->next;
		return tmp;
	}

	return NULL;
}

int Queue::front()
{
	return head->data;
}

bool Queue::isempty()
{
	return head == NULL;
}