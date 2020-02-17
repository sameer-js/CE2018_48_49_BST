#include"LinkedBST.h"
#include<iostream>

using namespace std;

node::node(){
    data=0;
    left=right=nullptr;
}

node::node(int value){
    data=value;
    left=right=nullptr;
}

node::~node(){}


LinkedBST::LinkedBST(){
}

LinkedBST::~LinkedBST(){}

void LinkedBST::add(int data){
}

void LinkedBST::preorderTraversal(){}

//bool LinkedBST::search(int data){}


void LinkedBST::add(node *root,int data){
if (root->data==0){
    root->data=data;
}else{
        if (data < root->data){
            if (!root->left){ 
                node *newnode=new node(data); 
                root->left=newnode;
            }
            else{
                add(root->left,data);
            }
        }
        else if (data > root->data){
            if (!root->right){ 
                node *newnode=new node(data); 
                root->right=newnode;
            }
            else{
                add(root->right,data);
            }
        }
    }
}

bool LinkedBST::search(node *root,int targetKey){
    if(root->data==0){
        cout<<"It is an empty tree"<<endl;
    }
    else{
        node *p=new node();
        p=root;
        while(p){
            if(targetKey>p->data){
                p=p->right;
            }
            else if(targetKey<p->data){
                p=p->left;
            }
            else if(targetKey==p->data){
                cout<<targetKey<<" is in the tree"<<endl;
                return 1;
                
            }
            else{
                cout<<targetKey<<" is not in the tree"<<endl;
                return 0;
            }
        }
    }
    cout<<targetKey<<" is not in the tree"<<endl;
    return 0;
}


void LinkedBST::preorderTraversal(node* root) { 
    if (!root) 
    return; 
  
    
    cout << root->data << "\t"; 
  
    
    preorderTraversal(root->left);  
  
    
    preorderTraversal(root->right); 
}  

int LinkedBST::min(){
	node *p=new node();
	p=&root;
	while(p->left!=NULL){
		p=p->left;	
	 }
	 return p->data;
 }
 
 int LinkedBST::max(){
	 node *p=new node();
	 p=&root;
	 while(p->right !=0){
	 p=p->right;
	}
	return p->data;
 }
 



int main(){
	LinkedBST tree1;

	tree1.add(&tree1.root,10);
	tree1.add(&tree1.root,20);
	tree1.add(&tree1.root,30);
	tree1.add(&tree1.root,40);
	tree1.add(&tree1.root,50);
	tree1.add(&tree1.root,60);
	cout<<"Preorder Traversal of the tree is"<<endl;
	tree1.preorderTraversal(&tree1.root);
	cout<<endl;
	
	cout<<"Minimum value is :"<<tree1.min();
	cout<<"\n";
	cout<<"Maximum value is :"<<tree1.max();
	
	int number;
	char character;
	search:
	cout<<"Enter a number you want to search in the tree"<<endl;
	cin>>number;
	tree1.search(&tree1.root,number);
	
}
