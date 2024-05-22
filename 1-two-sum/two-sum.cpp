// class Solution {
// public:
//     vector<int> twoSum(vector<int>& nums, int target) {
//         int n =nums.size();
//         unordered_map<int,int> mp;
//         for(int i=0;i<n;i++){
//             int b = target-nums[i];
//            if(mp.find(b) != mp.end()){
//             return {mp[b],i};
//            }
//             mp[nums[i]]=i;
//          }
//             return {-1,-1};
//     }
// };

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        vector<pair<int,int> > temp;
        vector<int> ans;

        for(int i = 0; i < nums.size(); i++){
            pair <int,int> pr = {nums[i], i};
            temp.push_back(pr);
        }   

        sort (temp.begin(), temp.end());

        int s = 0;
        int e = nums.size()-1;

        while(s < e){
            int sum = temp[s].first + temp[e].first;
            if(sum == target){
                ans.push_back(temp[s].second);
                ans.push_back(temp[e].second);
                break;
            } 
            if(sum < target){
                s++;
            }
            else {
                e--;
            }
        }
        return ans;
    }
};