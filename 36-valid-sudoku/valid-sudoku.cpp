class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
         set<char> row[9];
         set<char> col[9];
         set<char> box[9];

         for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                if(board[i][j]=='.')
                    continue;
               char num = board[i][j];

               int boxindex=(i/3)*3+(j/3);

               if(row[i].find(num)!=row[i].end())
                       return false;
               if(col[j].find(num)!=col[j].end())
                       return false;
               if(box[boxindex].find(num)!=box[boxindex].end())
                       return false;
                row[i].insert(num);
                col[j].insert(num);
                box[boxindex].insert(num);       
            }
         }
         return true;
    }
};