class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& arr) {
        
        int odd=0;
        int even=0;
        
      int i=0,j=arr.size()-1;
        
        while(i<j)
        {
            if(arr[i]%2!=0&& arr[j]%2==0)
            {
                int a=arr[i];
                arr[i]=arr[j];
                arr[j]=a;
                i++;j--;
            }else if(arr[i]%2==0&& arr[j]%2!=0)
            {
              i++;j--;   
            }else if(arr[i]%2==0)
            {
                i++;
            }else
            {
                j--;
            }
        }
        return arr;
    }
};