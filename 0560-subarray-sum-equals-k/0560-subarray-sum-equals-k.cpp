class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        int n=nums.size();
        mp[0]=1;
        int preSum=0,remove=0;
        int c=0;
        for(int i=0;i<n;i++){
           preSum+=nums[i];
           remove=preSum-k;
           c+=mp[remove];
           mp[preSum]++;
        }
        return c;
    }
};