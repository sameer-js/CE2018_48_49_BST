#ifndef BST_h
#define BST_h

class BST{
	public:
		virtual void add(int data)=0;

		virtual void preOrderTraversal(int index)=0;
		virtual void inOrderTraversal(int index)=0;




		virtual int max()=0;
		virtual bool search(int data)=0;
		virtual int min()=0;
		virtual void deleteKey(int key)=0;
	
};
#endif
