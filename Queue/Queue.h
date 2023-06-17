class Node 
{
	public :
		int value;
		Node *next;
};

class Queue
{
	public :
		int *data;
		int frontIndex;
		int rearIndex;
		int size;
		Node *frontNode;
		Node *rearNode;
		
		Queue(int value);
		Queue();
		bool isEmpty();
		bool isFull();
		bool enqueue(int value);
		void enqueue(int value);
		int dequeue();
		int front();
		int rear();
		void printElement();
};
