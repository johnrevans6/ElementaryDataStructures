#ifndef QUEUE
#define QUEUE

struct Node{

	int data;
	Node* next;
};

typedef Node* nodeptr;

class Queue
{
public:
	Queue();
	~Queue();

	void push(int num);
	nodeptr pop();
	int front();
	bool isempty();

private:
	nodeptr head;
	nodeptr tail;
};

#endif