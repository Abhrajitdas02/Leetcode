class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n=nums.size();
        unordered_map<int,int> mp;
        mp[0]=1;
        int c=0;
        int presum=0,remove=0;
        for(int i=0;i<n;i++){
            presum+=nums[i];
            remove=presum-k;
            c+=mp[remove];
            mp[presum]++;
        }
        return c;
    }
};