class Solution {
public:
    int find(vector<int>& nums, int k){
        if(k<0)return 0;
        int n=nums.size();
        int left=0;
        int c=0,c1=0;
        for(int right=0;right<n;right++){
            if(nums[right]%2==1)c1++;
            while(c1>k){
                if(nums[left]%2==1)c1--;
                left++;
            }
            c=c+(right-left+1);
        }
        return c;
    }
    int numberOfSubarrays(vector<int>& nums, int k) {
        return find(nums,k)-find(nums,k-1);
    }
};