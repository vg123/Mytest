#include<iostream>
#include<cstring>
#include<stdlib.h>
#include<bits/stdc++.h>
typedef struct node
{
	void *data;
	struct node *next;
}node;

void push(node **head,void *val, size_t data_size)
{
	node *temp = (node *)malloc(sizeof(node));
	
	temp->data= malloc(data_size);
	temp->next=*head;
	
	for(int i=0;i<data_size ; i++)
	      *(char *)(temp->data+i) = *(char *)(val+i);
	*head=temp;    	      
}
void printList(node *h,void (*fptr)(void *))
{
	 while(h!=NULL)
	{
			(*fptr)(h->data);
			h=h->next;
	}
}
void printInt(void *n)
{
	cout<<*(int*)n;
	}
void printfloat(void *f)
{
	cout<<*(float * )f;
}	
int main()
{
node* start=NULL;
unsigned int_size = sizeof(int);
unsigned float_size = sizeof(float);
int arr[]={1,5,3,9,0,11};
float af[]={1.3,4.3,7.6,6.5,9.8};
for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++)
	push(&start,&arr[i],int_size);
printList(&start,printInt);
	start=NULL;
for(int i=0;i<sizeof(af)/sizeof(af[0]);i++)
	push(&start,&af[i],float_size);
printfloat(&start,printfloat);	

return 0;
}
