#include "bst.h"
#include <iostream>
#include <queue> // for bfs

BST::BST(TreeNode* root){
	this->root = root;
}

BST::~BST(){
	if(this->root){
		delete this->root;
	}
}

void BST::insert(int value){
	// if root is null, add TreeNode(value) and connect to root.
	// else, insertNode(root, value)
	if(this->root == 0){
		TreeNode* node = new TreeNode(value);
		this->root = node;
	}
	else {
		insertNode(this->root, value);
	}

}

void BST::insertNode(TreeNode* current, int value){
	if(value < current->getValue() ){
		if(current->getLeft() == 0){
			current->setLeft(new TreeNode(value));
		} else {
			insertNode(current->getLeft(), value);
		}
	}
	else {
		if(current->getRight() == 0){
			current->setRight(new TreeNode(value));
		} else {
			insertNode(current->getRight(), value);
		}
	}
}

bool BST::contains(TreeNode* current, int value){
	if(!current) return false;
	
	if(current->getValue() == value) return true;

	if(value >= current->getValue()){
		// go to right
		return contains(current->getRight(), value);
	} else {
		// go to left
		return contains(current->getLeft(), value);
	}
}

void BST::preorder(TreeNode* current){
	if(current == 0){
		return;
	} else {
		cout << " " << current->getValue();
		preorder(current->getLeft());
		preorder(current->getRight());
	}
}

void BST::postorder(TreeNode* current){
	if(current == 0){
		return;
	} else {
		postorder(current->getLeft());
		postorder(current->getRight());
		cout << " " << current->getValue();
	}
}

void BST::inorder(TreeNode* current){
	if(current == 0){
		return;
	} else {
		inorder(current->getLeft());
		cout << " " << current->getValue();
		inorder(current->getRight());
	}
}

void BST::bfs(TreeNode* current){
	queue<TreeNode*> q;

	while(current != 0){
		cout << " " << current->getValue();

		if(current->getLeft()){
			q.push(current->getLeft());
		}
		if(current->getRight()){
			q.push(current->getRight());
		}

		if(!q.empty()){
			current = q.front();
			q.pop();
		} else {
			current = 0;
		}
	}
}

void BST::printBST(BST* bst){
	TreeNode* root = bst->getRoot();
	if(root){
		cout << "Root: " << root->getValue() << endl;
		TreeNode* left = root->getLeft();
		TreeNode* right = root->getRight();
		if(left){
			cout << " - left: " << left->getValue() << endl;
		}
		if(right){
			cout << " - right: " << right->getValue() << endl;
		}

	} else {
		cout << "Tree is empty." << endl;
	}
}

