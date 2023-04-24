#include <iostream>
#include "LinkedList.h"
using namespace std;

int main(int argc, char** argv) {
	
	Linkedlist list1;
	
	List1.insertToHead(10);
	List1.insertToHead(20);
	List1.insertToHead(30);
	List1.insertToHead(50);
	
	cout << "head: " << list1.head->value << endl;
	cout << "tail: " << list1.tail->value << endl;
	cout << list1.head->next->next->value << endl;
	
	list1.printAll();
	
	Linkedlist list2;
	list2.insertToHead(24);
	list2.insertToHead(30);
	
	list2.printAll();
	
	return 0;
}
