#include "heap.h"
#include <iostream> // for printing heap


Heap::Heap(){
	this->count = 0;
}

Heap::~Heap(){

}

void Heap::swap(int idx1, int idx2){
	int temp = this->heap[idx1];
	this->heap[idx1] = this->heap[idx2];
	this->heap[idx2] = temp;
}

void Heap::add(int value){
	this->heap[count] = value;
	count++;

	minHeapify();
}

void Heap::minHeapify(){
	int i = count - 1;

	while(i > 0 && this->heap[i] < this->heap[(i-1)/2]){
		swap(i, (i-1)/2);
		i = (i-1)/2;
	}
}


void Heap::printHeap(){
	int i = 0;

	cout << "[MinHeap] ";
	for(i=0; i<count; i++){
		cout << " " << this->heap[i];
	}
	cout << endl;
}
