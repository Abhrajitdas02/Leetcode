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
        vector<int> dp(n,1);
        int maxi=INT_MIN;
        for(int ind=0;ind<n;ind++){
            for(int prev=0;prev<ind;prev++){
                if(nums[prev]<nums[ind]) dp[ind]=max(1+dp[prev],dp[ind]);
            }
            maxi=max(maxi,dp[ind]);
        }
        return maxi;
    }
};