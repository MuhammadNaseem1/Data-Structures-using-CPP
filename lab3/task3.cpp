#include<iostream>
using namespace std;
struct node{
	
 string data;
	int data1,data2;
	node *next;
//	node()
//	{
//		next=NULL;
//	}
	
};
 class list{
 	node *head;
 	int count;
 	
 	public:
 	list()
 	{
 		head==NULL;

	 }
 void insertNode(string name,int age,int y,int index)
 {
 	int currindex=1;
 	node *currentNode=head;
 	node *temp=new node;
 	temp->data=name;
 	temp->data1=age;
 	temp->data2=y;
 	while(currentNode && currindex < index)
 	{
 		currentNode=currentNode->next;
 		currindex++;
	 }
	 if(head==NULL)
	 {
	 	temp->next=head;
	 	head=temp;
	 	
	 }
	 else
	 {
	 	temp->next=currentNode->next;
	 	currentNode->next=temp;
	 }
 }
 void display(){
 	node *current=head;
 	while(current)
 	{
	 
 	cout<<current->data<<"  "<<current->data1<<" "<<current->data2<<endl;
 	current=current->next;
	 }
 }
 void del(int x)
 {
 	node *prev=NULL;
 	node *currNode=head;
 	int currInd=1;
 	while(currNode && currNode->data1!=x)
 	{
 		currNode=currNode->next;
 		currInd++;
	 }
	 if(currNode)
	 {
	 	if(prev)
	 	{
	 		prev->next=currNode->next;
	 		delete currNode;
	 		
		 }
		 head=currNode->next;
		 delete currNode;
	 }
 }
 
 	
 	
 };
 int main()
 {
 	list obj;
 	obj.insertNode("umair",18,2019,0);
 	obj.insertNode("madan",19,2011,1);
 	obj.insertNode("maseeh",105,1987,2);
 	obj.insertNode("babar",95,2019,3);
 	obj.insertNode("zamir",115,2014,4);
    obj.insertNode("aamir",10,2000,5);
    
 	obj.display();
 	cout<<endl;
 	obj.del(1987);
    obj.display();
 	
 	return 0;
 }
