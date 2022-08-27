#include<iostream>
using namespace std;
void data(int id[],string name[],int age[])
{
	for(int i=0;i<3;i++)
	{
		cout<<"enter the id of "<<i+1<<"th person"<<endl;
		cin>>id[i];
		cout<<"enter the name of "<<i+1<<"th person"<<endl;
		cin>>name[i];
		cout<<"enter the age of "<<i+1<<"th person"<<endl;
        cin>>age[i];
	}
	
	}
void printData(int id[],string name[],int age[])
{
   	for(int j=0;j<3;j++)
	{
		cout<<id[j]<<" "<<name[j]<<" "<<age[j]<<endl;
	}
}
void deleteData(int id[],string name[],int age[])
{
	for(int i=1;i<=3;i++)
	{
		if(id[i]==1 && name[i]=="naseem" && age[i]==19)
		{
			continue;
		}
	}
}

int main()

{
	
	string name[3];
	int id[3];
	int age[3];
	data(id,name,age);
	printData(id,name,age);
	deleteData(id,name,age);

printData(id,name,age);
	
}
