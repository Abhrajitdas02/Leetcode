class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int left=0;
        int n=nums.size();
        int maxLen=0;
        int c=0;
        for(int right=0;right<n;right++){
            while(nums[right]!=1 && c>=k){
                if(nums[left]==0)c--;
                left++;
            }
            if(nums[right]!=1)c++;
            maxLen=max(maxLen,right-left+1);
        }
        return maxLen;
    }
};