class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
    //     for(int i=1;i<nums.size();i++){
    //         nums[i]=nums[i]+nums[i-1];
    //     }
    //     return nums;
    vector<int> prifix(nums.size());
    prifix[0]=nums[0];
    for(int i=1;i<nums.size();i++){
        prifix[i]=prifix[i-1]+nums[i];
    }
    return prifix;
    }
};