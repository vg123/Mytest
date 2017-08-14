#include<iostream>
#include<stdlib.h>
using namespace std;

typedef struct tree
{
	int data;
	struct tree *left, *right;
}tree;
int f=0;r=0;
tree *root;
tree *queue[100];
void enqueue(tree *)
{
	queue[r++]=tree;
}
void dequeue()
{
	f++;
}
tree * makenode(int data)
{
	tree *temp= (tree *)malloc(sizeof(tree));
	if(temp!=NULL)
	{
		temp->data=data;
		temp->left=temp->right=NULL;
	}
return temp;	
}
void maketree(tree *node, tree *root)
{
	enqueue(node);
	if(root==NULL)	{root=node; return ;}
	else
	{
		tree *temp=queue[f];
		if(temp->left==NULL) temp->left=node;
		else if(temp->right==NULL) temp->right=node;
		else
		{
			dequeue();
			temp=queue[f];
			maketree(node, temp);
		}
	}
}
int treeheight(tree *node)
{
	if(node==NULL) return 0;
	
	int lhght=treeheight(node->left);
	int rhght=treeheight(node->right);
	
	if(lhght>rhght) return lhght+1;
	
	return rhght+1;
	 
}

int main()
{
	tree *root;
	root=makenode(1);
	root->left=makenode(2);
	root->right=makenode(3);
	root->left->left=makenode(4);
	root->left->right=makenode(5);
	root->left->left->left=makenode(9);
	cout<<treeheight(root)<<endl;
	
	return 0;
}
