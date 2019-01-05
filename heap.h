#ifndef _HEAP_H_
#define _HEAP_H_

#define MAX_HEAP_SIZE 10

using namespace std;

class Heap {
private:
	int heap[MAX_HEAP_SIZE];
	int count;

	void swap(int idx1, int idx2);

public:
	Heap();
	~Heap();
	void add(int value);
	void minHeapify();
	void printHeap();

};

#endif
