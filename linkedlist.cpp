#include<bits/stdc++.h>
using namespace std;

typedef struct node
{
	int val;
	struct node *next;
}node;
node *last=NULL;

node *createnode(int a)
{
	node *temp=(node *)malloc(sizeof(node));
	temp->val=a;
	temp->next=NULL;
	
	return temp;
}
void push(node** head, node *new_node)
{
	if(*head==NULL)
	{
		*head=new_node;
		//new_node->next=NULL;
		last=new_node;
		return ;
	}
	new_node->next=*head;
	*head=new_node;
}
void afternode(node** xnode, node * new_node)
{
	if(*xnode==NULL)
	{
		cout<<"Error!...\n";
		return ;
	}
	new_node->next=(*xnode)->next;
	(*xnode)->next=new_node;
}
void append(node** head, node *new_node)
{
	if(*head==NULL)
	{
		*head=new_node;
		last=new_node;
	}
	else
	{
		last->next=new_node;
		last=new_node;
	}
	
}
void display(node** head)
{
	node *t= *head;
	while(t)
	{
		cout<<t->val<<"-->";
		t=t->next;
	}
	cout<<endl;
}
int length(node** head){
	int cnt=0;
	node *t=*head;
	while(t!=NULL)
	{
		cnt++;
		t=t->next;
	}
	
	return cnt;
}
void delete_node(node ** head,int key)
{
	node *t=*head,*tprev;
	while(t->val!=key && t!=NULL){
		tprev=t;
		t=t->next;
		}
	if(t==NULL) cout<<"NOT exit...\n ";
	else{
		tprev->next=t->next;
		t=NULL;
		free(t);
	} 	
}
void delete_pos(node** head, int pos)
{
	if(length(head)>=pos)
	{
		node *t=*head,*prev;
		while(pos-->1)
		{
			prev=t;
			t=t->next;
		}
		prev->next=t->next;
		free(t);
	}
	
}
void swapnode(node ** head, int x, int y)
{
	if(x==y) return ;
	int f=0,cnt=0;
	node *t=*head,*tt,*prev=NULL,*prev2=NULL;
	while( t!=NULL){
		if(t->val==x){
			cnt++;
		}
		if(t->val==y)
			cnt++;
		if(cnt>=2) {f=1;break;}	
		t=t->next;
		}
	//cout<<"cnt"<<cnt<<endl;	
	if(f==1)
	{
		t=*head;
		while(t->val!=x  ) 	
		{
			
			prev=t;
			t=t->next;
		}
		//cout<<"prev->data"<< prev->val <<endl;
		tt=*head;
		while(tt->val!=y)
		{
			prev2=tt;
			tt=tt->next;
		}
		if(prev!=NULL)
		   prev->next=tt;
		else 
		   *head=tt;
		if(prev2!=NULL)
		   prev2->next=t;
		else
		   *head=t;
		node *temp=t->next;
		t->next=tt->next;
		tt->next=temp;
	}
	else
	{
		cout<<"error...\n";
	}		
}
node * reverse(node **head)
{
	node *temp =*head;
	int i,k=0,len=length(head),arr[12];
	//cout<<"lec"<<len<<endl;
	while(temp)
	{
		arr[k++]=temp->val;
		temp=temp->next;
	}
	*head=NULL;
	for(i=0;i<k;i++)
	{
		push(head,createnode(arr[i]));
		
	}
return *head;	
}
void reverse2(node ** head)
{
	node *t,*prev,*nxt;
	prev=NULL;
	t=*head;
	while(t)
	{
		nxt=t->next;
		t->next=prev;
		prev=t;
		t=nxt;
	}
	*head=prev;
	
}
void REC_reverse(node **head)
{
	if(*head==NULL) return ;
	node *first,*rest;
	first=*head;
	rest=first->next;
	if(rest==NULL) return ;
	
        REC_reverse(&rest);
        first->next->next=first;
        first->next=NULL;
        
        *head=rest;	
}
node *merge(node **head1, node **head2)
{
	node *t1=*head1,*t2=*head2,*head=NULL;
	while(t1!=NULL && t2!=NULL)
	{
		if(t1->val>t2->val)
		{
			append(&head,createnode(t2->val));
			t2=t2->next;
		}	
		else
		{
			append(&head,createnode(t1->val));
			t1=t1->next;
		}
	}
	while(t1!=NULL)
	{
		append(&head,createnode(t1->val));
		t1=t1->next;
	}
	while(t2!=NULL)
	{
		append(&head,createnode(t2->val));
		t2=t2->next;
	}
	
return head;	
}

void reversebyk(node **head,int k)
{
	int cnt=k;
	node *tt=*head,*t1=*head,*prev=NULL,*next,*current=*head;
	while(cnt-- )
	{
		t1=t1->next;
	}
	while(k-- && current!=NULL)
	{	
		next=current->next;
		current->next=prev;
		prev=current;
		current=next;
	}
	*head=prev;
	tt->next=t1;
}
node *add(node **head1, node **head2)
{
	node *t1=*head1,*t2=*head2;
	node *t=NULL;
	int carry=0,temp=0;
	while(t1!=NULL || t2!=NULL)
	{
		temp=t1->val+t2->val+carry;
		append(&t,temp%10);
		carry=temp/10;
	}
	while(t1!=NULL)
	{
		temp=t1->val+carry;
		append(&t,temp%10);
		carry=temp/10;
	}
	while(t2!=NULL)
	{
		temp=t2->val+carry;
		append(&t,temp%10);
		carry=temp/10;
	}
return t;
}
int main()
{
	node *head=NULL,*head1=NULL;
	node *ptr1,*ptr2,*ad;
	int arr[]={11,9 ,5,3,1};
	for(int i=0;i<5;i++)
	{
		ptr1=createnode(arr[i]);
		ptr2=createnode(arr[i]+1);
		push(&head,ptr1);
		push(&head1,ptr2);
		//append(&head,ptr2);
	}
	//ptr1=createnode(109);
	//display(&head);
	//afternode(&last,ptr1);
	//display(&head);
	//cout<<"length"<<length(&head)<<endl;
	//delete_node(&head,200);
	//display(&head);
	//delete_pos(&head,3);
	//cout<<"swapped"<<endl;
	//swapnode(&head,111,11);
	//display(&head);
	//REC_reverse(&head);
	//reverse2(&head);
	//head=reverse(&head);
	display(&head);
	display(&head1);
	reversebyk(&head,5);
	display(&head);
node *headd=merge(&head1,&head);
	display(&headd);
	ad=add(&head1,&head);
	display(ad);
return 0;		
}
