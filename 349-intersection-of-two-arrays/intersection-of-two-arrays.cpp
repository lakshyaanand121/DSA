class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
       set<int> s;
       set<int> ans;
       for(int i=0;i<nums1.size();i++){
        s.insert(nums1[i]);
       }
       for(int i=0;i<nums2.size();i++){
        if(s.find(nums2[i])!=s.end()){
            ans.insert(nums2[i]);
        }
       }
       vector<int> result(ans.begin(),ans.end());
       return result;
    }
};