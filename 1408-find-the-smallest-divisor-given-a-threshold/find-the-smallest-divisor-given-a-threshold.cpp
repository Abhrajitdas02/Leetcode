class Solution {
public:
    bool possible(int a,vector<int>& nums,int th){
        int n=nums.size();
        int sum=0;
        for(auto i:nums){
          sum+=ceil(i/(double)a);
        }
        if(sum<=th)
        return true;
        else
        return false;
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
        int n=nums.size();
        int ans=-1;
        int maxi=INT_MIN;
        for(int i=0;i<n;i++) maxi=max(nums[i],maxi); 
        int low=1,high=maxi;
        while(low<=high){
            int mid=(low+high)/2;
            if(possible(mid,nums,threshold)==true){
            ans=mid;
            high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
     return ans;
    }
};