#include<iostream>
using namespace std;
class Book
{
	
	private:
	string name,book_athr,namePublisher,cms;
	int edition,ISSBN;
	bool isAvailable;
	public:
	Book(){
		isAvailable=true;
	}
	
	Book(string Name_bookFun,string Name_authorFun,string Name_pubFun,int ISSBNFun){
		name=Name_bookFun;
		book_athr=Name_authorFun;
		namePublisher=Name_pubFun;
		ISSBN=ISSBNFun;
		isAvailable=true;
	}
	Book(string Name_bookFun,string Name_authorFun,string Name_pubFun,int ISSBNFun,int EditionFun)
	{
			name=Name_bookFun;
		book_athr=Name_authorFun;
		namePublisher=Name_pubFun;
		ISSBN=ISSBNFun;
		edition=EditionFun;
	isAvailable=true;
	}
	void inputDetails(){
		cin>>name>>book_athr>>namePublisher>>ISSBN>>edition;
	}
    void dispDetails(string Name_bookFun)
		cin>>name_bookFun;
		if(name_bookFun==name)
		{
			bookAvailable=true;
			cout<<"book found"<<endl;
		}
	}
	
	void dispDetails(int ISSBNFun)
	{
		
	}
	
		
	}

