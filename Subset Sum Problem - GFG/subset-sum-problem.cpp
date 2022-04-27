// { Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
//User function template for C++

class Solution{   
public:

int dp[10000][101];

    bool issub(vector<int>arr,int sum,int n)
    {
        if(sum==0)
            {
        
         return 1;
                
            }
        if(n==0)
         return 0;
        // //cout<<n;
        if(dp[sum][n-1]!=-1)
{     
    return dp[sum][n-1];}
        
        if(arr[n-1]>sum)
        {
            return dp[sum][n-1]=issub(arr,sum,n-1);
            
        }else
        {
            return dp[sum][n-1]=(issub(arr,sum,n-1))||issub(arr,sum-arr[n-1],n-1);
        }
    }


    bool isSubsetSum(vector<int>arr, int sum){
        // code here 
        memset(dp,-1,sizeof(dp));
        int n=arr.size();
        return issub(arr,sum,n);
    }
};

// { Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N, sum;
        cin >> N;
        vector<int> arr(N);
        for(int i = 0; i < N; i++){
            cin >> arr[i];
        }
        cin >> sum;
        
        Solution ob;
        cout << ob.isSubsetSum(arr, sum) << endl;
    }
    return 0; 
} 
  // } Driver Code Ends