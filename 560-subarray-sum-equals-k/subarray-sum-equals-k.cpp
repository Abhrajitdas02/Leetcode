// class Solution {
// public:
//     int subarraySum(vector<int>& nums, int k) {
//         int n = nums.size();
//         int c=0;
//         for(int i=0;i<n;i++){
//             int sum=0;
//             for(int j=i;j<n;j++){
//                 sum+=nums[j];
//                 if(sum==k)c++;
//             }
//         }
//         return c;
//     }
// };

class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int,int> mp;
        mp[0]=1;
        int presum=0,c=0;
        for(int i=0;i<n;i++){
            presum+=nums[i];
            int remove = presum-k;
            c+=mp[remove];
            mp[presum]+=1;
        }
        return c;
    }
};