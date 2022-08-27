#include<iostream>
using namespace std;

struct node
{
	int data;
	node *back,*next;
	
};

struct list
{
  node *head,*prev;
  
  list()
  {
  	head=NULL;
  	prev=NULL;
	  }	
	  insert(int val)
	  {
	  	node *curr=head;
	  	node *nnode=new node;
	  	nnode->data=val;
	  	if(head==NULL)
	  	{
	  		nnode->next=NULL;
	  		nnode->back=NULL;
	  		head=nnode;
		  }
		  else
		  {
		  	while(curr->next!=NULL)
		  	{
		  		curr->back=prev;
		  		prev=curr;
		  			curr=curr->next;
			  }
			  if(curr->next==NULL){
			  	head->back=curr;
			  	curr->next=head;
			  	
			  }
			 
			nnode->next=NULL;
			nnode->back=curr;
		  curr->next=nnode;
		  
		  }
		   
	  }
	  void display()
	  {
	  	node* currr=head;
	  	while(currr)
	  	{
	  		cout<<currr->data<<" ";
	  		currr=currr->next;
		  }
	  }
};

int main()
{
	list obj;
	int n;
	for(int i=0;i<5;i++)
	{
	
	
	cin>>n;
	obj.insert(n);
}
obj.display();
}
