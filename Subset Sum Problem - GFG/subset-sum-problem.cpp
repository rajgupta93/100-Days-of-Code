// { Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
//User function template for C++

class Solution{   
public:
 bool issub(vector<int>arr,int sum,int n)
    {
        
       bool dp[n+1][sum+1]; 
        
        
        // for(int i=0;i<sum+1;i++)
        //     for(int j=0;j<n+1;j++)
        //         if(j==0)
        //             dp[j][i]=false;
        //         else if(i==0)
        //             dp[j][i]=true;
                       for (int i = 0; i <= n; i++)
        dp[i][0] = true;
 
    // If sum is not 0 and set is empty,
    // then answer is false
    for (int i = 1; i <= sum; i++)
        dp[0][i] = false;
                    
                    
        // if(sum==0)
        //     {
        
        //  return 1;
                
        //     }
        // if(n==0)
        //  return 0;
        // //cout<<n;
        
//         if(dp[sum][n-1]!=-1)
// {     
//     return dp[sum][n-1];}
        
        for(int i=1;i<n+1;i++)
        {
            for(int j=1;j<sum+1;j++)
            {
                  if(arr[i-1]>j)
                {
                 dp[i][j]=dp[i-1][j];
                 
                 }else
                {
                 dp[i][j]=dp[i-1][j]||dp[i-1][j-arr[i-1]];
                }   
            }
        }
        return dp[n][sum];
       
    }


    bool isSubsetSum(vector<int>arr, int sum){
        // code here 
        // memset(dp,-1,sizeof(dp));
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