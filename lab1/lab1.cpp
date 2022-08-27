/*#include<iostream>
#include<conio.h>
using namespace std;
int main(){
int i;
int temp[5];
int a[10]={1,2,3,4,5,6,7,8,9,10};
for( i=1;i<=10;i+=2)
{

	cout<<a[i];
}
for(int j=10;j>=0;j-=2)
{
	cout<<a[j];
}






getch();
}
*/
#include<iostream>
#include<conio.h>
using namespace std;
struct empinfo{
	string name,email;
	int id;
	string designation;
	void input(){
		cin>>id>>name>>email>>designation;
	}
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
