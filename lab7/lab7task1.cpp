#include<iostream>
using namespace std;

struct node{
	int data;
	bool flag;
	node *next;
	
};


struct list{
	
		node *head;
		
			list(){
				head=NULL;
			}
	
			void insert(int vertice){
					
					node *Nn=new node;
					Nn->data=vertice;
					
					if(!head){
						Nn->next=head;
						head=Nn;
						head->flag=false;
					}
					else{
						
						
						
						node *curr=head;
						while(curr->next){
							curr=curr->next;
						}
						Nn->next=curr->next;
						curr->next=Nn;
					}
			}
			
		
};

struct graph{
	list *arr;
	int maxsize;
	int currsize;
	
		graph(int size){
			arr=new list[size];
			maxsize=size;
			currsize=0;
		}
		
			void createGraph(){
				
				int vertice,index;
				char adj;
		
			
				for(int i=0;i<maxsize;i++){
					cout<<"enter the vertice"<<endl;
					cin>>vertice;
					cout<<"enter the index"<<endl;
					cin>>index;
					arr[index].insert(vertice);
					currsize++;
				}
				
				for(int i=0;i<maxsize;i++){
				
					cout<<"are there adjencies to index["<<i<<"] press y"<<endl;
					cin>>adj;
					if(adj=='y'){
					
						while(adj=='y'){
							
							cout<<"which index"<<endl;
							cin>>index;
							arr[i].insert(arr[index].head->data);
							cout<<"are there more"<<endl;
							cin>>adj;
						}
						
					}else
						continue;
					
					
					
				}
				
				
		}
			
		
		void print(){
			int c=0;
			node *curr=arr[c].head;
			
			for(int i=0;i<maxsize;i++){
				if(curr->flag==false){
					cout<<curr->data<<endl;
					arr[c].head->flag=true;
					curr=curr->next;
					while(curr->data!=arr[c].head->data){
						
						c++;
					}
					curr=arr[c].head;
					
				}
				else{
						c=0;
					while(arr[c].head->flag==true){
						c++;
					}
					cout<<arr[c].head->data<<endl;
					 
					 
				}
			}
		}
	
		
		
		
		
		
		
		
		
		
		
		
		
};

int main(){
	graph obj(4);
	obj.createGraph(); 
	obj.print();
}
