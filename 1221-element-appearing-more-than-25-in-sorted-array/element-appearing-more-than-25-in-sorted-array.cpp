class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        int count=1;
        for(int i=0;i<arr.size();i++){
            if(i>0 && arr[i]==arr[i-1]){
                count++;
            }
            else if(i>0){
                count=1;
            }    
            if(count>(arr.size()/4)){
                return arr[i];
            }    
        }
        return-1;
    }
};