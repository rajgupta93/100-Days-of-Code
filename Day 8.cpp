class Solution{
    public:
    //Function to return the count of number of elements in union of two arrays.
    int doUnion(int a[], int n, int b[], int m)  {
        //code here
       int c[m+n];
       
       for(int i =0;i<n;i++)
       c[i]=a[i];
       
       for(int j=0;j<m;j++)
       c[n+j]=b[j];
       
       
       sort(c,c+n+m);
       
       int uni=0;
       
       for(int  i=1;i<m+n;i++)
       {
           if(c[i-1]!=c[i])
           uni++;
       }
       return uni+1;
       
    }
};
