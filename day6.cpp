#include<iostream>

using namespace std;

int main()
{
	int n;
	cin>>n;
	int arr[n];
	for( int i=0;i<n;i++)
	cin>>arr[i];
	int maxsum=INT_MIN,currsum=INT_MIN;
	for(int i=0;i<n;i++)
	{
		
		
		if(currsum>0)
		currsum+=arr[i];
		else
		currsum=arr[i];
		
		if(maxsum<currsum)
		maxsum=currsum;
	}
	cout<<maxsum;
}
