class Solution {
public:
    int find(int ind,vector<int>& nums,vector<int>& dp){
        if(ind==0)return nums[ind];
        if(ind<0)return 0;
        if(dp[ind]!=-1)return dp[ind];
        int pick,nopick;
        pick=nums[ind]+find(ind-2,nums,dp);
        nopick=0+find(ind-1,nums,dp);
        return dp[ind]=max(pick,nopick);
    }
    int rob(vector<int>& nums) {
        int n=nums.size();
        vector<int> dp(n,-1);
        return find(n-1,nums,dp);
    }
};