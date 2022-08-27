#include<iostream>
using namespace std;
struct node{
	int data;
	node* next;
};

struct list{
	node *front;
    node *rear;

	int count;
	list()
	{
		front=NULL;
	 // rear=NULL;
		count=0;
	}
void insert(int val)
{
	
		node *nnode=new node;
			node *rear=front;
		nnode->data=val;
	if(front==NULL){

	front=nnode;
		nnode->next=NULL;
	
		count++;
	}
	else
	{
		while(rear->next!=NULL)
	{
		rear=rear->next;
	}
		rear->next=nnode;
		nnode->next=NULL;
		count++;
	}
}
	
void display(){
	node *c=front;
	int count;
	while(c)
	{
		cout<<c->data<<" ";
		c=c->next;
		count++;
	}
	cout<<endl;
	cout<<"number of elements in linked list are "<<count;
}
	
	
};

int main(){
	list obj;
	int n;
	for(int i=0;i<5;i++)
	{
		cout<<"enter the "<<i+1<<"th element"<<endl;
		cin>>n;
		obj.insert(n);
	}
	obj.display();

}
