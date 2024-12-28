class Solution {
public:
    bool canPartition(vector<int>& nums) {
        int n=nums.size();
        int s=0;
        for(auto i:nums){
            s+=i;
        }
        if(s%2!=0) return false;
        int target=s/2;
        vector<vector<bool>> dp(n,vector<bool>(target+1,false));
        for(int i=0;i<=target;i++) 
        if(nums[0]==i)dp[0][i]=true;

        for(int ind=1;ind<n;ind++){
            for(int t=1;t<=target;t++){
                int take=dp[ind-1][t];
                int notake=false;
                if(nums[ind]<=t) notake=dp[ind-1][t-nums[ind]];
                dp[ind][t]= take||notake;
            }
        }
        return dp[n-1][target];
    }
};