class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n=nums.size();
        int maxfind=0;
        for(int i=0;i<n;i++){
            if(i>maxfind)return false;
            maxfind=max(maxfind,i+nums[i]);
        }
        return true;
    }
};