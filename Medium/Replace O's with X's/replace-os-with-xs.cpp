//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    
    void dfs(int i,int j,vector<vector<char>>&mat,vector<vector<bool>>&v,int n,int m){
        if(i<0 || j<0 || i>=n || j>=m || v[i][j]==1 || mat[i][j]=='X'){
            return;
        }
        v[i][j]=1;
        dfs(i+1,j,mat,v,n,m);
        dfs(i-1,j,mat,v,n,m);
        dfs(i,j+1,mat,v,n,m);
        dfs(i,j-1,mat,v,n,m);
    }

    vector<vector<char>> fill(int n, int m, vector<vector<char>> mat){
        vector<vector<bool>>v(n+1,vector<bool>(m+1,0));
        int i=0,j=0,k=m-1,l=n-1;
        while(i<n){
            if(mat[i][j]=='O' && v[i][j]==0){
                dfs(i,j,mat,v,n,m);
            }
            if(mat[i][k]=='O' && v[i][k]==0){
                dfs(i,k,mat,v,n,m);
            }
            i++;
        }
        i=0;
        while(j<m){
            if(mat[i][j]=='O' && v[i][j]==0){
                dfs(i,j,mat,v,n,m);
            }
            if(mat[l][j]=='O' && v[l][j]==0){
                dfs(l,j,mat,v,n,m);
            }
            j++;
        }
        
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(v[i][j]==0 && mat[i][j]=='O'){
                    mat[i][j]='X';
                }
            }
        }
        return mat;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, m;
        cin>>n>>m;
        vector<vector<char>> mat(n, vector<char>(m, '.'));
        for(int i = 0;i < n;i++)
            for(int j=0; j<m; j++)
                cin>>mat[i][j];
        
        Solution ob;
        vector<vector<char>> ans = ob.fill(n, m, mat);
        for(int i = 0;i < n;i++) {
            for(int j = 0;j < m;j++) {
                cout<<ans[i][j]<<" ";
            }
            cout<<"\n";
        }
    }
    return 0;
}
// } Driver Code Ends