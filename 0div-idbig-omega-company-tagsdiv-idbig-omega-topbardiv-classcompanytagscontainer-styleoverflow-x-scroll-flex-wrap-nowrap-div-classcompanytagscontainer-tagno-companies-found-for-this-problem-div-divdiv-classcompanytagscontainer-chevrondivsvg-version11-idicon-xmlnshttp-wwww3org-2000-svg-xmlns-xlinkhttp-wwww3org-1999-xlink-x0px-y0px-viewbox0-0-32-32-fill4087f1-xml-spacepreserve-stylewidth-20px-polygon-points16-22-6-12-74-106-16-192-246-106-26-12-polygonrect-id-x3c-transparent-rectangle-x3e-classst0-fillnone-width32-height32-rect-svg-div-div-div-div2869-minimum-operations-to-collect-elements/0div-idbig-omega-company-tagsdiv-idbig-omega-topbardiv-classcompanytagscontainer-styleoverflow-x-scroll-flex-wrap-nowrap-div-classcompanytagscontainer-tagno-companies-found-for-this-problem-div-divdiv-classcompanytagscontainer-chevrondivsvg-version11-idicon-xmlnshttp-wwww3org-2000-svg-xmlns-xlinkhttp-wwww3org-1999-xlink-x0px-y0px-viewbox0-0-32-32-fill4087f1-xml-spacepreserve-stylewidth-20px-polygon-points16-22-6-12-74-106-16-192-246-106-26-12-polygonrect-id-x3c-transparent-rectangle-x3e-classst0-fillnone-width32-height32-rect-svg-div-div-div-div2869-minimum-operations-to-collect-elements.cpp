class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        unordered_set<int> v;
        for(int i=nums.size()-1;i>=0;i--){
            if(nums[i]<=k){
            v.insert(nums[i]);
        }
        if(v.size()==k)
            return nums.size()-i;
        }
        return nums.size();
    }
};