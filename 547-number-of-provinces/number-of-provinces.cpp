class Solution {
public:
      void dfs(int m, int n, vector<vector<int>>& Connected, vector<bool>&visited){
        visited[m] = true;
        vector<int>adj;
        for(int i=0; i<n; i++ ){
            int x =  Connected[m][i]; 
            if(x == 1)
                adj.push_back(i);
        }
        for(auto x: adj){
            if(!visited[x]){
                dfs(x, n, Connected, visited);
            }
        }
        
      }    
    int findCircleNum(vector<vector<int>>& Connected) {
        
        int n=Connected.size();
         vector<bool> visited(n,0);
         int ans=0;
         for(int i=0;i<Connected.size();i++){
             if(!visited[i]){
                 ans++;
                 dfs(i,n,Connected,visited);
             }
         }
        return ans;
    }
};