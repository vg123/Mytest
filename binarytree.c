#include<stdio.h>
#include<stdlib.h>

typedef struct tree{
 int data;
 struct tree *left,*right;
  }tree;
int f=-1,r=-1;
tree *q[10];
void insert(tree *, tree *);
void inorder(tree * );
int display(tree *,  int  , int);
void enqueue(tree *);
void dequeue();

 tree *create(int x)
 {
  tree *temp=(tree *)malloc(sizeof(tree));
  temp->left=temp->right=NULL;
  temp->data=x;
  
  return temp;
  }
  
 int main()
 {
  int choice,i,x;
  tree *root=NULL;
  while(1){
    printf("Enter your choice\n1.insert\n2.display\n3.display_level\n4.exit\n");
    scanf("%d",&choice);
    switch(choice){
     case 1:
      printf("Enter the data:");
      scanf("%d",&x);
      tree *new_node=create(x);
      insert(root,new_node);
      break;
    
     case 2:
      inorder(root);
      break;
     
  /*case 3:
     printf("Enter the value of node to know its level:");
     scanf("%d",&i);
     int j=display(root,i,1);
     if(j)
      printf("level of %d is %d\n",i,j);
     else
      printf("no such node\n"); 
     break;   
  */
   case 4:
    exit(1);
    }
  }
 } 
 void insert(tree *root,tree *n)
 { 
 
 
   if(root==NULL){
    root=n;
    enqueue(n); 
    return;
    }
   else{
      tree *node=q[f];
    if(node->left==NULL){
    enqueue(n); 
       node->left=n;
       return ;
       }
    else if(node->right==NULL)  
     {
     	enqueue(n); 
         node->right=n;
         return ;
      }
    else{
      dequeue();
        node=q[f];
        insert(node,n);
       }      
     }
}  
   
  void enqueue(tree *p)
  {
   q[++r]=p;
 }
 void dequeue()
 {
   ++f;
   }   
void inorder(tree *node)
{
 if(node){
  inorder(node->left);
  printf("%d ",node->data);
  inorder(node->right);
  }
}

/*int dispaly(tree *node,int val,int level)
{
 if(node==NULL)
  return 0;
 else if(node->data==val)
   return level; 
 int x=display(node->left,val,level+1);
  if(x)
   return x;
 x=display(node->right,val,level+1);
   return x;
  }     */
