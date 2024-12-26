//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  private:
    int find(int ind,int k,vector<int>& arr,vector<int>& dp){
        if(ind==0)return 0;
        int minstep=INT_MAX;
        int steps;
        if(dp[ind]!=-1)return dp[ind];
        
        for(int i=1;i<=k;i++){
            
            if(ind-i>=0) {
            steps=find(ind-i,k,arr,dp)+abs(arr[ind]-arr[ind-i]);
            minstep=min(minstep,steps);
            }
        }
        return dp[ind]=minstep;
    }
    public:
    int minimizeCost(int k, vector<int>& arr) {
        // Code here
        int n=arr.size();
        
        vector<int> dp(n,-1);
        return find(n-1,k,arr,dp);
    }
};

//{ Driver Code Starts.

int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);
    while (t--) {
        string ks;
        getline(cin, ks);
        int k = stoi(ks);
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution obj;
        int res = obj.minimizeCost(k, arr);
        cout << res << endl;
        cout << "~" << endl;
        // string tl;
        // getline(cin, tl);
    }
    return 0;
}

// } Driver Code Ends