#include<iostream>
using namespace std;
struct node{
	int data;
	node *next;
};
class list{
	node *head;
	list()
	{
		head==NULL;
	}
	void insert(int n,int index){
		int currIndex=1;
		node *currNode=head;
		node *tmp=new node;
		if(index==0){
			tmp->data=n;
			tmp->next=head;
			head=tmp;
		}
		else
		{
			tmp->next=currNode->next;
			currNode->next=tmp;
		}
	}
		void res()
		{
			while(index)
			cout<<tmp->data;
		}
	
};
int main()
{
	list obj;
	obj.insert(14,0);
	obj.insert(20,1);
	obj.insert(277,2);
	obj.insert(770,3);
	obj.res();

}
