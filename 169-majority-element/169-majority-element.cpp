class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        int count=1;
        int number=nums[0];
        for(int i = 1; i < nums.size(); i++) {
            
            if(number == nums[i]) count++;
            else if(count == 0){
                count++;
                number=nums[i];
            }else count--;
        }
        return number;
    }
};