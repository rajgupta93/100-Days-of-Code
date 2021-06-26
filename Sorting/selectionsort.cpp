#include<iostream>

using namespace std;

void selectionsort( int arr[], int size)
{
	int min =INT_MIN;
	int index=0;
	for( int i=0;i<size;i++)
	{
		min = arr[i];
		index =i;
		
		for( int j=i+1;j<size;j++)
		{
			if(min>arr[j])
			{
				min=arr[j];
				index =j;
				
			}
			
		}
		
	 int temp=arr[index];
	 arr[index]=arr[i];
	 arr[i]=temp;
		
	}
	
}

int main()
{
	int n;
	cout<<"Enter the size of the array";
	cin>>n;
	int arr[n];
	
	for( int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	
	selectionsort(arr,n);
	
	for( int i =0;i<n;i++)
	{
		cout<<arr[i]<<"	";
	}
}
