//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
  
  bool solve(int src,unordered_map<int,bool>&vis, int parent , vector<int> adj[] ){
      vis[src] = true;
      
      for(auto neb : adj[src]){
          if(!vis[neb]){
              bool ans = solve(neb,vis,src,adj);
              if(ans == true) return true;
          }
          else if(neb!= parent) return true;
      }
      return false;
  }
  
  
  
    // Function to detect cycle in an undirected graph.
    bool isCycle(int V, vector<int> adj[]) {
        // Code here
        unordered_map<int,bool>vis;
        for(int i = 0 ;i<V;++i){
            if(!vis[i]){
                int parent = -1;
                bool ans = solve(i,vis,parent,adj);
                if(ans == true) return true;
            }
        }
        return false;
    }
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >> E;
        vector<int> adj[V];
        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        Solution obj;
        bool ans = obj.isCycle(V, adj);
        if (ans)
            cout << "1\n";
        else
            cout << "0\n";
    }
    return 0;
}
// } Driver Code Ends