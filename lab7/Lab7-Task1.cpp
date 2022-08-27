#include<iostream>
using namespace std;

struct Node
{
	int data;
	Node *next;	
};

class list
{
	Node *head;
	int counter;
	public:

	list()
	{
		head = NULL;
		counter=0;
	}
	void insert(int value)
	{
		Node *node = new Node;
		node->data = value;
		node->next = NULL;
		
		if(head==NULL)
		{
			head = node;
			counter++;
		}
		else
		{
			Node *cur = head;
			
			while(cur->next)
			{
				cur = cur->next;
			}
			cur->next = node;
		}
		
	}
	
	void print()
	{
		Node *temp=head;
		if(!head)
		cout<<"Graph is empty"<<endl;
		else
		{
			while(temp)
			{
			cout<<temp->data<<"->";
			temp = temp->next;
			}
			cout<<endl;
		}
		
	}
	
	void Destroy()
	{
		Node *temp=head;
		while(temp->next)
		{
			temp = head;
			head = head->next; 
			delete temp;
			
		}
	
		
	}
};
struct ArrayofList
{
	list *gpointer;
	int maxSize;
	int cursize;
	ArrayofList(int size)
	{
		maxSize = size;
		gpointer = new list[maxSize];
		cursize=0;
	}
	
	void InsertinGrapg(int index, int num)
	{
		gpointer[index].insert(num);
	}
	
	void PrintGrapgData()
	{
		if(maxSize==0)
		cout<<"Graph is empty"<<endl;
		
		else
		{
			cout<<"index 	Vertex"<<endl;
			for(int j=0; j<maxSize; j++)
		{
			cout<<j<<"	";
			gpointer[j].print();
		}
		}
		
	}
	
	void ClearData()
	{
		for(int index=0; index<maxSize; index++)
		{
			gpointer[index].Destroy();
			maxSize=0;
		}
	}
};
int main()
{
	ArrayofList obj(4);
	obj.InsertinGrapg(0,12);
	obj.InsertinGrapg(0,1);
	obj.InsertinGrapg(1,18);
	obj.InsertinGrapg(1,9);
	obj.InsertinGrapg(1,99);
	obj.InsertinGrapg(2,9);
	obj.InsertinGrapg(1,9);
	obj.InsertinGrapg(3,22);
	obj.PrintGrapgData();
	cout<<"Deallocating "<<endl;
	obj.ClearData();
	obj.PrintGrapgData();
	return 0;
}
