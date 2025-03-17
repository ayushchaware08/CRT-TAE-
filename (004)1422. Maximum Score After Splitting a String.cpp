// o(n)
class Solution {
public:
    int pivotIndex(vector<int>& nums) {
 
        int total = 0;
        for(int i =0; i<nums.size(); i++){
            total += nums[i];
        }
        int currSum =0;
        for(int i =0; i<nums.size(); i++){
            if(total - currSum -nums[i] == currSum ){
                return i;
            }
            currSum += nums[i];
        }
        return -1;
    }
};
