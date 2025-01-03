//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution {
  public:
    // Function to find length of longest increasing subsequence.
    int longestSubsequence(vector<int>& arr) {
        // code here
        int n=arr.size();
        vector<int> dp(n,1);
        int maxi=INT_MIN;
        for(int ind=0;ind<n;ind++){
            for(int prev=0;prev<ind;prev++){
                if(arr[prev]<arr[ind])
                dp[ind]=max(1+dp[prev],dp[ind]);
            }
            maxi=max(maxi,dp[ind]);
        }
        return maxi;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // to ignore the newline after the integer input

    while (t--) {
        int n;
        vector<int> arr;
        string input;

        // Input format: first number n followed by the array elements
        getline(cin, input);
        stringstream ss(input);
        int num;
        while (ss >> num)
            arr.push_back(num);

        Solution obj;
        cout << obj.longestSubsequence(arr) << endl;
    }

    return 0;
}

// } Driver Code Ends