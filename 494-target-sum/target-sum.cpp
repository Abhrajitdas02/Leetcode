class Solution {
public:
    int findTargetSumWays(vector<int>& nums, int target) {
        int sum = 0, zero = 0;
        for(int i=0; i<nums.size(); i++){
            sum += nums[i];
            zero += (nums[i] == 0) ? 1 : 0;
        }

        if((target + sum) % 2 != 0 || target + sum < 0){
            return 0;
        }

        if(sum + target == 0){
            return pow(2, zero);
        }

        sort(nums.begin(), nums.end());
        vector<vector<int>> dp(nums.size(), vector<int> (target+sum+1, -1));
        return findTargetSumWaysUtil(nums, 0, (target+sum)/2, dp);
    }

    int findTargetSumWaysUtil(vector<int> &nums, int i, int target, vector<vector<int>> &dp){

        if(i == nums.size()){
            return (target == 0 ? 1 : 0);
        }

        if(target == 0){
            return 1;
        }

        if(dp[i][target] != -1){
            return dp[i][target];
        }

        if(nums[i] > target){
            return findTargetSumWaysUtil(nums, i+1, target, dp);
        }

        return dp[i][target] = findTargetSumWaysUtil(nums, i+1, target-nums[i], dp) + findTargetSumWaysUtil(nums, i+1, target, dp);
    }
};