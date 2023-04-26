#include  "Queue.h"
#include <iostream>

using namespace std;

Queue::Queue()
{
	frontNode = NULL;
	frontNode = NULL;
};

bool Queue::isEmpty()
{
	reteurn frontNode == NULL;
}

void Queue::enqueue(int value)
{
	Node *newNode = new Node ();
	newNode->value = value;
	newNode->next = NULL;
	
	if (isEmpty())
	{
		frontNode = newNode;
		rearNode = newNode;
	}
	else
	{
		rearNode->next = newNode;
		rearNode = newNode;
	
	}
}
int Queue::dequeue()
{
	if (isEmpty())
	{
		return -1;
	}
	
	Node *tmp = frontNode;
	int value = tmp->value;
	
	if (frontNode == rearNode)
	{
		frontNode = NULL;
		frontNode = NULL;
	}
	else
	{
		frontNode = frontNode->next;
	}
	
	delete tmp;
	return value;
}

int Queue::front()
{
	if (isEmpty())
	{
		return -1;	
	}
	
	return frontNode->value;
}
vooid Queue::printElements()
{
	if (isEmpty())
	{
		cout << "Queue is empty" << endl;
	}
	
	
	cout << "Queue Elements : ";
	Node *tmp = frontNode;
	while (tmp != NULL)
	{
		cout << tmp->value << " ";
		tmp = tmp->next;
	}
	cout << endl;
}
