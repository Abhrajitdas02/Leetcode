//{ Driver Code Starts

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution {
public:
     bool check(int row,int col,int m,int n,vector<vector<int>>&matrix){
       int delrow[8]={-1,-1,-1,0,0,1,1,1};
       int delcol[8]={-1,0,1,-1,1,-1,0,1};
       int c=0;
       for(int i=0;i<8;i++){
           int nrow=row+delrow[i];
           int ncol=col+delcol[i];
           if(nrow>=0 && ncol>=0 && nrow<m && ncol<n && !matrix[nrow][ncol])c++;
       }
       return c%2==0 && c!=0;
   }
    int Count(vector<vector<int> >& matrix) {
        // Code here
        int c=0;
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[i].size();j++){
                if(matrix[i][j]==1 && check(i,j,matrix.size(),matrix[i].size(),matrix))c++;
            }
        }
        return c;
    }
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<int>> matrix(n, vector<int>(m,0));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				cin >> matrix[i][j];
			}
		}
		Solution ob;
		int ans = ob.Count(matrix);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends