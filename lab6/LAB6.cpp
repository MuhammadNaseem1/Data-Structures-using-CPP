#include<iostream>
using namespace std;
struct tree{
	int data;
	tree *llink,*rlink;
};
struct bintree{
	tree *root, *p,*q;
	int count,c;
	bintree(){
		root=NULL;
		p=NULL;
		q=NULL;
		c=0;
		
		count=0;
		//llink=NULL;
		//rlin=NULL;
	}
void insert(int val)
{
	tree *node=new tree;
	node->data=val;
	count++;
	node->llink=NULL;
	node->rlink=NULL;
	if(!root)
	{
		
	  root=node;
	  p=node;	
	}
	else
	{
		p=root;
		bool flag=true;
		while(flag)
		{
			if(p->data>node->data)
			{
			if(p->llink==NULL)
			{
				p->llink=node;
				flag=false;
				}	
				else
				{
				p=p->llink;	
				}
			}
			else
			{
				if(p->rlink==NULL)
				{
					p->rlink=node;
					flag=false;
				}
				else
				{
					p=p->rlink;
				}
			}
		}
	}
}
int display(tree *temp)
{
	if(temp!=NULL)
{
//		int coun t;
		
			display(temp->llink);
//			cout<<temp->data<<" ";
			
	        display(temp->rlink);


}
else{
	c++;
	return c;
}
//cout<<"number of elements in tree are "<<count<<endl;
}
void postorder(tree *temp)
{
	if(temp!=NULL)
{
		
	
	
	postorder(temp->llink);
	postorder(temp->rlink);
	cout<<temp->data<<" ";
}
}
void preorder(tree *temp)
{
	if(temp!=NULL)
{
		
	
	cout<<temp->data<<" ";
	preorder(temp->llink);
	preorder(temp->rlink);
}
}

void copytree(tree *&copiedtree,tree *othertreeroot){
	if(othertreeroot==NULL)
	copiedtree=NULL;
	else
	{
		copiedtree=new tree;
		copiedtree->data=othertreeroot->data;
		copytree(copiedtree->llink,othertreeroot->llink);
		copytree(copiedtree->rlink,othertreeroot->rlink);
	}
}
bool search(int val){
	bool found=false;
	bool flag=true;
	tree *curr;
	if(root==NULL)
	cout<<"tree empty"<<endl;
	
	else
	{
		curr=root;
		while(curr!=NULL && !found)
		{
			 if(root->data==val)
	found=true;
	//cout<<"found"<<endl;
		else	if(curr->data>val)
			{
				curr=curr->llink;
				if(curr->data==val)
				found=true;
			}
			else //(curr->data<val)
			
				curr=curr->rlink;
				if(curr->data==val){
					found=true;
				}
			
		}
		
		
	}
	 return found;
	
}
void min()
{
	tree *curr=root;
    while(curr->llink!=NULL)
    {
    	curr=curr->llink;
    	
	}
	cout<<"minimum is "<<curr->data;
}
void maxi()
{
	tree *curr=root;
	while(curr->rlink!=NULL)
	{
		curr=curr->rlink;
	}
	cout<<"max is "<<curr->data;
}
int height(tree *tem)
{
	if(tem==NULL)
	{
	
	return 0;
}
	else
	{
		return 1+max(height(tem->llink),height(tem->rlink));
	}
}
void destroy(tree* &p){
	if(p!=NULL){
		destroy(p->llink);
		destroy(p->rlink);
		delete p;
		p=NULL;
	}
}
void predecessor(int val){
	tree *curr=root;
	bool found=false;
	//
	if(root==NULL)
	{cout<<"tree is empty"<<endl;
	}
	else if(val==root->data)
	{
		cout<<"no predecessor exists"<<endl;
	}
	else
	{
		tree *tc=NULL;
		while(curr!=NULL)
		{
			if(curr->data>val)
			{
			
			tc=curr;
			curr=curr->llink;
			if(curr->data==val)
			{
				cout<<tc->data<<endl;
			}
			
	}
		else{
			tc=curr;
			curr=curr->rlink;
			if(curr->data==val)
			{
				cout<<tc->data;
			}
		}
		}
		
	}
}
	

};


int main(){
	bintree obj,obj2;
	obj.insert(10);
	obj.insert(5);
	obj.insert(15);
	obj.insert(1);
	obj.insert(30);
	obj.insert(13);
	obj.insert(40);
		cout<<"preorder"<<endl;
	obj.preorder(obj.root);
	cout<<endl;
	cout<<"inorder"<<endl;
		obj.display(obj.root);
		int a=obj.display(obj.root);
		cout<<"total number of nodes are "<<a<<endl;
cout<<endl;
cout<<"postorder"<<endl;
	obj.postorder(obj.root);
	cout<<endl;

	//cout<<endl;
//	obj.min();
//	cout<<endl;
//	obj.maxi();
//	cout<<endl;
//	cout<<"height of binary tree is "<<obj.height(obj.root);
	//cout<<endl;
	//obj2=obj;
	//obj.copytree(obj2.root,obj.root);
	//obj2.display(obj2.root);
	//cout<<endl;
//	obj.predecessor(30);
//cout<<obj.search(40);
//obj.destroy(obj.root);
//obj.display(obj.root);

		return 0;
}
