#ifndef LINKED_LIST
#define LINKED_LIST

struct Node
{
	int data;
	Node* next;
};

typedef Node* nodeptr;

class LinkedList{

public:
	LinkedList();
	~LinkedList();	
	void push(int num);
	void traverse();	
	nodeptr search(int num);
	bool isempty();

private:
	nodeptr head;

};


#endif