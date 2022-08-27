#include <iostream>
using namespace std;
int main(){
	char Message[12]={"Hello world"};
	int number;
	int a=0;

	while(a<10){
			cin>>number;
		
		for(int i=0; i<12; i++){
			cout<<char(Message[i]+number);
	}
	a++;
	}
}
problem 3
#include <iostream>
using namespace std;

void noDup(int ar1[4][5],int ar2[20]){
	int k=0;
	bool b=true;
	
	for(int i=0;i<4;i++){
		for(int j=0;j<5;j++){
			b=true;
			for(int l=0;l<20;l++){
				if(ar2[l]==ar1[i][j])
				b=false;
			}
			if(b==true){
			
				ar2[k]=ar1[i][j];
				k++;
			}
		}
		
	}
	
	for(int f=0; f<=k;f++){
		cout<<ar2[f]<<" ";
	}
	
}

int main ()
{
	int arr1[4][5]={{2,4,5,1,4},{2,5,6,7,8},{4,2,1,12,9},{3,6,5,1,10}};
	int arr2[20]={};

	noDup(arr1,arr2);
	
	return 0;
