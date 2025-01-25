class Solution {
public:
    vector<int> lexicographicallySmallestArray(vector<int>& nums, int limit) {
        vector<pair<int,int>> pairs;
        int n=nums.size();

        for(int i=0;i<n;i++){
            pairs.push_back({nums[i],i});
        }

        sort(pairs.begin(),pairs.end());
        vector<vector<pair<int,int>>> group;
        group.push_back({pairs[0]});

        for(int i=1;i<n;i++){
            if(pairs[i].first - pairs[i-1].first<=limit){
                group.back().push_back({pairs[i]});
        }else{
            group.push_back({pairs[i]});
            }
        }

        for(auto grp:group){
            vector<int> indices;
            for(auto [value,index]: grp){
                indices.push_back(index);
            }
            sort(indices.begin(),indices.end());

            for(auto i=0;i<indices.size();i++){
                nums[indices[i]]= grp[i].first;
            }
        }
        return nums;
    }
};