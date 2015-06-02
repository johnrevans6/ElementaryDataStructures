#include <iostream>
//#include "LinkedList.h"
//#include "Stack.h"
//#include "Queue.h"
#include "BinaryTree.h"
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
	/*Queue queue;
	for (int i = 0; i < 10; i++)
	{
		queue.push(i);
	}

	for (int i = 0; i < 10; i++)
	{
		cout << queue.front();
		queue.pop();
	}
	cout<<queue.isempty();*/


	BinaryTree tree;

	tree.insert(2);
	tree.insert(1);
	tree.insert(7);
	tree.insert(4);
	tree.insert(8);
	tree.insert(3);
	tree.insert(6);
	tree.insert(5);

	cout << "{ ";
	tree.preorderTraversal(tree.getRoot());
	cout << " }" << endl << endl;
	cout << "{ ";
	tree.inorderTraversal(tree.getRoot());
	cout << " }" << endl << endl;
	cout << "{ ";
	tree.postorderTraversal(tree.getRoot());
	cout << " }" << endl << endl;
	

	
	return 0;
}