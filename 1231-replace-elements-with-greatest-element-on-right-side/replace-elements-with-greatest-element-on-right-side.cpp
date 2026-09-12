class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
       for(int i=0;i<arr.size()-1;i++){
        int greatest=arr[i+1];
         for(int j=i+1;j<arr.size();j++){
            if(arr[j]>greatest){
                greatest=arr[j];
            }
         }
         arr[i]=greatest;
       }
       arr[arr.size()-1]=-1;
       return arr;
    }
};