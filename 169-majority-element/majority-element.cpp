class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        int ele;
        int c=0;
        for(int i=0;i<n;i++){
            if(c==0){
                ele=nums[i];
                c++;
            }
            else if(ele==nums[i])
                c++;
            else if(ele!=nums[i])
                c--;
        }
        return ele;
    }
};