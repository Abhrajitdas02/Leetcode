class Solution {
public:
  int mostFrequentEven(vector<int>& nums) {
	    int ans = -1;
        vector<int> findMax;
        vector<int> even;
        unordered_map<int,int> mp;
        for(int i=0;i<nums.size();++i){
            if(nums[i]%2==0){
            mp[nums[i]]++;
            }
        }
        int max=0;
        for(auto i: mp){
           findMax.push_back(i.second); 
        }
        if(findMax.size()==0) return ans;
		
        sort(findMax.begin(),findMax.end());
        max=findMax[findMax.size()-1];
        for(auto i:mp){
            if(i.second==max){
                even.push_back(i.first);
            }
        }
        sort(even.begin(),even.end());
       
        if(even.size()>=1) return even[0];
        else  return ans;
    }
};