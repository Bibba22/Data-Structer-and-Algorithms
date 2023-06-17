#include <iostream>
#include <string>
#include "Binary Tree.h"

using namespace std;

int main(int argc, char**argv){
	
	BinaryTree bin;
	
	bin.insert(10);
	bin.insert(5);
	bin.insert(2);
	bin.insert(7);
	bin.insert(15);
	bin.insert(20);
	bin.insert(17);
	bin.insert(25);
	
	bin.insert(30);
	
	bin.inOrder();	
	return 0;
}
