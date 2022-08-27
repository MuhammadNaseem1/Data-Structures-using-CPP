#include<iostream>
using namespace std;
void bubbleSort(float arr[],float n){
	for(int i=0;i<n;i++){
		for(int j=0;j<n-i-1;j++){
			if(arr[j]>arr[j+1]){
				int temp;
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;	
			}
		}
	}
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
}
int main(){
//	int n=4;
	float arr[4]={2.1,1.3,4.5,3.6};
	 //n=sizeof(arr)/sizeof(arr[0]);
	bubbleSort(arr,4);
	}
