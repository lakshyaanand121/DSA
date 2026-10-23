class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        // int count=0;
        // for(int i=0;i<nums.size();i++){
        //     int sum=0;
        //     for(int j=i;j<nums.size();j++){
        //         sum+=nums[j];
        //         if(sum==k){
        //             count++;
        //         }
        //     }
        // }
        // return count;

        unordered_map<int,int> mp;
        mp[0]=1;

        int sum=0;
        int ans=0;

        for(int i=0;i<nums.size();i++){
            sum=sum+nums[i];

            int need=sum-k;

            if(mp.find(need)!=mp.end()){
                ans=ans+mp[need];
            }
            mp[sum]++;
        }
        return ans;
    }
};