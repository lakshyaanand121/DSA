class Solution {
public:
    int heightChecker(vector<int>& heights) {
        int count=0;
        vector<int> copy_heights = heights;
        sort(heights.begin(),heights.end());
        for(int i=0;i<heights.size();i++){
            for(int j=0;j<copy_heights.size();j++){
                if(i==j && copy_heights[j]!=heights[i]){
                    count++;
                }
            }
        }
        return count;
    }
};