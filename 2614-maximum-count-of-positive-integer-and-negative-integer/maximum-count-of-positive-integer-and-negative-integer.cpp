class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int neg_count=0;
        int pos_count=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<0){
                neg_count++;
            }
            if(nums[i]>0){
                pos_count++;
            }
        }
        if(neg_count>=pos_count){
            return neg_count;
        }
        else if(pos_count>neg_count){
            return pos_count;
        }
        return{};
    }
};