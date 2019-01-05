#include "bst.h"
#include "heap.h"
#include <iostream>

using namespace std;


void testBST(){
	BST* bst = new BST(new TreeNode(45));

	bst->insert(38);
	bst->insert(77);
	bst->insert(29);
	bst->insert(18);
	bst->insert(67);
	bst->insert(33);

	BST::printBST(bst);
	cout << "contains 29? " << bst->contains(bst->getRoot(), 29) << endl;
	cout << "contains 26? " << bst->contains(bst->getRoot(), 26) << endl;
	cout << "contains 79? " << bst->contains(bst->getRoot(), 79) << endl;
	cout << "contains 67? " << bst->contains(bst->getRoot(), 67) << endl;

	cout << "[preorder traversal] ";
	bst->preorder(bst->getRoot());
	cout << endl;

	cout << "[postorder traversal] ";
	bst->postorder(bst->getRoot());
	cout << endl;

	cout << "[inorder traversal] ";
	bst->inorder(bst->getRoot());
	cout << endl;

	cout << "[breadth first search] ";
	bst->bfs(bst->getRoot());
	cout << endl;

	delete bst;
}

void testHeap(){
	Heap heap;
	heap.add(3);
	heap.add(9);
	heap.add(12);
	heap.add(7);
	heap.add(1);
	heap.printHeap();
}


int main (int argc, char *argv[]){
	testHeap();
	return 0;
}
