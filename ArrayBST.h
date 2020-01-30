#include "BST.h"
#define MAX_SIZE 100

class ArrayBST : public BST
{
    public:
      void add(int data);
	  	void preOrderTraversal();
	    bool search(int data);
    private:
      int data[MAX_SIZE];
 }
