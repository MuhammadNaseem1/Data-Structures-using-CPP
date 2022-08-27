#include<iostream>
using namespace std;

struct stack{
	int pushtop,maxsize;
	int *arr;
	stack()
	{
		maxsize=4;
		arr=new int[maxsize];
		pushtop=0;
	}
	bool empty(){
		if(pushtop==0)
		return true;
		else
		return false;
	}
void push(int x)
{

		arr[pushtop]=x;
		pushtop++;
	
}
void display()
{
	int count=0;
	for(int i=pushtop-1;i>=0;i--)
	{
		count++;
		cout<<arr[i]<<" ";
		
	}
	cout<<endl;
	cout<<"number of elements in array are "<<count;
}
void pop()
{
	pushtop--;
}
char top()
{
	return arr[pushtop-1];
}

bool balancedParenthesis(string str){
	
//	char x;
    
	for(int i=0;i<str.length();i++)
	{
		if(str[i]=='(' || str[i]=='{' || str[i]=='['){
			push(str[i]);
	     //	continue;
		}
else if(str[i]==')' || str[i]==']' || str[i]=='}')
	switch(str[i])
	{
		case ')':
			if(top()=='{' || top()=='[')
			return false;
			else
			pop();
			break;
		case '}':
		     if(top()=='(' || top()=='[')
		     return false;
		     	else
			pop();
		     break;
		case ']':      
			 if(top()=='{' || top()=='(')
			 return false;
			 	else
			pop();
			 break;
			
	}
}
return empty();
}

int postfix(string str)
{
	for(int i=0;i<str.length();i++)
	{
		if(str[i]=='+')
		{
			push(str[i]);
		}
		else if(str[i]=='/')
		{
			push(str[i]);
			
		}
		else if(str[i]=='-')
		{
			push(str[i]);
			pop(str[i]=='/');
			pop(str[i]=='+');
		}
		else if(str[i]=='*')
		{
			push(str[i]);
			pop(str[i]);
			pop(str[i]=='-');
		}
		else
		{
		
		break;
	}
	cout<str[i];
	}
	
	
}
};




int main()
{
	stack obj;
/*	int n;
	for(int i=0;i<4;i++)
	{
		cout<<"enter the "<<i+1<<"th number"<<endl;
		cin>>n;
		obj.push(n);
	}
	obj.display();
	cout<<endl;
	//	obj.deletestack();
		cout<<endl;
//	obj.display();
	obj.push(1);
     obj.push(2);
	obj.push(3);
	obj.push(4);
	string str="[][{()}]";
	
if(obj.balancedParenthesis(str))
cout<<"string is balanced"<<endl;
else
cout<<"unbalance"<<endl;
*/
string s="2+5/5-3*5";
obj.postfix(s);
	
return 0;
}
