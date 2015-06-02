#include "BinaryTree.h"
#include <iostream>
using namespace std;

BinaryTree::BinaryTree()
{
	root = NULL;
}

BinaryTree::~BinaryTree(){}

nodeptr BinaryTree::getRoot()
{
	return root;
}

void BinaryTree::insert(int num)
{	

	if (root == NULL)
	{	
		root = new Node();
		root->data = num;
		root->left = root->right = NULL;
		
		return;
	}

	insert(root, num);

}

void BinaryTree::insert(nodeptr node, int num)
{
	if (num < node->data)
	{
		if (node->left != NULL)
		{
			insert(node->left, num);
		}
		else
		{
			node->left = new Node();
			node->left->data = num;
			node->left->left = NULL;
			node->left->right = NULL;
		}
	}
	else
	{
		if (node->right != NULL)
		{
			insert(node->right, num);
		}
		else
		{
			node->right = new Node();
			node->right->data = num;
			node->right->left = NULL;
			node->right->right = NULL;
		}
		
	}
}

void BinaryTree::preorderTraversal(nodeptr node)
{
	if (node == NULL)
	{
		return;
	}

	cout << node->data << " ";
	preorderTraversal(node->left);
	preorderTraversal(node->right);
}

void BinaryTree::inorderTraversal(nodeptr node)
{
	if (node == NULL)
	{
		return;
	}

	inorderTraversal(node->left);
	cout << node->data << " ";
	inorderTraversal(node->right);
}

void BinaryTree::postorderTraversal(nodeptr node)
{
	if (node == NULL)
	{
		return;
	}

	postorderTraversal(node->left);
	postorderTraversal(node->right);
	cout << node->data << " ";
}

nodeptr BinaryTree::search(int num)
{
	nodeptr tmp = root;

	while (tmp != NULL)
	{
		if (num < tmp->data)
		{
			tmp = tmp->left;
		}
		else if (num > tmp->data)
		{
			tmp = tmp->right;
		}
		else if (tmp->data == num)
		{
			return tmp;
		}
	}

	return NULL;
}