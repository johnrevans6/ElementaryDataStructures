#include "LinkedList.h"
#include <iostream>
using namespace std;

LinkedList::LinkedList()
{
	head=NULL;
}

LinkedList::~LinkedList()
{
	for (; head != NULL; head = head->next)
	{
		nodeptr doomed = head;
		head = doomed->next;
		delete doomed;
	}	
}


bool LinkedList::isempty()
{
	return head == NULL;
}

void LinkedList::push(int num)
{

	nodeptr temp = new Node();

	temp->data = num;
	temp->next = head;
	head = temp;
}

void LinkedList::traverse()
{
	nodeptr tmp = new Node();

	for (tmp = head; tmp!=NULL; tmp = tmp->next)
	{
		cout << tmp->data << " ";
	}	
}

nodeptr LinkedList::search(int num)
{
	nodeptr tmp = head;
	if (isempty() || tmp == NULL)
	{
		return NULL;
	}

	if (tmp->data == num)
	{
		return tmp;
	}
	
	for (; tmp != NULL; tmp = tmp->next)
	{
		if (tmp->data == num)
		{
			return tmp;
		}		
	}

	return NULL;
	
}

