class Solution {
    private:
     int f(vector<int>ans){
         int n=ans.size();
         int prev=ans[0];
         int prev2=0;
         for(int i=1;i<n;i++){
            
             int pick=ans[i];
             if(i>1) pick+=prev2;
             int npick=prev;
             int curr=max(pick,npick);
             prev2=prev;
             prev=curr;
         }
         return prev;
     }
public:
    int rob(vector<int>& nums){
        int n=nums.size();
        vector<int>temp1,temp2;
        if(n==1) return nums[0];
        for(int i=0;i<n;i++){
            if(i!=0) temp1.push_back(nums[i]);
            if(i!=n-1) temp2.push_back(nums[i]);
        }
        return max(f(temp1),f(temp2));
    }
};