#ifndef TREE_NODE_H
#define TREE_NODE_H

class TreeNode {
private:
	int value;
	TreeNode* left;
	TreeNode* right;

public:
	TreeNode(int value);
	~TreeNode();
	int getValue(){ return this->value; }
	int setValue(int value){ this->value = value; }
	void setLeft(TreeNode* left){this->left = left; }
	TreeNode* getLeft(){ return this->left; }
	void setRight(TreeNode* right){this->right = right; }
	TreeNode* getRight(){ return this->right; }
};

#endif
