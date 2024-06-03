class Solution {
private:
    void find(vector<int>&nums, vector<int>& ds,vector<vector<int>>& ans,unordered_map<int,int>& mp){
        if(ds.size() == nums.size()){
            ans.push_back(ds);
            return;
        }
        for(int i=0;i<nums.size();i++){
            if(!mp[i]){
                ds.push_back(nums[i]);
                mp[i]=1;
                find(nums,ds,ans,mp);
                ds.pop_back();
                mp[i]=0;
            }
        }
    }
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<int> ds;
        vector<vector<int>> ans;
        unordered_map<int,int> mp;
        find(nums,ds,ans,mp);
        return ans;
    }
};