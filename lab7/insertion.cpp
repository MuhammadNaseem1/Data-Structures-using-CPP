#include<iostream>
using namespace std;
struct node{
	int data;
	node *next;
};
struct graph{
	node *head;
	int *arr;
	int size;
	graph(){
		size=4;
	    arr=new int[size];
	    head=NULL;
	}
void insert(int n){
	node *curr;
	node *nnode=new node;
	nnode->data=n;
	nnode->next=NULL;
	if(!head){
		head=nnode;
		curr=nnode;
	}
	else{
		curr->next=nnode;
		curr=curr->next;
		
	}
}
void g(int vertice){
	int n; 
		for(int i=0;i<size;i++){
			arr[i]=vertice;
		cout<<"enter the number of the adjacents of "<<vertice<<endl;
		cin>>n;
		for(int j=0;j<n;j++){
			cin>>j;
			arr[vertice].insert(j);
			
		}
		
	}
}
};
int main(){
	
}
