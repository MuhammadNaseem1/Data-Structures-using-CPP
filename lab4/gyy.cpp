#include<iostream>
using namespace std;
struct node{
	int data;
	node *link;
};
struct list
{
 node *head;
 list()
 {
 	head=NULL;
}
void insert(int x)
{
	node *curr=head;
	node *nnode=new node;
	nnode->data=x;
	nnode->link=NULL;;
	if(head!=NULL)
	{
		curr=head;
		while(curr->link!=NULL)
		{
			curr=curr->link;
		}
		curr->link=nnode;
	}
	else 
	{
		head=nnode;
	
	}
}
void print ()
{
	node *cr=head;
	while(cr)
	{
		cout<<cr->data<<" ";
		cr=cr->link;
	}
}
};

int main()
{
  int n;
  list obj;
  for(int i=0;i<5;i++)
  {
  	cin>>n;
  	obj.insert(n);
  }
  obj.print();
}
