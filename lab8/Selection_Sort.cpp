#include <iostream>
using namespace std;
static int count=0;
int minimum(int first, int last, int array[])
{
		
	int min_ind=first;
	for(int i=first+1; i<=last; i++)
	{
		count++;
		if(array[min_ind]>array[i])
		{
		min_ind=i;
		
		}
	}
	return min_ind;
}
int selection_Sort(int array[])
{
	count=0;
		bool flag=false;
	{
		for(int i=0; i<5-1; i++)
		{
			if(array[i]>array[i+1])
			flag =true;
		}
	}
	int temp,comparisons=0,min;
	if(flag)
	for(int i=0; i<5-1; i++)
	{
		 min=minimum(i,5-1,array);
			temp=array[i];
			array[i]=array[min];
			array[min]=temp;
	}
	for(int k=0; k<5; k++)
	{
		cout<<array[k]<<" ";
	}
	cout<<count<<endl;	
	return count;
}
int main()
{
//	int arr_Size;
//	cout<<"Enter the size of array: ";
//	cin>>arr_Size;
//	int *array;
//	array=new int[arr_Size];
//	cout<<"Enter values of array "<<endl;
int Array_Permutations[120][5]= {
{5,4,3,2,1},
{5,4,3,1,2},
{5,4,2,3,1},
{5,4,2,1,3},
{5,4,1,3,2},
{5,4,1,2,3},
{5,3,4,2,1},
{5,3,4,1,2},
{5,3,2,4,1},
{5,3,2,1,4},
{5,3,1,4,2},
{5,3,1,2,4},
{5,2,4,3,1},
{5,2,4,1,3},
{5,2,3,4,1},
{5,2,3,1,4},
{5,2,1,4,3},
{5,2,1,3,4},
{5,1,4,3,2},
{5,1,4,2,3},
{5,1,3,4,2},
{5,1,3,2,4},
{5,1,2,4,3},
{5,1,2,3,4},
{4,5,3,2,1},
{4,5,3,1,2},
{4,5,2,3,1},
{4,5,2,1,3},
{4,5,1,3,2},
{4,5,1,2,3},
{4,3,5,2,1},
{4,3,5,1,2},
{4,3,2,5,1},
{4,3,2,1,5},
{4,3,1,5,2},
{4,3,1,2,5},
{4,2,5,3,1},
{4,2,5,1,3},
{4,2,3,5,1},
{4,2,3,1,5},
{4,2,1,5,3},
{4,2,1,3,5},
{4,1,5,3,2},
{4,1,5,2,3},
{4,1,3,5,2},
{4,1,3,2,5},
{4,1,2,5,3},
{4,1,2,3,5},
{3,5,4,2,1},
{3,5,4,1,2},
{3,5,2,4,1},
{3,5,2,1,4},
{3,5,1,4,2},
{3,5,1,2,4},
{3,4,5,2,1},
{3,4,5,1,2},
{3,4,2,5,1},
{3,4,2,1,5},
{3,4,1,5,2},
{3,4,1,2,5},
{3,2,5,4,1},
{3,2,5,1,4},
{3,2,4,5,1},
{3,2,4,1,5},
{3,2,1,5,4},
{3,2,1,4,5},
{3,1,5,4,2},
{3,1,5,2,4},
{3,1,4,5,2},
{3,1,4,2,5},
{3,1,2,5,4},
{3,1,2,4,5},
{2,5,4,3,1},
{2,5,4,1,3},
{2,5,3,4,1},
{2,5,3,1,4},
{2,5,1,4,3},
{2,5,1,3,4},
{2,4,5,3,1},
{2,4,5,1,3},
{2,4,3,5,1},
{2,4,3,1,5},
{2,4,1,5,3},
{2,4,1,3,5},
{2,3,5,4,1},
{2,3,5,1,4},
{2,3,4,5,1},
{2,3,4,1,5},
{2,3,1,5,4},
{2,3,1,4,5},
{2,1,5,4,3},
{2,1,5,3,4},
{2,1,4,5,3},
{2,1,4,3,5},
{2,1,3,5,4},
{2,1,3,4,5},
{1,5,4,3,2},
{1,5,4,2,3},
{1,5,3,4,2},
{1,5,3,2,4},
{1,5,2,4,3},
{1,5,2,3,4},
{1,4,5,3,2},
{1,4,5,2,3},
{1,4,3,5,2},
{1,4,3,2,5},
{1,4,2,5,3},
{1,4,2,3,5},
{1,3,5,4,2},
{1,3,5,2,4},
{1,3,4,5,2},
{1,3,4,2,5},
{1,3,2,5,4},
{1,3,2,4,5},
{1,2,5,4,3},
{1,2,5,3,4},
{1,2,4,5,3},
{1,2,4,3,5},
{1,2,3,5,4},
{1,2,3,4,5}
};
int sum=0;

	for(int i=0; i<120; i++)
	{
		sum+=selection_Sort(Array_Permutations[i]);
	}
	cout<<"Average is : "<<(sum/120.0);
}