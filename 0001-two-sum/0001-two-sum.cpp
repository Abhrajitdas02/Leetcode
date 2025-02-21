class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        unordered_map<int,int> mp;
        vector<int> ans(2);

        for(int i=0;i<n;i++)
        mp[nums[i]]=i;
        for(int i=0;i<n;i++){
            int complement=target-nums[i];
            if(mp.find(complement)!=mp.end() && mp[complement]!=i)
            ans={i,mp[complement]};
        }
        return ans;
    }
};