class Solution {
public:
    bool isPalindrome(string s) {
       string original="";
       for(int i=0;i<s.size();i++){
        if(isalnum(s[i])){
            original+=tolower(s[i]);
        }
       }
       int n=s.size();
       string rev=original;
       int left=0;
       int right=rev.size()-1;
       while(left<right){
        swap(rev[left],rev[right]);

        left++;
        right--;
       } 
       return original==rev;
    }
};