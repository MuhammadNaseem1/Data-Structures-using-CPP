#include<iostream>
using namespace std;
struct node{
	
	int data;
	node *next;
	
};
struct list{
	private:
		node *head;
		int count;
	public:
	list(){
		head==NULL;
		count=0;
	}	
	void printlist()
	{
		node *temp=head;
		for(int i=0;i<count;i++)
		{
			cout<<temp->data<<endl;
			temp=temp->next;
			
		}
	}
	
	bool insert(int c,int index)
	{
		node *curr;
		if(index>count || index<0)
		{
			cout<<"index exceeds,max index should be "<<count<<endl;
			
			return false;
		}
		else
		{
		node* nnode=new node;
			nnode->c;
			if(index==0)
			{
				nnode->next=head;
				head=nnode;
				count++;
			}
			else
			{
				curr=head;
			for(int i=1;i<index;i++)
			{
				curr=curr->next;
				}
				nnode->next=curr->next;
				curr->next=nnode	
			}
			
			count++;
			return true;
			
		}
	}
	
	
	
};
int main()
{
	list obj;
	obj.insert(15,0);
	obj.insert(35,1);
	obj.insert(25,3);
	obj.insert(55,0);
	obj.printlist();
	return 0;
}
