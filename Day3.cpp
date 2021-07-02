#include<iostream>


using namespace std;

int main()
{
	int size;
	cout<<"Enter the size of the array:";
	cin>>size;
	int arr[size];
	int max=0;
	
	for(int i =0;i<size;i++)
	{
	cin>>arr[i];
	if(arr[i]>max)
	max=arr[i];
}

	
	bool temp[max]={0};
	
	for(int i =0;i<size;i++)
	{
		if(arr[i]>=0)
		{
			temp[arr[i]]++;
		}
	}
	
	
	for( int i =0;i<max;i++)
	{
		if(temp[i]==0)
		{
		cout<<i;
		break;
	}
	}
}
