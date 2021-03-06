#include <iostream>
#include <vector>
//#include "LinkedList.h"
//#include "Stack.h"
//#include "Queue.h"
//#include "BinaryTree.h"
//#include "HashTable.h"
#include "Graph.h"
using namespace std;


vector<int> merge(vector<int>left, vector<int>right)
{
	vector<int>result;

	while (left.size() > 0 || right.size() > 0)
	{
		if (left.size() > 0 && right.size() > 0)
		{
			if (left.front() <= right.front())
			{
				result.push_back(left.front());
				left.erase(left.begin());
			}
			else
			{
				result.push_back(right.front());
				right.erase(right.begin());
			}
		}
		else if (left.size() > 0)
		{
			for (int i = 0; i < left.size(); i++)
			{
				result.push_back(left[i]);
			}
			break;
		}
		else if (right.size() > 0)
		{
			for (int i = 0; i < right.size(); i++)
			{
				result.push_back(right[i]);
			}

			break;
		}
	}

	return result;
}

vector<int> mergeSort(vector<int>list)
{
	
	if (list.size() <= 1)
	{
		return list;
	}
	
	int mid = (list.size()+1) / 2.0;

	vector<int>left;
	vector<int>right;
	vector<int>result;
	
	for (int i = 0; i < mid; i++)
	{
		left.push_back(list[i]);		
	}

	for (int i = mid; i < list.size(); i++)
	{
		right.push_back(list[i]);
	}

	

	left = mergeSort(left);
	right = mergeSort(right);
	result = merge(left, right);

	return result;
}


int binarySearch(vector<int>list, int target)
{
	int left = 0;
	int right = list.size();

	while (left<right)
	{
		int mid = (left + right) / 2;

		if (list[mid] < target)
		{
			left = mid+1;
		}
		else if (list[mid] > target)
		{
			right = mid-1;
		}
		else if (list[mid] == target)
		{
			return mid;
		}
	}

	return -1;
}


int main()
{
	
	/*LinkedList list;
	
	for (int i = 0; i < 10; i++)
	{		
		list.push(i);
	}

	list.traverse();

	nodeptr node = list.search(5);	
	
	cout << node->data << endl << endl;*/

	
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


	/*BinaryTree tree;

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
	
	tree.destroy(tree.getRoot());*/

	/*HashTable hashTable;

	hashTable.addEntry("The Fallen by John Evans");
	hashTable.addEntry("The Ascension by John Evans");
	hashTable.addEntry("The Shining by Stephen King");
	hashTable.addEntry("The Hitchhiker's Guide to the Galaxy by Douglas Adams");

	cout<<hashTable.containsEntry("The Fallen by John Evans")<<endl<<endl;
	cout << hashTable.containsEntry("Ender's Game by Orson Scott Card") << endl << endl;*/

	/*vector<int>list = { 10, 1, 9, 2, 8, 3, 7, 4, 6, 5, 0, 10 };

	list=mergeSort(list);

	for (int i = 0; i < list.size(); i++)
	{
		cout << list[i] << " ";
	}

	cout << endl << endl;*/

	/*vector<int>list = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

	cout << binarySearch(list, 8) << endl << endl;
	cout << binarySearch(list, 42) << endl << endl;*/

	Graph g(4);

	g.addEdge(0, 1);
	g.addEdge(0, 2);
	g.addEdge(1, 2);
	g.addEdge(2, 0);
	g.addEdge(2, 3);
	g.addEdge(3, 3);

	g.BFS(2);
	cout << endl << endl;
	g.DFS(2);
	
	return 0;
}