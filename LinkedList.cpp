#include <iostream>
using namespace std;
#include "LinkedList.h"
#include "Node.h"



LinkedList::LinkedList()
{
	head = NULL;
}
bool LinkedList::isEmpty()
{
	if (head == NULL)
		return true;
	else
		return false;
}
void LinkedList::insertFirst(int item)
{
	Node* newNode = new Node;
	newNode->info = item;
	if (isEmpty())
	{
		newNode->next = NULL;
		head = newNode;
	}
	else	
	{
		newNode->next = head;
		head = newNode;
	}
}
void LinkedList::display()
{
	
	Node* temp = head;
	while (temp !=NULL)
	{
		cout << temp->info << endl;
		temp = temp->next;
	}
}
int LinkedList::Size()
{
	Node* temp = head;
	int count{};
	while (temp != NULL)
	{
		count++;
		temp = temp->next;
	}
	return count;
}
bool LinkedList::isFound(int key)
{
	bool found = false;
	Node* temp = head;
	while (temp != NULL)
	{
		if (temp->info == key)
			found = true;
		temp = temp->next;
	}
	return found;

}
void LinkedList::insertBeforItem(int item, int newItem)
{
	if (isEmpty())
	{
		insertFirst(newItem);
		cout << "Item  Added Successfully \n";
	}
	else if (isFound(item))
	{

		Node* newNode = new Node();
		newNode->info = newItem;
		Node* temp = head;
		while (temp != NULL && temp->next->info != item)
		{
			temp = temp->next;

		}
		newNode->next = temp->next;
		temp->next = newNode;
		cout << "Item  Added Successfully \n";
	}
	else
		cout << "Item Not Found \n";
}
void LinkedList::insertLast(int item)
{
	if (isEmpty())
	{
		insertFirst(item);
		cout << "Item  Added Successfully \n";
	}
	else
	{
		Node* temp = head;
		Node* newNode = new Node();
		newNode->info = item;
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = newNode;
		newNode->next = NULL;
	}
}
void LinkedList::deleteItem(int item)
{
	if (isEmpty())
		cout << "List Is Empty , No Items To Delete \n";
	else
	{
		if(isFound(item))
		{
		 if (head->info == item)
		{
			Node* deletePtr = head;
			head = head->next;
			delete deletePtr;
			cout << " Item  Deleted \n";
		}
		else
		{
			Node* prev = NULL;
			Node* deletePtr = head;
			while (deletePtr->info != item)
			{
				prev = deletePtr;
				deletePtr = deletePtr->next;
			}
			prev->next = deletePtr->next;
			delete deletePtr;
			cout << " Item  Deleted \n";
		}
		}
	
	}
}

void LinkedList::distroy()
{
	Node* temp{};
	while (temp != NULL)
	{
		temp = head;
		head = head->next;
		delete temp;
	}
	head = NULL;
	cout << "List Distroyed \n";
}

LinkedList::~LinkedList()
{
	distroy();
}
