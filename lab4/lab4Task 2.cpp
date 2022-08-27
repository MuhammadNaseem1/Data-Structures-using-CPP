#include<iostream>
using namespace std;
class Node
{
	public:
		char name;
		Node *next;
		Node *prev;
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
		void insert(int name)
		{
			Node *newNode=new Node;
			newNode->name=name;
			if(head==NULL)
			{
				head=newNode;
				tail=newNode;
	        	newNode->next=NULL;
	        	newNode->prev=NULL;
	        	count++;
			}
			else if(tail->next==NULL)
			{
				tail->next=newNode;
				newNode->prev=tail;
				newNode->next=NULL;
				tail=newNode;
				count++;
			}
		}
		bool plaindrome()
		{
			Node *first=head;
			Node * last=tail;
			while(first)
			{
				if(first->name!=last->name)
				{
					return false;
				}
				first=first->next;
				last=last->prev;
				
	    }
			return true;
		}
		void print()
		{
			Node *curNode=head;
			while(curNode)
			{
				cout<<curNode->name<<" ";
				curNode=curNode->next;
			}
			cout<<endl;
		}
};
int main()
{
	list obj;
	char name;
	obj.insert('m');
	obj.insert('0');
	obj.insert('0');
	obj.insert('0');
	obj.insert('m');
	obj.print();
	obj.plaindrome();
	cout<<obj.plaindrome();
	
}
