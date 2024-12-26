class Solution {
public:
    // int find(int ind,vector<int>& nums,vector<int>& dp){
    //     if(ind==0)return nums[ind];
    //     if(ind<0)return 0;
    //     if(dp[ind]!=-1)return dp[ind];
    //     int pick=nums[ind]+find(ind-2,nums,dp);
    //     int nopick=0+find(ind-1,nums,dp);
    //     return dp[ind]=max(pick,nopick);
    // }
    int rob(vector<int>& nums) {
        int n=nums.size();
        if(n==1)return nums[0];
        vector<int> dp(n,-1);
        dp[0]=nums[0];
        int pick;
        for(int i=1;i<n;i++){
            pick=nums[i]; if(i>1)pick+=dp[i-2];
            int nopick=0+dp[i-1];
            dp[i]=max(pick,nopick);
        }
        return dp[n-1];
    }
};