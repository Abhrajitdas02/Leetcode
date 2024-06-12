//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++
 
class Solution{
  public:
    int solve(int ind,int n,int price[],vector<vector<int>>& dp){
        if(ind==0){
            return n*price[0];
        }
     if(dp[ind][n]!=-1) return dp[ind][n];
        int nopick=solve(ind-1,n,price,dp);
        int pick=INT_MIN;
        int rodlen=ind+1;
        if(rodlen<=n) pick=price[ind]+solve(ind,n-rodlen,price,dp);
        
        return dp[ind][n]=max(pick,nopick);
    }
    int cutRod(int price[], int n) {
        // int m=sizeof(price)/sizeof(price[0]);
        vector<vector<int>> dp(n,vector<int>(n+1,-1));
        return solve(n-1,n,price,dp);
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) 
            cin >> a[i];
            
        Solution ob;

        cout << ob.cutRod(a, n) << endl;
    }
    return 0;
}
// } Driver Code Ends