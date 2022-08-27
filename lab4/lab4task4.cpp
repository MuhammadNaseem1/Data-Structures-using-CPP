#include<iostream>
using namespace std;
class Node
{
	public:
		int data;
		Node *next;
		Node *prev;
};
class list
{
	public:
		Node *head,*tail;
		list()
		{
			head=NULL;
			tail=NULL;
		}
		void insert(int x)
		{
			Node *newNode=new Node;
			newNode->data=x;
			if(head==NULL)
			{
				head=newNode;
				tail=newNode;
				newNode->next=NULL;
				newNode->prev=NULL;
			}
			else if(tail->next==NULL)
			{
				tail->next=newNode;
				newNode->prev=tail;
				newNode->next=NULL;
				tail=newNode;
			}
			else
			{
				cout<<"NULL";
			}
		}
		void print()
		{
			Node *curNode=head;
			while(curNode)
			{
				cout<<curNode->data<<" ";
				curNode=curNode->next;
			}
			cout<<endl;
		}
		void Delete()
		{
			Node *curNode=head;
			if(head==curNode)
			{
				head=curNode->next;
				curNode->next->prev=NULL;
				delete curNode;
			}
		}
		
};
int main()
{
	list obj;
	obj.insert(5);
	obj.insert(7);
	obj.insert(3);
	obj.insert(2);
	obj.insert(1);
	obj.insert(9);
	obj.print();
	obj.Delete();
	obj.print();
}
