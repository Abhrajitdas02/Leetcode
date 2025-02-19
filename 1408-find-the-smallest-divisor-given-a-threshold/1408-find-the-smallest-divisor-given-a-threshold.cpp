class Solution {
public:
    int calculate(vector<int>& nums, int mid){
        int small=0;
        for(int i=0;i<nums.size();i++){
            small+=ceil((double)nums[i]/(double)mid);
        }
        return small;
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
        int n=nums.size();
        int low=1;
        int high=0;
        for(int i=0;i<n;i++){
            high=max(high,nums[i]);
        }
        while(low<=high){
            int mid=(low+high)/2;
            int ans=calculate(nums,mid);
            if(ans<=threshold){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return low;
    }
};