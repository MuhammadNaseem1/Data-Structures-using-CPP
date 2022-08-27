#include<iostream>
#include<conio.h>
using namespace std;
class empinfo{
	string name,email;
	int id;
	string designation;
	public:
	void input(){
		cin>>id>>name>>email>>designation;
	}
	public:
	void display(){
	cout<<id<<" "<<name<<" "<<email<<" "<<designation<<endl;
	}

};
int main(){
	empinfo obj[4];
	for(int i=0;i<4;i++){
		obj[i].input();
		obj[i].display();
	
		
}
}
