class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        stack<int>st;
        unordered_map<int, int> mp;
        mp[nums2[nums2.size()-1]]=-1;
        st.push(nums2[nums2.size()-1]);

        for(int i=nums2.size()-2;i>=0;i--){
            while(!st.empty() && st.top()<=nums2[i]){
                st.pop();
            }
            int res=st.empty()?-1:st.top();
            mp[nums2[i]]=res;
            st.push(nums2[i]);
        }

        vector<int> result;
        for(int i=0;i<nums1.size();i++){
            result.push_back(mp[nums1[i]]);
        }

        return result;
    }
};