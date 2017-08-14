#include<iostream>
#include<cstdlib>
using namespace std;

typedef struct tree
{
	int data;
	struct tree *left,*right;
}tree;

int r=0,f=0;
tree *queue[10];
void enqueue(tree *node)
{
	queue[r++]=node;
}
void dequeue()
{
	f++;
}
tree *createnode(int val)
{
	tree *temp =(tree *)malloc(sizeof(tree));
	temp->data=val;
	temp->left=temp->right=NULL;

return temp;
}
void insert(tree *node, int val)
{	
	tree *ptr=createnode(val);
	
	if(node==NULL){
		node= ptr;
		enqueue(ptr);
		}
	else  if(node->left==NULL){
		node->left=ptr;
		enqueue(ptr);
		}
	else if(node->right==NULL){
		node->right=ptr;
		enqueue(ptr);
		}
	else
	{	
		dequeue();
		tree *temp=queue[f];
		insert(temp,val);
	}		
}
void inorder(tree *root)
{
	if(root!=NULL)
	{
		inorder(root->left);
		cout<<root->data<<" ";
		inorder(root->right);
	}
}
int height(tree *root)
{
	if(root==NULL)
		return 0;
	int l=height(root->left);
	int r=height(root->right);
	
	if(l>r) return l+1;
	
	return r+1;	
} 
void printgivenlevelorder(tree *root, int lev)
{
	if(root==NULL) return;
	if(lev==1) cout<<root->data<<endl;
	else
	{
		printgivenlevelorder(root->left,lev-1);
		printgivenlevelorder(root->right,lev-1);
	}
}
void printlevelorder(tree *root)
{
	for(int i=1; i<=height(root);i++)
	{
		printgivenlevelorder(root,i);
	}
}

int main()
{
	tree *root=NULL;
	for(int i=1;i<9;i++) 
	{	
		int x;
		cin>>x;
		insert(root,x);
	}
	cout<<"inorder traversal\n";
	inorder(root);
	cout<<"\n";
	printlevelorder(root);
	
return 0;	 
}
