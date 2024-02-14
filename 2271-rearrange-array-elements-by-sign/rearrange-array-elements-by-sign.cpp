class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
     vector<int> v1,v2,ans;
     int n = nums.size();
     for(int i=0;i<n;i++){
         if(nums[i]>0) v1.push_back(nums[i]);
         else v2.push_back(nums[i]);
     }
     int a=0,b=0;
     while(a<n/2 && b<n/2){
         ans.push_back(v1[a]);
         a++;
         ans.push_back(v2[b]);
         b++;
     }
     return ans;   
    }
};