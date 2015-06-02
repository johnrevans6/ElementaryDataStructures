#include <iostream>
//#include "LinkedList.h"
//#include "Stack.h"
//#include "Queue.h"
using namespace std;

int main()
{
	//Test Linked List
	/*LinkedList list;
	
	for (int i = 0; i < 10; i++)
	{		
		list.push(i);
	}

	list.traverse();

	nodeptr node = list.search(5);	
	
	cout << node->data << endl << endl;*/

	//Test Stack

	/*Stack stack;

	for (int i = 0; i < 10; i++)
	{
		stack.push(i);
	}

	for (int i = 0; i < 10; i++)
	{
		cout << stack.top() << " ";
		stack.pop();
	}*/	

	//Test Queue
	Queue queue;
	for (int i = 0; i < 10; i++)
	{
		queue.push(i);
	}

	for (int i = 0; i < 10; i++)
	{
		cout << queue.front();
		queue.pop();
	}

	cout<<queue.isempty();
	return 0;
}