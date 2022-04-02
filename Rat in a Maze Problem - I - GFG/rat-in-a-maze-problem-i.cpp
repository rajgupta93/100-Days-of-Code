// { Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// User function template for C++

class Solution{
    public:

    void findpath(vector<vector<int>> &m,int n,int r,int c,vector<string> &s,string currs)
    {
        if(r<0||c<0||r>n||c>n||m[r][c]==0)
                return;
               m[r][c]=0;
        if(r==n&&c==n)
        {
    
            s.push_back(currs);
            // return;
        }
        findpath(m,n,r-1,c,s,currs+'U');
        findpath(m,n,r+1,c,s,currs+'D');
        findpath(m,n,r,c-1,s,currs+'L');
        findpath(m,n,r,c+1,s,currs+'R');
                  m[r][c]=1;
        
    }
    
    vector<string> findPath(vector<vector<int>> &m, int n) {
        // Your code goes here
        vector<string> s;
        int isvisited[n][n];
        string curr="";
        findpath(m,n-1,0,0,s,curr);
    
        return s;
    }
};

    


// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> m(n, vector<int> (n,0));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> m[i][j];
            }
        }
        Solution obj;
        vector<string> result = obj.findPath(m, n);
        sort(result.begin(), result.end());
        if (result.size() == 0)
            cout << -1;
        else
            for (int i = 0; i < result.size(); i++) cout << result[i] << " ";
        cout << endl;
    }
    return 0;
}  // } Driver Code Ends