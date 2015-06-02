#ifndef BINARY_TREE
#define BINARY_TREE

struct Node
{
	int data;
	
	Node* left;
	Node* right;
};

typedef Node* nodeptr;

class BinaryTree
{
public:
	BinaryTree();
	~BinaryTree();

	void insert(int num);
	void insert(nodeptr node, int num);
	nodeptr search(int num);
	nodeptr getRoot();
	void preorderTraversal(nodeptr node);
	void inorderTraversal(nodeptr node);
	void postorderTraversal(nodeptr node);
	
private:
	nodeptr root;
};




#endif