class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int n=nums.size();
        int maxi=0;
        int mini=nums[0];
        int cost;
        for(int i=0;i<n;i++){
            cost= nums[i]-mini;
            maxi=max(maxi,cost);
            mini=min(mini,nums[i]);
        }
        if(maxi==0) maxi=-1;
        return maxi;
    }
};