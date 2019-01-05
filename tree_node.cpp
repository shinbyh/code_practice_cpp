#include "tree_node.h"

TreeNode::TreeNode(int value){
	this->value = value;
	this->left = 0;
	this->right = 0;
}

TreeNode::~TreeNode(){
	if(this->left){
		delete this->left;
	}
	if(this->right){
		delete this->right;
	}
}
