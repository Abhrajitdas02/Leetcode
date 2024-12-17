class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n=nums.size();
        int maxi=0,c=0;
        for(int i=0;i<n;i++){
            if(nums[i]==1){
                c++;
                if(maxi<c) maxi=c;
            }
            if(nums[i]!=1) c=0;
        }
        return maxi;
    }
};