#include "Stack.h"
#include <iostream>
#include "Stack.h"

using namespace std;

int main()
{
	Stack stack(5);
	Stack s;
	
	s.push(1);
	s.push(2);
	s.push(3);
	s.push(4);
	s.push(5);
	
	stack.push(1);
	stack.push(2);
	stack.push(3);
	stack.push(4);
	stack.push(5);
	s.printElements();
	
	stack.printElements();
	cout << "Top Element : " << s.top() << endl;
	
	stack.pop();
	stack.pop();
	cout << "Poped Element : " << s.pop() << endl;
	
	cout << "Top Element : " << stack.top() << endl;
	stack.printElements();
	s.printElements();
	
	return 0;
}

}
