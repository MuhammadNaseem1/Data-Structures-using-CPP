#include<iostream>
#include<cmath>
using namespace std;
class Node
{
	public:
		int data;
		Node *next;
};
class list
{
	public:
		Node *head;
		Node *tail;
		list()
		{
			head=NULL;
			tail=NULL;
		}
		void insert(int val)
		{
			Node *newNode=new Node;
			newNode->data=val;
			if(head==NULL)
			{
				head=newNode;
				tail=newNode;
				tail->next=head;
			}
			else if(tail->next==head)
			{
				tail->next=newNode;
				newNode->next=head;
				tail=newNode;
			}
		}
		void print()
		{
			int count=0;
			Node *curNode=head;
			while(curNode)
			{
				cout<<curNode->data<<" ";
				curNode=curNode->next;
				count++;
				if(curNode==head)
				{
					break;
				}
			}
		}
};
int main()
{
	list obj;
	int Num,count=0,Remain,Result;
	cout<<"Enter Number:";
	cin>>Num;
	for(int i=Num;i>0;i=i/10)
	  count++;
	while(Num>0)
	{
		Remain=pow(10,count-1);
		Result=Num/Remain;
		Num=Num%Remain;
		count--;
		obj.insert(Result);
	}
	obj.print();
}
