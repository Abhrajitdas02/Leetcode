//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution
{
    public:
    //Function to find minimum number of operations that are required 
    //to make the matrix beautiful.
    int findMinOpeartion(vector<vector<int> > matrix, int n)
    {
        // code here 
        int rowsum[n]={0},colsum[n]={0};
        int temp=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                rowsum[i]+=matrix[i][j];
                colsum[i]+=matrix[j][i];
            }
            if(temp<rowsum[i] || temp<colsum[i]){
                temp=max(colsum[i],rowsum[i]);
            }
          }
          int c=0;
          for(int i=0;i<n;i++){
              c+=temp-colsum[i];
          }
          return c;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<vector<int> > matrix (n,vector<int>(n));
        for(int i=0;i<n;i++)
            for(int j=0;j<n;j++)
                cin>>matrix[i][j];
        Solution ob;
        cout << ob.findMinOpeartion(matrix, n) << endl;
    }
    return 0;
}


// } Driver Code Ends