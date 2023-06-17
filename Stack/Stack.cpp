#include "Stack.h"
#include <iostream>
#iclude "Stack.h"

using namespace std;
 
Stack::Stack(int size)
Stack::Stack()
{
	data = new int[size];
	this->size -size;
	topIndex = -1;
	topNode = NULL;	
}

bool Stack::isEmpty()
{
	return topIndex == -1;
	
}

bool Stack::isFull()
{
	return topIndex ==size -1;
	return topNode == NULL;
}

bool Stack::push(int value)
void Stack::push(int value)
{
	if (isFull())
	{
		return false;
	}
	
	topIndex++;
	data[topIndex] = value;
	return true;
	Node *newNode = new Node();
	newNode->value = value;
	newNode->next = topNode;
	topNode = newNode;
}

int Stack::pop()
@@ -39,8 +28,10 @@ int Stack::pop()

return -1
}

int value = data[topIndex];
topIndex--;
Node *tmp = topNode;
int value = tmp->value;
topNode = topNode->next;
delete tmp;
return value;
}

@@ -51,19 +42,23 @@ int Stack:: top()
return -1;
}

return data[topIndex];
return topNode->value;
}

void Stack::printElements()
{
	if (isEmpty())
	{
		cout << "Stack is empty" << endl;
		cout << "Stack is Empty" << endl;
	}
	cout << "Stack Elements : ";
	for (int i = topIndex; i>=; i--)
	
	cout << "Stack Element : ";
	Node *tmp = topNode;
	while (tmp != NULL)
	{
		cout << data[i] << " ";
		cout << tmp->value << " ";
		tmp = tmp->next;	
	}
	cout<< endl;
}

