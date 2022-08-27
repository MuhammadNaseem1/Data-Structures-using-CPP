#include<iostream>
using namespace std;
struct node
{
	int data;
	node *next,*prev;
};
struct list
{
   node *head,*tail;
   list()
   {
     head=NULL;
	 tail=NULL;	
   }	
   void insert(int x)
   {
   	node *curr=head;
   	 node *tmp=new node;
   	 tmp->data=x;
   	 if(!head)
   	 {
   	 	tmp->next=NULL;
   	 	tmp->prev=NULL;
   	 	head=tmp;
	}
	else if(head)
	{
		tmp->next=head->next;
		tmp->prev=head;
		head=tmp;
	}
	while(curr)
	{
		curr=curr->next;
	}
}

   void print()
   {
   	node *pr=head;
   	while(pr)
   	{
   		cout<<pr->data;
   		pr=pr->data;
	   }
   }
};

int main()
{
	list obj;
	int val;
	for(int i=0;i<3;i++)
	{
		cout<<"enter the number"<endl;
		cin>>val;
		obj.insert(val);
	}
	obj.print();
	
}
