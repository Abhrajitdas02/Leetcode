class Solution {
public:
    long long maximumTripletValue(vector<int>& nums) {
        long long max=LLONG_MIN;
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                for(int k=j+1;k<nums.size();k++){
                    if(((long)(nums[i]-nums[j])*(long)nums[k])>max) 
                        max=(long)(nums[i]-nums[j])*(long)nums[k];
                }
            }
        }
        if(max>=0) return max;
        else return 0;
    }
};