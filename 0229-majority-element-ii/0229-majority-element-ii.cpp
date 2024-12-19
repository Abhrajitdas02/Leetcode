class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int> ans;
        int n=nums.size();
        int el1=INT_MIN,el2=INT_MIN,cnt1=0,cnt2=0;
        for(int i=0;i<n;i++){
            if(cnt1==0 && nums[i]!=el2){
                el1=nums[i];
                cnt1=1;
            }
            else if(cnt2==0 && nums[i]!=el1){
                el2=nums[i];
                cnt2=1;
            }
            else if(nums[i]==el1){
                cnt1++;
            }
            else if(nums[i]==el2){
                cnt2++;
            }
            else{
                cnt1--;
                cnt2--;
            }
        }
        int c1=0,c2=0;
        for(auto i:nums){
            if(i==el1) c1++;
            if(i==el2) c2++;
        }
        if(c1>n/3)ans.push_back(el1);
        if(c2>n/3)ans.push_back(el2);
        return ans;
    }
};