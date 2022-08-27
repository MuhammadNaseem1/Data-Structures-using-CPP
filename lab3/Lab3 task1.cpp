#include<iostream>
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
	int count=0;
	Node *head;
	list()
	{
		head=NULL;
	}
	void insertNode(int index,int val)
	{
		int currIndex=1;
		Node *curNode=head;
		Node *newNode=new Node;
		newNode->data=val;
		if(index>count||index<0)
		{
			cout<<"return index:"<<count<<endl;
		}
		else
		{
		while(curNode&&index>currIndex)
		{
			curNode=curNode->next;
			currIndex++;
		}
		if(head==NULL)
		{
			newNode->next=head;
			head=newNode;
		}
		else
		{
			newNode->next=curNode->next;
			curNode->next=newNode;
		}
    	count++;
    }
	}
	void Display()
		{
			int count=0;
			Node *cur=head;
			while(cur)
			{
				cout<<cur->data<<" "<<endl;
				cur=cur->next;
				count++;
			}
			cout<<"NUMBER OF NODES IN THE LIST:"<<count<<endl;
		}
		int FindNode(int val)
		{
			Node *curNode=head;
			int currIndex=1;
			while(curNode&&curNode->data!=val)
			{
				curNode=curNode->next;
				currIndex++;
			}
			if(curNode)
			{
				return currIndex;
			}
			else
			{
				return 0;
			}
		}
		void Delete(int val)
		{
			Node *preNode=NULL;
			Node *currNode=head;
			int currIndex=1;
			while(currNode&&currNode->data!=val)
			{
				preNode=currNode;
				currNode=currNode->next;
				currIndex++;
			}
			if(currNode)
			{
				if(preNode)
				{
					preNode->next=currNode->next;
					delete currNode;
				}
				else
				{
					head=currNode->next;
					delete currNode;
				}
			}
		}
};
int main()
{
	list obj;
    obj.insertNode(0,6);
    obj.insertNode(1,7);
    obj.insertNode(0,8);
    obj.insertNode(1,15);
    obj.insertNode(2,5);
    obj.insertNode(4,10);
    obj.Display();
    obj.FindNode(7);
    cout<<"Search Node:"<<obj.FindNode(7)<<endl;
    obj.Delete(10);
    obj.Display();
	
}
