class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        
        vector<vector<int>> v(n,vector<int> (n));
        
     int count=0;
        int i=0;
        int sr=0,sc=0,er=n,ec=n;
        while(count<n*n)
        {
           
            // vector<int> rr(n);
            for(int i=sr;i<er&&count<n*n;i++)
            {
                v[sr][i]=++count;
            }
            sc++;
              // vector<int> rc(n);
            for(int i=sc;i<ec&&count<n*n;i++)
            {
                v[i][er-1]=++count;

            }
            // v.push_back(rc);

            er--;
            // vector<int> r1(n);
            for(i=er-1;i>=sr&&count<n*n;i--)
            {
                v[ec-1][i]=++count;
                // count++;
            }
            ec--;
             // vector<int> r2(n);
            for(int i=ec-1;i>=sc&&count<n*n;i--)
            {
                v[i][sr]=++count;
                
            }
            sr++;
            
            // v.push_back(r2);

        }
        return v;
    }
};