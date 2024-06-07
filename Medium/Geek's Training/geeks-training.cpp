//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
 private:
  int find(int day, int last,vector<vector<int>>& points,vector<vector<int>>& dp){
      int maxi=0;
      if(day==0){
          for(int i=0;i<=2;i++){
              if(i!=last)
              maxi=max(maxi,points[0][i]);
          }
              return maxi;
         }
          if(dp[day][last]!=-1) return dp[day][last];
          for(int i=0;i<=2;i++){
              if(i!=last){
                  int point=points[day][i]+find(day-1,i,points,dp);
                  maxi=max(maxi,point);
              }
          }
          return dp[day][last]=maxi;
      }
  public:
    int maximumPoints(vector<vector<int>>& points, int n) {
        // Code here
        vector<vector<int>> dp(n,vector<int>(4,-1));
        return find(n-1,3,points,dp);
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> points;
        for (int i = 0; i < n; ++i) {
            vector<int> temp;
            for (int j = 0; j < 3; ++j) {
                int x;
                cin >> x;
                temp.push_back(x);
            }
            points.push_back(temp);
        }

        Solution obj;
        cout << obj.maximumPoints(points, n) << endl;
    }
    return 0;
}
// } Driver Code Ends