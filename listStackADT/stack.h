#include "Node.h"
class stack
{

	
public:
	Node* Top;
	stack();
	void push(int item);
	void pop();
	void display();
	bool isEmptyStack();
	int topElement();
	int sizeOfStack();
	bool isFound(int item);


};

