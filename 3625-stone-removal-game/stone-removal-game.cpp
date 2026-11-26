class Solution {
public:
    bool canAliceWin(int n) {
        int moves=10;
        int count=0;
        while(n>=moves){
            n=n-moves;
            moves--;
            count++;
        }
        return count%2==1;
    }
};