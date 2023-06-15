#include "Node.h"
class LinkedList
{
public:
	Node *head;
	LinkedList();
	bool isEmpty();
	void insertFirst(int item);
	void display();
	int Size();
	bool isFound(int key);
	void insertBeforItem(int item, int newItem);
	void insertLast(int item);
	void deleteItem(int item);
	void distroy();
	~LinkedList();

};

