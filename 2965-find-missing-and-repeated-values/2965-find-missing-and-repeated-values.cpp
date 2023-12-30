class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n = grid.size();
        unordered_map<int,int> m;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                m[grid[i][j]]++;
            }
        }
        int repeat,miss;
        for(int i=1;i<=n*n;i++){
            if(m[i]==2) repeat=i;
            if(m[i]==0) miss = i;
        }
        return {repeat, miss};
    }
};