class Solution{	
	public:
		bool isSorted(vector<int>& nums){
			//your code goes here
            bool result = true;
            for(int i = 0 ; i<nums.size(); i++){
                if(nums[i]!=i+1){
                    result = false;
                }
            }
            return result;
	}
};