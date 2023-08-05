#include "Node.h"
class BST
{
public:
	Node *root;
	BST();
	
	Node* insert(Node* pNode, int item);
	void insert(int item);
	void preOrder(Node* pNode);
	void inOrder(Node* pNode);
	void postOrder(Node* pNode);
	Node* search(Node* pNode, int key);
	bool search(int key);
	Node* findMin(Node* pNode);
	Node* findMax(Node* pNode);
	Node* Delete(Node* pNode, int key);
};

