#include<iostream>
#include<fstream>
using namespace std;
struct node{
	int data;
	node *next;
};
struct list{
	node *head;
		int maxsize,gsize;
	int *arr;
	list(int size){
		head=NULL;
		maxsize=size;
		gsize=0;
		arr=new int[size];
	}
void insertLast(int val){
	node *curr;
	node *n=new node;
	n->data=val;
	n->next=NULL;
	if(!head){
		head=n;
		curr=head;
	}
	curr->next=n;
	curr=curr->next;
}
void insert(){

fstream infile;
char graphdata[50];
int  vertex;
int adjvertex;
cout<<"enter file name"<<endl;
cin>>graphdata;
cout<<endl;
infile.open(graphdata);
if(!infile){

cout<<"cannot ope file"<<endl;
return;
}
infile>>gsize;
for(int i=0;i<gsize;i++){
	infile>>vertex;
	infile>>adjvertex;
	while(adjvertex!=-999){
		arr[vertex].insertLast(adjvertex);
		infile>>adjvertex;
	}
}

infile.close();
}


};
int main(){
	list obj=new list[10];
}
