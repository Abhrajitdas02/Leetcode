class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m=matrix.size();
        int n=matrix[0].size();
        vector<pair<int,int>> pos;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(matrix[i][j]==0){
                    pos.push_back({i,j});
                }
            }
        }
        for(auto i:pos){
            for(int x=0;x<n;x++){
                matrix[i.first][x]=0;
            }
            for(int x=0;x<m;x++){
                matrix[x][i.second]=0;
            }
        }
    }
};