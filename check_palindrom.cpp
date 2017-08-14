#include<iostream>
using namespace std;

typedef struct node
{
	int data;
	struct node *next;
}node;

node *head=NULL;

void push(int val,node *head)
{
	node *t = (node *)malloc(sizeof(node));
	
	t->data=val;
	t->next= head;
	head = t;
}
bool detectloop(node *head)
{
	node *slow=head,*fast=head;
	while(slow && fast && fast->next)
	{
		slow=slow->next;
		fast= fast->next->next;
	}
	if(slow == fast )
	{
		return true;
	}
	return false;
}
int main()
{
	
}
