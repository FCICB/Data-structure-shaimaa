#include "Node.h"
class Queue
{
public:
	Node* front;
	Node* rear;
	Queue();
	bool isEmpty();
	void Enqueue(int item);
	void displey();
	void Dequeue();
	bool isFound(int Item);
	int Size();
	void Clear();
};

