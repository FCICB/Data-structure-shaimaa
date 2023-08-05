#include "Queue.h"
#include "Node.h"
#include <iostream>
using namespace std;
Queue::Queue()
{
	front = rear = NULL;
}
bool Queue::isEmpty()
{
	if (front == NULL && rear == NULL)
		return true;
	else
		return false;
}
void Queue::Enqueue(int item)
{
	Node* newNode = new Node();
	newNode->data = item;
	if (isEmpty())
	{
		front = rear = newNode;
	}
	else
	{
		rear->next = newNode;
		rear = newNode;
	}

}
void Queue::displey()
{
	Node* temp=front;
	while (temp != NULL)
	{
		cout << temp->data << endl;
		temp = temp->next;
	}
	
}
void Queue::Dequeue()
{
	if (isEmpty())
		cout << "Queue Is Empty ! \n";
	else if (front == rear)
	{
		delete front;
		front = rear = NULL;
	}
	else
	{
		Node* delptr = front;
		front = front->next;
		delete delptr;
	}
}
int Queue::Size()
{
	Node* temp = front;
	int count{};
	while (temp != NULL)
	{
		count++;
		temp = temp->next;
	}
	return count;
}
bool Queue::isFound(int key)
{
	bool found = false;
	Node* temp = front;
	while (temp != NULL)
	{
		if (temp->data == key)
			found = true;
		temp = temp->next;
	}
	return found;

}
void Queue::Clear()
{
	while (!isEmpty())
	{
		Dequeue();
	}
}