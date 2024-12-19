class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        for(int row=1;row<=numRows;row++){
            vector<int> temp;
            int answer=1;
            temp.push_back(1);
            for(int col=1;col<row;col++){
                answer=answer*(row-col);
                answer=answer/col;
                temp.push_back(answer);
            }
            ans.push_back(temp);
        }
        return ans;
    }
};