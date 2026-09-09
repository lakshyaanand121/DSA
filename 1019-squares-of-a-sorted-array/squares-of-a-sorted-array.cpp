class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            int num=nums[i];
            nums[i]=num*num;
        }
        sort(nums.begin(),nums.end());
        return nums;
    }
};