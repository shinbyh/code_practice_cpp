#ifndef BST_H
#define BST_H

#include "tree_node.h"

using namespace std;

class BST {
private:
	TreeNode* root;

public:
	BST(TreeNode* root);
	~BST();
	inline TreeNode* getRoot(){ return this->root; }
	void insert(int value);
	void insertNode(TreeNode* current, int value);

	// Finding
	bool contains(TreeNode* current, int value);

	// Traversal algorithms
	void preorder(TreeNode* current);
	void postorder(TreeNode* current);
	void inorder(TreeNode* current);
	void bfs(TreeNode* current);

	static void printBST(BST* bst);
};


#endif
