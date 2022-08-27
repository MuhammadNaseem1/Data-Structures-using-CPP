#include<iostream>
using namespace std;
int main(){
	int size=3;

	int *ptr=new int[size];
	int counter=0;
	             
	char alp;
	do
	{
		cout<<"enter a number"<<endl;
		cin>>ptr[counter++];
		cout<<"enter  y to continue"<<endl;
		cin>>alp;
		if(counter==size)
		{
			int *ptr2=new int[size*2];
			for(int j=0;j<size/2;j++)
			{
				ptr2[j]==ptr[counter];
			}
			delete []ptr;
			ptr2=ptr;
		}
	}
	while(alp=='y');
}
	
	
	
	
	
	

