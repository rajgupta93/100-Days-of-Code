class Solution {
public:
    
    void swap(int &a,int &b){
       int temp=a;
        a=b;
        b=temp;
    }
    void sortColors(vector<int>& nums) {
        int start=0,mid=0,end=nums.size()-1;
        
        while(mid<=end){
           
            switch(nums[mid]){
                    
                case 0: swap(nums[start++],nums[mid++]);
                        
                        break;
                case 1:mid++;
                        
                        break;
                case 2:swap(nums[end--],nums[mid]);
                        
                        break;
                    
                
            }
        }
        
    }
};