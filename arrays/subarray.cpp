#include<iostream>

using namespace std;

void subarrays(int arr[],int size)
{
	int sum =0;
	
	
	for( int i =0;i<size;i++)
	{
		for( int j=i;j<size;j++)
		{
			sum =sum+arr[j];
			
			cout<<sum<<endl;
		}
		sum =0;
	}
}


int main()
{
	int size;
	cout<<"Enter the sizr of the array:";
	cin>>size;
	int arr[size];
	
	for( int i =0;i<size;i++)
	{
		cin>>arr[i];
	}
	
	subarrays(arr,size);
	
}
