#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	char Message[12]={"Hello world"};
	int num;
	int n=0;

	while(n<=9){
			cin>>num;
		
		for(int i=1; i<=12; i++){
			cout<<char(Message[i]+num);
	}
	n++;
	}
}
