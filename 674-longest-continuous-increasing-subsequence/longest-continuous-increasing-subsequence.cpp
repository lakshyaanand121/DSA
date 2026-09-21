class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        int count=1;
        int max_count=1;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i+1]>nums[i]){
                count++;
            }
            else{
               count=1;
            }
            max_count=max(max_count,count);
        }
        return max_count;
    }
};