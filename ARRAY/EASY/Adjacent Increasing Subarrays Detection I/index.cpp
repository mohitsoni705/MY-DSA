class Solution {
public:
    bool hasIncreasingSubarrays(vector<int>& nums, int k) {
        int increasing = 1;
        int previousNu = 0 ;
        for(int i = 1 ; i<nums.size() ; i++){
            if(nums[i]>nums[i-1]){
                increasing++;
            }else{
                previousNu = increasing;
                increasing = 1;
            }
            if(increasing/2 >=k || min(previousNu,increasing)>=k){
                return true;
            }
        }
        return false;
    }
};