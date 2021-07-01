#include<iostream>


using namespace std;

int main()
{
	
	int n;
	cin>>n;
	
	int arr[n];
	
  for( int i=0;i<n;i++)
	{
		cin>>arr[n];
	}
	
	
	int no_of_rb=0,in=1;
	
	if(n>1)
	{
		if(arr[0]>arr[1])
		no_of_rb++;
		cout<<"yes";
	}
	int max=arr[0];
	
	for(int i =1;i<n-1;i++)
	{
		
		
		if(arr[i]>max)
		{
			if(arr[i]>arr[i+1])
			{
				no_of_rb++;
			}
			max=arr[i];
		}
	}
	
	if(arr[n-1]>max)
	no_of_rb++;
	
	
	cout<<no_of_rb;
	
}
