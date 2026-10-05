class Solution {
public:
    vector<int> limitOccurrences(vector<int>& nums, int k) {
        vector<int>ans;
        for(int i=0;i<nums.size();i++){
            int count=0;
            for(int j=0;j<ans.size();j++){
            if(nums[i]==ans[j]){
                count++;
            }
            }
            if(count<k){
                ans.push_back(nums[i]);
            } 
        }
        return ans;
    }
};