#include "Node.h"
#include "BST.h"
#include <cstddef>
#include <iostream>
using namespace std;
BST::BST()
{
	root = NULL;
}

Node* BST::insert(Node* pNode, int item)
{
	if (pNode == NULL)
	{
		Node* newNode = new Node();
		newNode->data = item;
		pNode = newNode;

	}
	else if (item < pNode->data)
	{

		pNode->leftLink = insert(pNode->leftLink, item);
	}
	else
		pNode->rightLink = insert(pNode->rightLink, item);
	return pNode;
}

void BST::insert(int item)
{
	root = insert(root, item);
}

void BST::preOrder(Node* pNode)
{
	if (pNode == NULL)
		return;
	cout << pNode->data << "\t";
	preOrder(pNode->leftLink);
	preOrder(pNode->rightLink);
	

}

void BST::inOrder(Node* pNode)
{
	if (pNode == NULL)
		return;
	inOrder(pNode->leftLink);
	cout << pNode->data << "\t";
	inOrder(pNode->rightLink);
	
}

void BST::postOrder(Node* pNode)
{
	if (pNode == NULL)
		return;
	postOrder(pNode->leftLink);
	postOrder(pNode->rightLink);
	cout << pNode->data << "\t" ;
	
}

Node* BST::search(Node* pNode, int key)
{
	if (pNode == NULL)
		return NULL;
	else if (pNode->data == key)
		return pNode;
	else if (key < pNode->data)
		return search(pNode->leftLink,key);
	else
		return search(pNode->rightLink,key);
}

bool BST::search(int key)
{
	Node* result = search(root, key);
	if (result == NULL)
		return false;
	else
		return true;
}

Node* BST::findMin(Node* pNode)
{
	if (pNode == NULL)
		return NULL;
	else if (pNode->leftLink == NULL)
		return pNode;
	else
		return findMin(pNode->leftLink);

}

Node* BST::findMax(Node* pNode)
{
	if (pNode == NULL)
		return NULL;
	else if (pNode->rightLink == NULL)
		return pNode;
	else
		return findMax(pNode->rightLink);
}

Node* BST::Delete(Node* pNode, int key)
{
	if (pNode == NULL)
		return NULL;
	if (key < pNode->data)
		pNode->leftLink = Delete(pNode->leftLink, key);
	else if (key > pNode->data)
		pNode->rightLink = Delete(pNode->rightLink, key);
	else
	{
		if (pNode->leftLink == NULL && pNode->rightLink == NULL)
			pNode = NULL;
		else if (pNode->leftLink != NULL && pNode->rightLink == NULL)
		{
			pNode->data = pNode->leftLink->data;
			delete pNode->leftLink;
			pNode->leftLink = NULL;
		}
		else if (pNode->leftLink == NULL && pNode->rightLink != NULL)
		{
			pNode->data = pNode->rightLink->data;
			delete pNode->rightLink;
			pNode->rightLink = NULL;
		}
		else
		{
			Node* pre = findMax(pNode->leftLink);

				pNode->data = pre->data;
				pNode->leftLink = Delete(pNode->leftLink, pre->data);
		}

	}
	return pNode;
}

