class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        for(int i=0;i<nums1.size();i++){
            ans.push_back(nums1[i]);
        }

        for(int i=0;i<nums2.size();i++){
            ans.push_back(nums2[i]);
        }

        sort(ans.begin(),ans.end());
        int n=ans.size();
        if(n%2==1){
            return ans[n/2];
        }
        else{
            int mid1=n/2;
            int mid2=n/2-1;
            return((ans[mid1]+ans[mid2])/2.0);
        }
    }
};