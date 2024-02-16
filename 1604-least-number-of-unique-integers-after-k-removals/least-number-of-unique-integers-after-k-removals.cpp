class Solution {
public:
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
        unordered_map<int,int> mp;
        for(auto x:arr) mp[x]++;
        vector<int> v;
        for(auto i:mp){
            v.push_back(i.second);
        }
        sort(v.begin(),v.end());
         int c=0;
         for(int i:v){
             if(k>=i){
                 k-=i;
                 c++;
             }else{
                 break;
         }
        }

        return v.size() - c;
    }
};