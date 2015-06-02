#include <iostream>
#include "LinkedList.h"
using namespace std;

int main()
{
	LinkedList list;
	
	for (int i = 0; i < 10; i++)
	{		
		list.push(i);
	}

	list.traverse();

	nodeptr node = list.search(5);	
	
	cout << node->data << endl << endl;

	return 0;
}