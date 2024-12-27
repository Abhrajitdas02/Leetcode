class Solution {
public:
    int find(vector<int>& temp){
        int n=temp.size();
        vector<int> dp(n,-1);
        dp[0]=temp[0];
        for(int i=1;i<n;i++){
            int pick=temp[i];
            if(i>1)pick+=dp[i-2];
            int nopick=0+dp[i-1];
            dp[i]=max(pick,nopick);
        }
        return dp[n-1];
    }
    int rob(vector<int>& nums) {
        int n=nums.size();
        if(n==1)return nums[0];
        vector<int> temp1,temp2;
        for(int i=0;i<n;i++){
            if(i!=0)temp1.push_back(nums[i]);
            if(i!=n-1)temp2.push_back(nums[i]);
        }
        return max(find(temp1),find(temp2));
    }
};