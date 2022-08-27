#include<iostream>
using namespace std;
class Node
{
	public:
		int data;
		Node *link;
		Node()
		{
			link=NULL;
		}
};
class list
{
	int total;
	public:
		Node *head;
		list()
		{
			head=NULL;
			total=1;
		}
		 void insertL(int data)
	{
		Node *newNode = new Node;
		newNode->data = data;
		newNode->link = NULL;
		if(head==NULL)
		{
			head = newNode;
			total++;
		}
		else
		{
			Node *temp = head;
			while(temp->link!=NULL)
			{
				temp = temp->link;
			}
		temp->link = newNode;
		total++;
		}

	}
		void set_tail(Node *&tail)
	{
		Node *temp = head;
		while(temp->link!=NULL)
		{
			temp = temp->link;
		}
		temp->link = tail;
		tail = NULL;
	}
	int print()
	{
		Node *p = head;
		cout<<"List is "<<endl;
		int count =0;
		while(p!=NULL)
		{
			cout<<p->data<<" ";
			p = p->link;
			count++;
		}
		cout<<endl;
		return count;
	}
		
};
int main()
{
	list list1,list2;
	list1.insertL(3);
	list1.insertL(4);
	list1.insertL(5);
	
	list2.insertL(6);
	list2.insertL(7);
	list2.insertL(8);
	
	list1.set_tail(list2.head);
	list1.print();
}
