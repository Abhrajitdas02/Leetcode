class Solution {
public:
    int maxOperations(vector<int>& nums) {
        int n = nums.size();
        int c=1;
        int sum=nums[0]+nums[1];
        for(int i=2;i<n;i+=2){
            if(i==n-1) break;
          if(sum==(nums[i]+nums[i+1])){
              c++;
          }
          else break;   
        }
        return c;
    }
};