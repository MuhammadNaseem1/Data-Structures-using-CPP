#include<iostream>
using namespace std;
//template<class type>
struct que{
	
	
	int size,count;
	int *queue;
	int rear,front;
	que()
	{
		size=10;
		queue=new int[size];
		rear=-1;
		front=-1;
		count=0;
	}

	void insert(int x)
	{
		   if(front==-1)
		   {
	
		   	queue[++rear]=x;
		   	front=rear;
		   	count++;
		   	
			}
			else
			{
				queue[++rear]=x;
				count++;
				}	
		} 
	
	void display()
	{
		for(int i=front;i<=rear;i++)
		{
			cout<<queue[i]<<" ";
		}
		cout<<endl;
	}
	
	
	void pushFront(int data,int arr[6])
	{
		int a[7];
		for(int i=0;i<6;i++)
		{
			if(i==0)
			a[i]=data;
			else
			{
				a[i]=arr[i-1];
			}
		}
		cout<<endl;
		for(int j=0;j<5;j++)
		{
			cout<<a[j]<<" ";
		}
	}	
	   void pushRear(int data,int arr[10])
	   {
	   	int ptr=front;
	   for(int i=0;i<10;i++)
	   {
	   	if(arr[i]==NULL)
	   	{
	   		arr[i]=data;
		   }
		   else
		   {
		   	
		   }
	   }
	   cout<<endl;
	   for(int j=0;j<6;j++)
	   {
	   	cout<<arr[j]<<" ";
	   }
	   }
	void delque(){
		if(count==0)
		{
		
		cout<<"que is null"<<endl;
	}
		else 
		{
		front++;
		}
	} 

	void showfront(){
		if(count=0)
		cout<<"que is empty"<<endl;
		else
		cout<<"element at the front is "<<queue[front]<<endl;
	}
	void showbaback()
	{
			if(count=0){
			
		cout<<"que is empty"<<endl;
	}
		else
		cout<<"element at the back is "<<queue[rear]<<endl;
	}

~que()
{
	delete []queue;
	}	
};





int main(){
	que obj;

		obj.insert(1);
		obj.insert(2);
	    obj.insert(3);
		obj.insert(4);
			obj.display();
		obj.pushFront(0,obj.queue);
	obj.pushRear(6,obj.queue);
//	obj.delque();
   // obj.showfront();	
    //obj.showbaback();
     	
     	}
