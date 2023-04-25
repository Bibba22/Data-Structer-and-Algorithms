class Node{
	
	public:
		int     value; // data value
		Node    *next; // pointer untuk node selajutnya
		
		Node() { //constructor: sebuah method yang dipanggil pertama kali
		     next = NULL; 
		}
};

class Linkedlist {
	
	
	
	public:
		Node *head;
		Node *tail;
		
		void insertToHead(int);
		void insertToTail(int);
		void insertAfter(int, int); // (insert Node X, setelah NOde B) insertAfter(X, B)
		
		void deleteFromHead();
		void deleteFromTail();
		void deleteByValue(int);
		
		void printAll();
		
		Linkedlist(){
			head = tail = NULL
		}
			   	
};
