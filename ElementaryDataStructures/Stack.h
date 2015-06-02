#ifndef STACK
#define STACK

struct Node
{
	int data;
	Node* next;
};

typedef Node* nodeptr;

class Stack{

public:
	Stack();
	~Stack();
	void push(int num);
	nodeptr pop();
	int top();
	bool isempty();

private:
	nodeptr head;

};


#endif