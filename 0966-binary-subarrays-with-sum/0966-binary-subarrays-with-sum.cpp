class Solution {
public:
    int find(vector<int>& nums, int goal){
        if(goal<0)return 0;
        int left=0,sum=0,cnt=0;
        for(int right=0;right<nums.size();right++){
            sum+=nums[right];
            while(sum>goal){
                sum-=nums[left];
                left++;
            }
            cnt=cnt+(right-left+1);
        }
        return cnt;
    }
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        return find(nums,goal)-find(nums,goal-1);
    }
};