class Solution {
public:
    bool canPartition(vector<int>& nums) {
      int sum=0;
      for(auto i:nums){
          sum+=i;
      }
      if(sum%2!=0){
          return false;
      }
      int n = nums.size();
      int m = sum/2;
      vector<vector<int>>dp(n+1,vector<int>(m+1,0));
      for(int i=0;i<=n;i++){
           for(int j=0;j<=m;j++){
              if(i==0 && j==0){
                dp[i][j] = true;
              }
              else if(i==0){
                dp[i][j] = false;
              }
              else if(j==0){
                 dp[i][j] = true;
              }
              else if(nums[i-1]<=j){
                 dp[i][j] =   (dp[i-1][j-nums[i-1]] ||   dp[i-1][j]) ;
              }
              else{
                 dp[i][j] = dp[i-1][j] ;
              }
              
            }
      }
      return dp[n][m];
    }
};