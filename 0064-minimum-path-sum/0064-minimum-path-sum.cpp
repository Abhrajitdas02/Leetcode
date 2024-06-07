class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        vector<int> prev(n,-1);
        int up=INT_MAX,left=INT_MAX;
        for(int i=0;i<m;i++){
            vector<int> cur(n,-1);
            for(int j=0;j<n;j++){
                if(i==0 && j==0) cur[j]=grid[0][0];
                else{
                    if(i>0) up=grid[i][j]+prev[j];
                    else up=INT_MAX;
                    if(j>0) left=grid[i][j]+cur[j-1];
                    else left=INT_MAX;
                    cur[j]=min(up,left);
                }
            }
            prev=cur;
        }
        return prev[n-1];
    }
};