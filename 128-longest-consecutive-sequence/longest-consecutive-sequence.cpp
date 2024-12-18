class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n =nums.size();
        sort(nums.begin(),nums.end());
        int longest=0, small=INT_MIN,cnt=0;
        for(int i=0;i<n;i++){
            if(nums[i]-1==small){
                cnt++;
                small=nums[i];
            }
            else if(nums[i]!=small){
                cnt=1;
                small=nums[i];
            }
            longest=max(longest,cnt);
        }
        return longest;
    }
};