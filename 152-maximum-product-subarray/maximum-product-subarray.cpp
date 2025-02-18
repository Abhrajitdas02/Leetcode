class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n=nums.size();
        int pre=1;
        int suff=1;
        int maxi=INT_MIN;
        for(int i=0;i<n;i++){
            pre*=nums[i];
            suff*=nums[n-1-i];
            if(pre>maxi)maxi=pre;
            if(suff>maxi) maxi=suff;
            if(pre==0) pre=1;
            if(suff==0) suff=1;
        }
        return maxi;
    }
};