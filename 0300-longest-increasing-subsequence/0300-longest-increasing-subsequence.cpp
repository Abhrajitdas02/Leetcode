class Solution {
public:
    int find(int ind,int prev,vector<int>& nums,vector<vector<int>>& dp){
        if(ind==nums.size())return 0;
        if(dp[ind][prev+1]!=-1)return dp[ind][prev+1];

        int nopick=find(ind+1,prev,nums,dp);
        int pick=0;
        if(prev==-1|| nums[ind]>nums[prev])pick=1+find(ind+1,ind,nums,dp);
        return dp[ind][prev+1]=max(pick,nopick);
    }
    int lengthOfLIS(vector<int>& nums) {
        int n=nums.size();
        vector<vector<int>> dp(n,vector<int>(n,-1));
        return find(0,-1,nums,dp);
    }
};