#include<iostream>
#include<conio.h>
using namespace std;
#include <iostream>
using namespace std;

void noDup(int array[4][5],int array2[20]){
	int k=0;
	bool b=true;
	
	for(int i=0;i<4;i++){
		for(int j=0;j<5;j++){
			b=true;
			for(int m=0;m<20;m++){
				if(array2[m]==array[i][j])
				b=false;
			}
			if(b==true){
			
				array2[k]=array[i][j];
				k++;
			}
		}
		
	}
	
	for(int f=0; f<=k;f++){
		cout<<array2[f]<<" ";
	}
	
}

int main ()
{
	int ar1[4][5]={{2,4,5,1,4},{2,5,6,7,8},{4,2,1,12,9},{3,6,5,1,10}};
	int ar2[20]={};

	noDup(ar1,ar2);
	
	return 0;}
