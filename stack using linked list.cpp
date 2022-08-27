#include<iostream>
using namespace std;
struct node{
	int data;
	node* next;
};
struct stack{
	node *head,*curr;
	stack(){
		head=NULL;
		curr=NULL;
	}
void push(int val){
	node *curr=head;
	node *nn=new node;
	nn->next=NULL;
	if(head==NULL){
		nn->next=head;
		head=nn;
	}
	else{
		while(curr->next!=NULL){
			curr=curr->next;
		}
		nn->next=NULL;
		curr->next=NULL;
	}
}
void print(){
	node *c=curr;
	while(c)
	{
		cout<<c->data<<endl;
		c=c->next;
	 } 
}
int main(){
	stack obj;
	obj.push(1);
}
};
