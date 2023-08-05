#include "stack.h"
#include "Node.h"
#include <iostream>
using namespace std;
stack::stack()
{
	Top = NULL;
}
bool stack::isEmptyStack()
{
	return (Top == NULL);
}
void stack::push(int item)
{
	if (isEmptyStack())
	{
		Node* newNode = new Node();
		newNode->data = item;
		newNode->next = NULL;
		Top = newNode;
		
	}
	else
	{
		Node* newNode = new Node();
		newNode->data = item;
		newNode->next = Top;
		Top = newNode;
	}
}
void stack::display()
{
	Node* temp;
	temp = Top;
	while (temp !=NULL)
	{
		cout << temp->data << "" << endl;
		temp = temp->next;
	}
	
}
void stack::pop()
{
	int item;
	Node* deleteptr = Top;
	item = Top->data;
	Top = Top->next;
	delete deleteptr;
	cout <<item <<"	Element Poped Successfully ! \n";

}
int stack::topElement()
{
	return Top->data;
}
int stack::sizeOfStack()
{
	int count = 0;
	Node* temp;
	temp = Top;
	while (temp != NULL)
	{
		count++;
		temp = temp->next;
	}
	return count;
}
bool stack::isFound(int item)
{
	bool found = false;
	Node* temp;
	temp = Top;
	while (temp != NULL)
	{
		if (Top->data == item)
			found= true;
		temp = temp->next;
	}
	return found;
}
