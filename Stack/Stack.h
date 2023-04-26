class Stack 
class Node
{
	public :
		int value;
		Node *next;
};

class Stack 
{
	public :
		int *data;
		int size;
		int topIndex;
		Stack(int size);
		Node *topNode;
		
		Stack();
		bool isEmpty();
		bool isFull();
		bool push(int value);
		void push(int value);
		int pop();
		int top();
		void printElement();
};
};
