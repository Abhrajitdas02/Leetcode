// class Solution {
// public:
//     int longestConsecutive(vector<int>& nums) {
//         if(nums.size()==0) return 0;
//         int n = nums.size();
//         sort(nums.begin(),nums.end());
//         int longest=1,c=0,lastSmall=INT_MIN;
//         for(int i=0;i<n;i++){
//              if(nums[i]-1 == lastSmall){
//                 c++;
//                 lastSmall=nums[i];
//              }
//              else if(lastSmall!=nums[i]){
//                 c=1;
//                 lastSmall=nums[i];
//              }
//              longest = max(longest,c);
//         }
//         return longest;
//     }
// };

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0) return 0;
        int n = nums.size();
        unordered_set<int> st;
        int longest=1,c=0;
        for(int i=0;i<n;i++){
            st.insert(nums[i]);
        }
        for(auto it:st){
            if(st.find(it-1)==st.end()){
                c=1;
                int x=it;
                while(st.find(x+1)!=st.end()){
                    x=x+1;
                    c++;
                }
                longest=max(longest,c);
            }
        }
        return longest;
    }
};