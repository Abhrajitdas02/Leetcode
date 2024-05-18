class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        if(n==1) return nums[0];
        int sum=0;
        int maxi=INT_MIN;
        for(int i=0;i<n;i++){
            sum+=nums[i];
            
               if(sum>maxi){
                maxi=sum;
            }
            if(sum<0){
                sum=0;
            }
        }
        return maxi;
    }
};