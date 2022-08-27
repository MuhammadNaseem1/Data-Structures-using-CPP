#include<iostream>
using namespace std;
class Node
{
	public:
		int data;
		Node *next,*prev;
};
class list
{
	public:
		Node *head,*tail;
		int count;
		list()
		{
			head=NULL;
			tail=NULL;
			count=0;
		}
		void insert(int x)
		{
			Node *newNode=new Node;
			newNode->data=x;
			if(!head)
			{
				newNode->prev=NULL;
				newNode->next=NULL;
				head=newNode;
				tail=newNode;
			}
			else if(head->data>=x)
			{
				newNode->next=head;
				head->prev=newNode;
				newNode->prev=NULL;
				head=newNode;
			}
			else if(x>=tail->data)
			{
				newNode->prev=tail;
				tail->next=newNode;
				newNode->next=NULL;
				tail=newNode;
			}
			else
			{
				Node *curNode=head,*TNode;
				while(curNode->data<x)
				{
					curNode=curNode->next;
				}
				TNode=curNode->prev;
				newNode->next=curNode;
				curNode->prev=newNode;
				newNode->prev=TNode;
				TNode->next=newNode;
			}
		}
		void printfwd()
		{
			Node *curNode=head;
			while(curNode)
			{
				cout<<curNode->data<<" ";
				curNode=curNode->next;
			}
		}
		printbck()
		{
		Node *curNode=tail;
			while(curNode)
			{
				cout<<curNode->data<<" ";
				curNode=curNode->prev;
			}	
		}
		void Delete(int x)
		{
			Node *curNode=head;
			Node *TNode=NULL;
			while(curNode->data!=x)
			{
				TNode=curNode;
				curNode=curNode->next;
			}
			if(head->data==x)
			{
				head=curNode->next;
				head->prev=NULL;
				delete curNode;
			}
			else
			{

				if(curNode==tail)
				{
					tail=curNode->prev;
					tail->next=NULL;
					delete curNode;
				}
				else
				{
     			    TNode->next=curNode->next;
    			    TNode->next->prev=TNode;
    			    delete curNode;
	    		}
	    		
	    }
		}
		int Search(int x)
		{
			Node *curNode=head;
			Node *TNode=NULL;
			while(curNode->data!=x)
			{
				curNode=curNode->next;
				TNode=curNode;
			if(curNode->data==x)
			{
				return true;
			}
		    if(curNode->data!=x)
			{
				return false;
			}
			curNode=curNode->next;
			}
		}
};
int main()
{
	list obj;
	int x;
	for(int i=0;i<5;i++)
	{
		cout<<"Enter Number:";
		cin>>x;
		obj.insert(x);
	}
	obj.printfwd();
		cout<<endl;
	obj.printbck();
	cout<<endl;
	cout<<"Enter value for delete:";
	cin>>x;
	obj.Delete(x);
	obj.printfwd();
	cout<<endl;
	cout<<"Enter value for searching data:";
	cin>>x;
	obj.Search(x);
	cout<<obj.Search(x);
}
