#include<iostream>

using namespace std;

void bubblesort(int arr[], int size)
{
	for( int i =0;i<size;i++)
	{
		for( int j=0;j<size-i-1;j++)
		{
			if(arr[j]>arr[j+1])
			{
				int temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
}

int main()
{
	
	
	int n;
	cout<<"Enter the size of the array";
	cin>>n;
	
	int arr[n];
	for( int i=0;i<n;i++)
	cin>>arr[i];
	 bubblesort( arr,n);	
	for( int i=0;i<n;i++)
	cout<<arr[i]<<" ";
	
	 
}
