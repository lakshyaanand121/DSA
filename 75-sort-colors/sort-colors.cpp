class Solution {
public:
    void sortColors(vector<int>& nums) {
//      for(int j=0;j<nums.size();j++){
//        for(int i=0;i<nums.size()-1;i++){
//            if(nums[i]>nums[i+1]){
//                swap(nums[i],nums[i+1]);
//            }
//        }
//      }
        int zero=0;
        int one=0;
        int two=0;

        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                zero++;
            }
            else if(nums[i]==1){
                one++;
            }
            else{
                two++;
            }
        }  
        int k=0;
        while(zero>0){
            nums[k]=0;
            k++;
            zero--;
        }
        while(one>0){
            nums[k]=1;
            k++;
            one--;
        }
        while(two>0){
            nums[k]=2;
            k++;
            two--;
        }
    }
};