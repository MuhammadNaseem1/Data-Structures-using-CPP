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
				tail->next=head;
				head->prev=tail;
			}
			else
			{
				newNode->next=head;
				head->prev=newNode;
				tail->next=newNode;
				newNode->prev=tail;
				head=newNode;
			}
		}
		void Delete()
		{
			Node *curNode=head;
			if(head==curNode)
			{
				head=curNode->next;
				curNode->next->prev=tail;
				tail->next=curNode->next;
				delete curNode;
			}
		}
		void print()
		{
			Node *curNode=head;
			while(curNode)
			{
				cout<<curNode->data<<" ";
				curNode=curNode->next;
				if(curNode==head)
				 break;
			}
			cout<<endl;
		}
};
int main()
{
	list obj;
	obj.insert(8);
	obj.insert(1);
	obj.insert(5);
	obj.insert(3);
	obj.insert(8);
	obj.insert(7);
	obj.print();
	obj.Delete();
	obj.print();
}
