class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n=nums.size();
        int sum=0;
        int c=0;
        for(int i=0;i<n;i++){
            int j=i+1;
            sum=nums[i];
            if(sum==k){
                c++;
            }
            while(j<n){
                sum+=nums[j];
                if(sum==k){
                    c++;
            }
            j++;
        }
    }
    return c;
    }
};