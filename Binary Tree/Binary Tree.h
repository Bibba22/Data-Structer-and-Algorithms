#include <iostream>
#include <string>
#include "Binary Tree.h"

using namespace std;

void BinaryTree::insert(int insertId){
	root = insertRecursive(root,insertId);
	
}
Node *BinaryTree::insertRecursive(Node *currentRoot,int insertId){
	
	if (currentRoot == NULL){
		currentRoot = new Node();
		currentRoot->id = insertId;
		return currentRoot;
	}
	if (insertId < currentRoot ->id){
		currentRoot->left = insertRecursive(currentRoot->left, insertId);
	}
	else if (insertId >  currentRoot->id){
		currentRoot->right = insertRecursive(currentRoot->right, insertId);
		
	}
	return currentRoot;
}
void BinaryTree::inOrder(){
	inOrderRecursive(root);
}
void BinaryTree::inOrderRecursive(Node *currentRoot){
	if(currentRoot != NULL){
		inOrderRecursive(currentRoot->left);
		cout<<currentRoot->id<<",";
		inOrderRecursive(currentRoot->right);
	}
	
}
