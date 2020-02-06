#include "BST.h"
#define MAX_SIZE 10

class ArrayBST : public BST {
	private:
		int element[MAX_SIZE];
	public:
		ArrayBST();
		~ArrayBST();
		
	void add(int data);
	void print();
	void preOrderTraversal(int currentIndex);
	bool search(int key);
	int getLeftChild(int currentIndex);
	int getRightChild(int currentIndex);
	int min();
	int max();
};
