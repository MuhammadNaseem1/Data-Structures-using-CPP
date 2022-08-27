#include<iostream>
using namespace std;
struct linkedList
{
int data;
linkedList *next;
};
class List
{
public:
linkedList *head, *curr;
List()
{
head=NULL;
}
void insert(int x)
{
linkedList *newNode = new linkedList;
newNode->data=x;
newNode->next=NULL;

if(head==NULL)
{
head=newNode;
}
else
{
curr=head;
while(curr->next)
{
curr=curr->next;
}
curr->next=newNode;
}
}
void display()
{
linkedList *temp=head;
while(temp)
{
cout<<temp->data<<" ";
temp=temp->next;
}

}
void destroy()
{
linkedList *temp1=head , *curr;
while(temp1)
{
curr=temp1;
temp1=temp1->next;
head=temp1;
delete curr;

}
}
};

struct Node
{
int num;
List obj;
};
class  List1
{
Node *pointer;
int  i;
int maxsize;
public:

List1()
{
i = 0;
pointer= new Node[4];
}
void insert(int a)
{

pointer[i].num=a;
cout<<"Enter the size of linked list : ";
cin>>maxsize;
for(int j=0;j<maxsize;j++)
{
int num;
cin>>num;
pointer[i].obj.insert(num);     
}
i++;
}
void display()
{
for(int i=0;i<4;i++)
{       cout<<pointer[i].num<<" ";
pointer[i].obj.display();
cout<<endl;
}

}
};
int main()
{

List1 obj;
obj.insert(3);
obj.insert(2);
obj.insert(5);
obj.insert(4);
obj.display();


}

