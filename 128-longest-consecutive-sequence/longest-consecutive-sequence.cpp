class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int smaller=INT_MIN;
        int c=0,maxi=0;
        for(int i=0;i<n;i++){
            if(nums[i]-1==smaller){
                c++;
                smaller=nums[i];
            }
            else if(nums[i]!=smaller){
                c=1;
                smaller=nums[i];
            }
            maxi=max(maxi,c);
            }
            return maxi;
        }
};